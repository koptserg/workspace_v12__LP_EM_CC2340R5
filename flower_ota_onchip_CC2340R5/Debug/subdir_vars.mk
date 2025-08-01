################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../lpf3_zigbee_freertos.cmd 

SYSCFG_SRCS += \
../on_off_switch_ota_client_onchip.syscfg 

C_SRCS += \
../flash_interface_internal.c \
../on_off_switch_ota_client.c \
./syscfg/ti_devices_config.c \
./syscfg/ti_radio_config.c \
./syscfg/ti_drivers_config.c \
./syscfg/ti_log_config.c \
./syscfg/ti_zigbee_config.c \
./syscfg/ti_freertos_config.c \
./syscfg/ti_freertos_portable_config.c \
../ota_client_interface.c \
../version.c 

GEN_FILES += \
./syscfg/ti_devices_config.c \
./syscfg/ti_radio_config.c \
./syscfg/ti_drivers_config.c \
./syscfg/ti_log_config.c \
./syscfg/ti_utils_build_compiler.opt \
./syscfg/ti_zigbee_config.c \
./syscfg/ti_freertos_config.c \
./syscfg/ti_freertos_portable_config.c 

GEN_MISC_DIRS += \
./syscfg 

C_DEPS += \
./flash_interface_internal.d \
./on_off_switch_ota_client.d \
./syscfg/ti_devices_config.d \
./syscfg/ti_radio_config.d \
./syscfg/ti_drivers_config.d \
./syscfg/ti_log_config.d \
./syscfg/ti_zigbee_config.d \
./syscfg/ti_freertos_config.d \
./syscfg/ti_freertos_portable_config.d \
./ota_client_interface.d \
./version.d 

GEN_OPTS += \
./syscfg/ti_utils_build_compiler.opt 

OBJS += \
./flash_interface_internal.o \
./on_off_switch_ota_client.o \
./syscfg/ti_devices_config.o \
./syscfg/ti_radio_config.o \
./syscfg/ti_drivers_config.o \
./syscfg/ti_log_config.o \
./syscfg/ti_zigbee_config.o \
./syscfg/ti_freertos_config.o \
./syscfg/ti_freertos_portable_config.o \
./ota_client_interface.o \
./version.o 

GEN_MISC_FILES += \
./syscfg/ti_radio_config.h \
./syscfg/ti_drivers_config.h \
./syscfg/ti_utils_runtime_rov.js.xs \
./syscfg/ti_log_config.h \
./syscfg/ti_utils_build_linker.cmd.genlibs \
./syscfg/ti_utils_build_linker.cmd.genmap \
./syscfg/syscfg_c.rov.xs \
./syscfg/ti_zigbee_config.h \
./syscfg/FreeRTOSConfig.h 

GEN_MISC_DIRS__QUOTED += \
"syscfg" 

OBJS__QUOTED += \
"flash_interface_internal.o" \
"on_off_switch_ota_client.o" \
"syscfg\ti_devices_config.o" \
"syscfg\ti_radio_config.o" \
"syscfg\ti_drivers_config.o" \
"syscfg\ti_log_config.o" \
"syscfg\ti_zigbee_config.o" \
"syscfg\ti_freertos_config.o" \
"syscfg\ti_freertos_portable_config.o" \
"ota_client_interface.o" \
"version.o" 

GEN_MISC_FILES__QUOTED += \
"syscfg\ti_radio_config.h" \
"syscfg\ti_drivers_config.h" \
"syscfg\ti_utils_runtime_rov.js.xs" \
"syscfg\ti_log_config.h" \
"syscfg\ti_utils_build_linker.cmd.genlibs" \
"syscfg\ti_utils_build_linker.cmd.genmap" \
"syscfg\syscfg_c.rov.xs" \
"syscfg\ti_zigbee_config.h" \
"syscfg\FreeRTOSConfig.h" 

C_DEPS__QUOTED += \
"flash_interface_internal.d" \
"on_off_switch_ota_client.d" \
"syscfg\ti_devices_config.d" \
"syscfg\ti_radio_config.d" \
"syscfg\ti_drivers_config.d" \
"syscfg\ti_log_config.d" \
"syscfg\ti_zigbee_config.d" \
"syscfg\ti_freertos_config.d" \
"syscfg\ti_freertos_portable_config.d" \
"ota_client_interface.d" \
"version.d" 

GEN_FILES__QUOTED += \
"syscfg\ti_devices_config.c" \
"syscfg\ti_radio_config.c" \
"syscfg\ti_drivers_config.c" \
"syscfg\ti_log_config.c" \
"syscfg\ti_utils_build_compiler.opt" \
"syscfg\ti_zigbee_config.c" \
"syscfg\ti_freertos_config.c" \
"syscfg\ti_freertos_portable_config.c" 

C_SRCS__QUOTED += \
"../flash_interface_internal.c" \
"../on_off_switch_ota_client.c" \
"./syscfg/ti_devices_config.c" \
"./syscfg/ti_radio_config.c" \
"./syscfg/ti_drivers_config.c" \
"./syscfg/ti_log_config.c" \
"./syscfg/ti_zigbee_config.c" \
"./syscfg/ti_freertos_config.c" \
"./syscfg/ti_freertos_portable_config.c" \
"../ota_client_interface.c" \
"../version.c" 

SYSCFG_SRCS__QUOTED += \
"../on_off_switch_ota_client_onchip.syscfg" 


