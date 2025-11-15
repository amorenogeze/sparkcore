################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/abelm/sparkcore/Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.cpp 

OBJS += \
./Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.o 

CPP_DEPS += \
./Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.d 


# Each subdirectory must supply rules for building sources it contributes
Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.o: C:/Users/abelm/sparkcore/Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.cpp Applications/mcc-sparkcore-emc/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Drivers/Includes" -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Components/Includes" -I"C:/Users/abelm/sparkcore/Projects/NUCLEOF446ZE-POC-TORQUECONTROLLER/../../Applications/Includes" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Applications-2f-mcc-2d-sparkcore-2d-emc

clean-Applications-2f-mcc-2d-sparkcore-2d-emc:
	-$(RM) ./Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.cyclo ./Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.d ./Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.o ./Applications/mcc-sparkcore-emc/mcc_sparkcore_emc.su

.PHONY: clean-Applications-2f-mcc-2d-sparkcore-2d-emc

