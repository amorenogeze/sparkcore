################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/abelm/sparkcore/Components/TorqueController/src/torque.c 

C_DEPS += \
./Sparkcore-Components/TorqueController/src/torque.d 

OBJS += \
./Sparkcore-Components/TorqueController/src/torque.o 


# Each subdirectory must supply rules for building sources it contributes
Sparkcore-Components/TorqueController/src/torque.o: C:/Users/abelm/sparkcore/Components/TorqueController/src/torque.c Sparkcore-Components/TorqueController/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Applications/Includes" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Sparkcore-2d-Components-2f-TorqueController-2f-src

clean-Sparkcore-2d-Components-2f-TorqueController-2f-src:
	-$(RM) ./Sparkcore-Components/TorqueController/src/torque.cyclo ./Sparkcore-Components/TorqueController/src/torque.d ./Sparkcore-Components/TorqueController/src/torque.o ./Sparkcore-Components/TorqueController/src/torque.su

.PHONY: clean-Sparkcore-2d-Components-2f-TorqueController-2f-src

