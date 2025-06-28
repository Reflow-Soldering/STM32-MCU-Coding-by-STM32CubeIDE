################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/BSP/src/ADC_Control.c \
../Core/BSP/src/CLCD_Print.c \
../Core/BSP/src/LED_Pattern.c \
../Core/BSP/src/Mode_Swtich.c \
../Core/BSP/src/RGB_LED.c 

OBJS += \
./Core/BSP/src/ADC_Control.o \
./Core/BSP/src/CLCD_Print.o \
./Core/BSP/src/LED_Pattern.o \
./Core/BSP/src/Mode_Swtich.o \
./Core/BSP/src/RGB_LED.o 

C_DEPS += \
./Core/BSP/src/ADC_Control.d \
./Core/BSP/src/CLCD_Print.d \
./Core/BSP/src/LED_Pattern.d \
./Core/BSP/src/Mode_Swtich.d \
./Core/BSP/src/RGB_LED.d 


# Each subdirectory must supply rules for building sources it contributes
Core/BSP/src/%.o: ../Core/BSP/src/%.c Core/BSP/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"F:/CubeIDE/Temp_Humi_HWYU/Core/BSP/inc" -I"F:/CubeIDE/Temp_Humi_HWYU/Drivers/BSP/NUCLEOEVB" -I"F:/CubeIDE/Temp_Humi_HWYU/Drivers/BSP/NUCLEOEVB" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

