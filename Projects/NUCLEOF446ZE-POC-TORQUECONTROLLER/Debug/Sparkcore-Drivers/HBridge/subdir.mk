################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/abelm/sparkcore/Drivers/HBridge/HBridge_AMuster.cpp 

OBJS += \
./Sparkcore-Drivers/HBridge/HBridge_AMuster.o 

CPP_DEPS += \
./Sparkcore-Drivers/HBridge/HBridge_AMuster.d 


# Each subdirectory must supply rules for building sources it contributes
Sparkcore-Drivers/HBridge/HBridge_AMuster.o: C:/Users/abelm/sparkcore/Drivers/HBridge/HBridge_AMuster.cpp Sparkcore-Drivers/HBridge/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Drivers/Includes" -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Components/Includes" -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Applications/Includes" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Sparkcore-2d-Drivers-2f-HBridge

clean-Sparkcore-2d-Drivers-2f-HBridge:
	-$(RM) ./Sparkcore-Drivers/HBridge/HBridge_AMuster.cyclo ./Sparkcore-Drivers/HBridge/HBridge_AMuster.d ./Sparkcore-Drivers/HBridge/HBridge_AMuster.o ./Sparkcore-Drivers/HBridge/HBridge_AMuster.su

.PHONY: clean-Sparkcore-2d-Drivers-2f-HBridge

