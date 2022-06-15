################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Application/Source/Moros.cpp \
../Application/Source/MorosLIDARTrigger.cpp \
../Application/Source/MorosTriggerService.cpp 

OBJS += \
./Application/Source/Moros.o \
./Application/Source/MorosLIDARTrigger.o \
./Application/Source/MorosTriggerService.o 

CPP_DEPS += \
./Application/Source/Moros.d \
./Application/Source/MorosLIDARTrigger.d \
./Application/Source/MorosTriggerService.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Source/%.o Application/Source/%.su: ../Application/Source/%.cpp Application/Source/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Application/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-Source

clean-Application-2f-Source:
	-$(RM) ./Application/Source/Moros.d ./Application/Source/Moros.o ./Application/Source/Moros.su ./Application/Source/MorosLIDARTrigger.d ./Application/Source/MorosLIDARTrigger.o ./Application/Source/MorosLIDARTrigger.su ./Application/Source/MorosTriggerService.d ./Application/Source/MorosTriggerService.o ./Application/Source/MorosTriggerService.su

.PHONY: clean-Application-2f-Source

