################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.c 

OBJS += \
./Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.o 

C_DEPS += \
./Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/NUCLEOEVB/hdc1080/%.o Drivers/BSP/NUCLEOEVB/hdc1080/%.su Drivers/BSP/NUCLEOEVB/hdc1080/%.cyclo: ../Drivers/BSP/NUCLEOEVB/hdc1080/%.c Drivers/BSP/NUCLEOEVB/hdc1080/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"F:/CubeIDE/Temp_Humi_HWYU/Core/BSP/inc" -I"F:/CubeIDE/Temp_Humi_HWYU/Drivers/BSP/NUCLEOEVB" -I"F:/CubeIDE/Temp_Humi_HWYU/Drivers/BSP/NUCLEOEVB" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-NUCLEOEVB-2f-hdc1080

clean-Drivers-2f-BSP-2f-NUCLEOEVB-2f-hdc1080:
	-$(RM) ./Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.cyclo ./Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.d ./Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.o ./Drivers/BSP/NUCLEOEVB/hdc1080/hdc1080.su

.PHONY: clean-Drivers-2f-BSP-2f-NUCLEOEVB-2f-hdc1080

