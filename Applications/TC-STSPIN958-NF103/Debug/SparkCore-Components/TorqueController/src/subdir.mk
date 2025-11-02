################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/abelm/sparkcore/Components/TorqueController/src/torque.c 

C_DEPS += \
./SparkCore-Components/TorqueController/src/torque.d 

OBJS += \
./SparkCore-Components/TorqueController/src/torque.o 


# Each subdirectory must supply rules for building sources it contributes
SparkCore-Components/TorqueController/src/torque.o: C:/Users/abelm/sparkcore/Components/TorqueController/src/torque.c SparkCore-Components/TorqueController/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/abelm/sparkcore/Applications/TC-STSPIN958-NF103/../../Drivers/CurrentMeter/inc" -I"C:/Users/abelm/sparkcore/Applications/TC-STSPIN958-NF103/../../Drivers/Encoder/inc" -I"C:/Users/abelm/sparkcore/Applications/TC-STSPIN958-NF103/../../Drivers/HBridge/inc" -I"C:/Users/abelm/sparkcore/Applications/TC-STSPIN958-NF103/../../Drivers/VoltMeter/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-SparkCore-2d-Components-2f-TorqueController-2f-src

clean-SparkCore-2d-Components-2f-TorqueController-2f-src:
	-$(RM) ./SparkCore-Components/TorqueController/src/torque.cyclo ./SparkCore-Components/TorqueController/src/torque.d ./SparkCore-Components/TorqueController/src/torque.o ./SparkCore-Components/TorqueController/src/torque.su

.PHONY: clean-SparkCore-2d-Components-2f-TorqueController-2f-src

