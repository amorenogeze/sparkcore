################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/abelm/sparkcore/Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.cpp 

OBJS += \
./Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.o 

CPP_DEPS += \
./Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.d 


# Each subdirectory must supply rules for building sources it contributes
Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.o: C:/Users/abelm/sparkcore/Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.cpp Applications/Demos/mcc-poc-torquecontroller/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Drivers/Includes" -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Components/Includes" -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Applications/Includes" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Applications-2f-Demos-2f-mcc-2d-poc-2d-torquecontroller

clean-Applications-2f-Demos-2f-mcc-2d-poc-2d-torquecontroller:
	-$(RM) ./Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.cyclo ./Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.d ./Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.o ./Applications/Demos/mcc-poc-torquecontroller/mcc_poc_torquecontroller.su

.PHONY: clean-Applications-2f-Demos-2f-mcc-2d-poc-2d-torquecontroller

