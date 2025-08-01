################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS

GEN_OPTS__FLAG := @"syscfg/ti_utils_build_compiler.opt" 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./flash_interface_internal.o" \
"./on_off_switch_ota_client.o" \
"./syscfg/ti_devices_config.o" \
"./syscfg/ti_radio_config.o" \
"./syscfg/ti_drivers_config.o" \
"./syscfg/ti_log_config.o" \
"./syscfg/ti_zigbee_config.o" \
"./syscfg/ti_freertos_config.o" \
"./syscfg/ti_freertos_portable_config.o" \
"./ota_client_interface.o" \
"./version.o" \
"./osif/ti_f3_led_buttons.o" \
"./osif/ti_f3_main.o" \
"./osif/ti_f3_ota.o" \
"../lpf3_zigbee_freertos.cmd" \
$(GEN_CMDS__FLAG) \
-Wl,-l"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/ti/log/lib/ticlang/m0p/log_cc23x0r5.a" \
-Wl,-lti_utils_build_linker.cmd.genlibs \
-Wl,-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include osif/subdir_vars.mk
-include subdir_rules.mk
-include osif/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
flower_ota_onchip_CC2340R5.out 

EXE_OUTPUTS__QUOTED += \
"flower_ota_onchip_CC2340R5.out" 


# All Target
all:
	@$(MAKE) --no-print-directory pre-build
	@$(MAKE) --no-print-directory main-build

# Main-build Target
main-build: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "flower_ota_onchip_CC2340R5.out"

# Tool invocations
flower_ota_onchip_CC2340R5.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -Oz -flto -Dti_log_Log_ENABLE -DOTA_ONCHIP -DSYNC_WRITE -DZB_TI_F3_ZBOSS -DZB_CONFIGURABLE_MEM -DZB_ED_ROLE -DxDISABLE_TURBO_POLL -gdwarf-3 -Wno-gnu-folding-constant -Wno-unaligned-access -Wl,-m"flower_ota_onchip_CC2340R5.map" -Wl,-i"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source" -Wl,-i"C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/ti/common/cc26xx/flash_interface/" -Wl,-i"C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/syscfg" -Wl,-i"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/lib" -Wl,--reread_libs -Wl,--define=OTA_ONCHIP -Wl,--diag_wrap=off -Wl,--display_error_number -Wl,--warn_sections -Wl,--xml_link_info="flower_ota_onchip_CC2340R5_linkInfo.xml" -Wl,--rom_model -o "flower_ota_onchip_CC2340R5.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(GEN_MISC_FILES__QUOTED)$(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "flash_interface_internal.o" "on_off_switch_ota_client.o" "syscfg\ti_devices_config.o" "syscfg\ti_radio_config.o" "syscfg\ti_drivers_config.o" "syscfg\ti_log_config.o" "syscfg\ti_zigbee_config.o" "syscfg\ti_freertos_config.o" "syscfg\ti_freertos_portable_config.o" "ota_client_interface.o" "version.o" "osif\ti_f3_led_buttons.o" "osif\ti_f3_main.o" "osif\ti_f3_ota.o" 
	-$(RM) "flash_interface_internal.d" "on_off_switch_ota_client.d" "syscfg\ti_devices_config.d" "syscfg\ti_radio_config.d" "syscfg\ti_drivers_config.d" "syscfg\ti_log_config.d" "syscfg\ti_zigbee_config.d" "syscfg\ti_freertos_config.d" "syscfg\ti_freertos_portable_config.d" "ota_client_interface.d" "version.d" "osif\ti_f3_led_buttons.d" "osif\ti_f3_main.d" "osif\ti_f3_ota.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

pre-build:
	-python C:\Users\Sergey\workspace_v12\flower_ota_onchip_CC2340R5/ver.py
	-@echo ' '

post-build:
	-C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/tools/common/crc_tool/crc_tool patch-image --elf C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.out --symbol-prefix ti_utils_build_GenMap_sym_CRC --output C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.out
	-C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmobjcopy -O ihex C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.out C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.hex --remove-section=.ccfg
	-C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmobjcopy -O binary C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.out C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.bin --remove-section=.ccfg
	-C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/tools/common/mcuboot/imgtool sign --header-size 0x100 --align 4 --slot-size 0x0003D800 --version 1.0.0 --pad --pad-header --key C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/source/third_party/mcuboot/root-ec-p256.pem  C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.bin C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5_ota.bin
	-C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmobjcopy -O ihex C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.out C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5.hex
	-C:/ti/simplelink_lowpower_f3_sdk_8_40_02_01/tools/zstack/zigbee_ota_image_converter/zOTAfileGen C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/flower_ota_onchip_CC2340R5_ota.bin C:/Users/Sergey/workspace_v12/flower_ota_onchip_CC2340R5/Debug/    BEBE 2340 00000004
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

