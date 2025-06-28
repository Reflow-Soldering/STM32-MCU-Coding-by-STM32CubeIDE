#include <main.h>
#include "clcd/clcd.h"
#include <stdio.h>


/*
 * Need Function
 * 1. CLCD Initialize
 * 2. CLCD App print function
 * 3. CLCD App function - Not Use
 */

char clcd_string_buf[16];
void CLCD_Init_1602(void)
{
	CLCD_Init(16, 2);//CLCD 초기화
}

void CLCD_Print_First(void)
{
	CLCD_Puts(0, 0, "Temp & Humidity");
	CLCD_Puts(0, 1, "Display App");
}
void CLCD_Print_Humi_Temp(float humi_data, float temp_data, uint8_t *flag)
{
	if(*flag == 1)
	{
		sprintf(clcd_string_buf, "Temp : %.2f", temp_data);
		CLCD_Puts(0, 0, clcd_string_buf);
		sprintf(clcd_string_buf, "Humi : %.2f", humi_data);
		CLCD_Puts(0, 1, clcd_string_buf);
		*flag = 0;
	}
}

void CLCD_Print_Vol_Cds(float vol_data, float cds_data, uint8_t *flag)
{
	if(*flag == 1)
	{
		sprintf(clcd_string_buf, "Vol : %.2f", vol_data);
		CLCD_Puts(0, 0, clcd_string_buf);
		sprintf(clcd_string_buf, "Cds : %.2f", cds_data);
		CLCD_Puts(0, 1, clcd_string_buf);
		*flag = 0;
	}
}

