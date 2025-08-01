################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
osif/%.o: ../osif/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -Oz -flto -I"C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5" -I"C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/ti/zigbee/osif/include" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/ti/zigbee/include" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/ti/common/cc26xx/flash_interface/" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/zigbee/zboss_r23/include" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/zigbee/zboss_r23/thirdparty/uECC" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/zigbee/zboss_r23/thirdparty/emill" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/zigbee/zboss_r23/thirdparty/nacl" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/kernel/freertos" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/ti/posix/ticlang" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/freertos/include" -I"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/freertos/portable/GCC/ARM_CM0" -Dti_log_Log_ENABLE -DOTA_ONCHIP -DSYNC_WRITE -DZB_TI_F3_ZBOSS -DZB_CONFIGURABLE_MEM -DZB_ED_ROLE -DxDISABLE_TURBO_POLL -gdwarf-3 -Wno-gnu-folding-constant -Wno-unaligned-access -MMD -MP -MF"osif/$(basename $(<F)).d_raw" -MT"$(@)" -I"C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/syscfg"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


