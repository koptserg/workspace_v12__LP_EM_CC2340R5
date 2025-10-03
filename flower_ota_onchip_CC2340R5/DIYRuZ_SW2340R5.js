const fz = require('zigbee-herdsman-converters/converters/fromZigbee');
const tz = require('zigbee-herdsman-converters/converters/toZigbee');
const exposes = require('zigbee-herdsman-converters/lib/exposes');
const constants = require('zigbee-herdsman-converters/lib/constants');
const reporting = require('zigbee-herdsman-converters/lib/reporting');
const ota = require('zigbee-herdsman-converters/lib/ota');
const extend = require('zigbee-herdsman-converters/lib/modernExtend');
const e = exposes.presets;
const ea = exposes.access;
const {postfixWithEndpointName} = require('zigbee-herdsman-converters/lib/utils');

const { deviceAddCustomCluster, temperature, numeric } = require('zigbee-herdsman-converters/lib/modernExtend');
const Zcl = require('zigbee-herdsman').Zcl;

const bind = async (endpoint, target, clusters) => {
    for (const cluster of clusters) {
        await endpoint.bind(cluster, target);
    }
};

//const customDiyruz = 0xFFF0;

//const fz_local = {
//    custom_diyruz: {
//        cluster: 0xFFF0,
//        type: ['attributeReport', 'readResponse'],
//        convert: (model, msg, publish, options, meta) => {
//            const result = {};
//            if (msg.data.hasOwnProperty(0xF000)) {
//                result.diyruz_value = msg.data[0xF000];
//            }
//            return result;
//        },
//    },
//};

const ACCESS_STATE = 0b001, ACCESS_WRITE = 0b010, ACCESS_READ = 0b100;

const device = {
        zigbeeModel: ['DIYRuZ_SW2340R5'],
        model: 'DIYRuZ_SW2340R5',
        vendor: 'DIYRuZ',
        description: '[SW](https://github.com/koptserg/temperature)',
        supports: 'genOnOff',
        ota: ota.zigbeeOTA,
        fromZigbee: [
            fz.command_toggle,
            fz.ignore_genIdentify,
            fz.battery,
            fz.soil_moisture,
//            fz_local.custom_diyruz,
        ],
        toZigbee: [
            tz.factory_reset,
        ],
        configure: async (device, coordinatorEndpoint) => {
            const tenthEndpoint = device.getEndpoint(10);
            const twelfthEndpoint = device.getEndpoint(12);
            await bind(tenthEndpoint, coordinatorEndpoint, [
                'genOnOff',
                'genPowerCfg',
                'msSoilMoisture',
            ]);            
//            await bind(twelfthEndpoint, coordinatorEndpoint, [
//                0xFFF0,
//            ]);
//            const customDiyruzPayload = [{
//              attribute: {ID: 0xF000, type: 0x21},
//              minimumReportInterval: 0,
//              maximumReportInterval: 3600,
//              reportableChange: 0,
//            }];
//            await twelfthEndpoint.configureReporting(customDiyruz, customDiyruzPayload);
//
//            const genPowerCfgPayload = [{
//              attribute: 'batteryPercentageRemaining',
//              minimumReportInterval: 0,
//              maximumReportInterval: 3600,
//              reportableChange: 0,
//            }];
//            await tenthEndpoint.configureReporting(genPowerCfg, genPowerCfgPayload);
        },
        exposes: [
            e.action(['toggle']),
            e.battery(),
            e.battery_voltage(),
            e.soil_moisture(),
//            e.numeric('custom_diyruz', ea.STATE, ea.READ).withLabel('ed').withDescription('custom_diyruz'),
        ],
};

module.exports = device;