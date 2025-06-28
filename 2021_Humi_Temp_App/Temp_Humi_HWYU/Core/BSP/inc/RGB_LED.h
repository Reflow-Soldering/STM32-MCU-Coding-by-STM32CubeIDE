#ifndef	__RGB_LED_H__
#define __RGB_LED_H__
void RGB_Display_Init(void);
void RGB_Temp_Humi(uint8_t *RB_sequence, float temp, float humi, uint8_t *flag);

#endif
