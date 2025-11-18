################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/U7247/Documents/GitHub/sparkcore/Components/TorqueController/src/torque.c 

C_DEPS += \
./Sparkscore-Components/TorqueController/src/torque.d 

OBJS += \
./Sparkscore-Components/TorqueController/src/torque.o 


# Each subdirectory must supply rules for building sources it contributes
Sparkscore-Components/TorqueController/src/torque.o: C:/Users/U7247/Documents/GitHub/sparkcore/Components/TorqueController/src/torque.c Sparkscore-Components/TorqueController/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L451xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/U7247/Documents/GitHub/sparkcore/Projects/MUSTERA-POC-TORQUECONTROLLER/../../Applications/Includes" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Sparkscore-2d-Components-2f-TorqueController-2f-src

clean-Sparkscore-2d-Components-2f-TorqueController-2f-src:
	-$(RM) ./Sparkscore-Components/TorqueController/src/torque.cyclo ./Sparkscore-Components/TorqueController/src/torque.d ./Sparkscore-Components/TorqueController/src/torque.o ./Sparkscore-Components/TorqueController/src/torque.su

.PHONY: clean-Sparkscore-2d-Components-2f-TorqueController-2f-src

