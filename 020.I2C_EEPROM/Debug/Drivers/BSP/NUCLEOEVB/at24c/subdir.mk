################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/NUCLEOEVB/at24c/at24c.c 

OBJS += \
./Drivers/BSP/NUCLEOEVB/at24c/at24c.o 

C_DEPS += \
./Drivers/BSP/NUCLEOEVB/at24c/at24c.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/NUCLEOEVB/at24c/%.o Drivers/BSP/NUCLEOEVB/at24c/%.su Drivers/BSP/NUCLEOEVB/at24c/%.cyclo: ../Drivers/BSP/NUCLEOEVB/at24c/%.c Drivers/BSP/NUCLEOEVB/at24c/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I"H:/udemy/STM32-MCU-Coding-by-STM32CubeIDE/020.I2C_EEPROM/Drivers/BSP/NUCLEOEVB" -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-NUCLEOEVB-2f-at24c

clean-Drivers-2f-BSP-2f-NUCLEOEVB-2f-at24c:
	-$(RM) ./Drivers/BSP/NUCLEOEVB/at24c/at24c.cyclo ./Drivers/BSP/NUCLEOEVB/at24c/at24c.d ./Drivers/BSP/NUCLEOEVB/at24c/at24c.o ./Drivers/BSP/NUCLEOEVB/at24c/at24c.su

.PHONY: clean-Drivers-2f-BSP-2f-NUCLEOEVB-2f-at24c

