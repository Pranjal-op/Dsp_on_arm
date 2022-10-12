################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/signals.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/main.o \
./Src/signals.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/main.d \
./Src/signals.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -DSTM32F411xE -c -I"D:/Programming/Dsp_on_arm/1_plotting_signal_with_logicanalyzer/chip_headers/CMSIS/Include" -I"D:/Programming/Dsp_on_arm/1_plotting_signal_with_logicanalyzer/chip_headers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/STMF32/Dsp_on_arm/1_plotting_signal_with_logicanalyzer/chip_headers/CMSIS/Include" -I"D:/STMF32/Dsp_on_arm/1_plotting_signal_with_logicanalyzer/chip_headers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/STMF32/Dsp_on_arm/1_plotting_signal_with_logicanalyzer/Inc" -I"D:/Programming/Dsp_on_arm/1_plotting_signal_with_logicanalyzer/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/main.d ./Src/main.o ./Src/main.su ./Src/signals.d ./Src/signals.o ./Src/signals.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

