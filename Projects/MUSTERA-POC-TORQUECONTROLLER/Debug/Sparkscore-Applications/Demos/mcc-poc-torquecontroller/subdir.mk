################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/U7247/Documents/GitHub/sparkcore/Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.cpp 

OBJS += \
./Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.o 

CPP_DEPS += \
./Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.d 


# Each subdirectory must supply rules for building sources it contributes
Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.o: C:/Users/U7247/Documents/GitHub/sparkcore/Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.cpp Sparkscore-Applications/Demos/mcc-poc-torquecontroller/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L451xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/U7247/Documents/GitHub/sparkcore/Projects/MUSTERA-POC-TORQUECONTROLLER/../../Applications/Includes" -I"C:/Users/U7247/Documents/GitHub/sparkcore/Projects/MUSTERA-POC-TORQUECONTROLLER/../../Drives/Includes" -I"C:/Users/U7247/Documents/GitHub/sparkcore/Projects/MUSTERA-POC-TORQUECONTROLLER/../../Components/Includes" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Sparkscore-2d-Applications-2f-Demos-2f-mcc-2d-poc-2d-torquecontroller

clean-Sparkscore-2d-Applications-2f-Demos-2f-mcc-2d-poc-2d-torquecontroller:
	-$(RM) ./Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.cyclo ./Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.d ./Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.o ./Sparkscore-Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.su

.PHONY: clean-Sparkscore-2d-Applications-2f-Demos-2f-mcc-2d-poc-2d-torquecontroller

