#ifndef __CLCD_PRINT_H__
#define __CLCD_PRINT_H__

void CLCD_Init_1602(void);
void CLCD_Print_First(void);
void CLCD_Print_Humi_Temp(float humi_data, float temp_data, uint8_t *flag);
void CLCD_Print_Vol_Cds(float vol_data, float cds_data, uint8_t *flag);
#endif
