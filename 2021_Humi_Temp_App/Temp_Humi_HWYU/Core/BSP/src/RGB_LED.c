#include <main.h>


// htim3 extern
extern TIM_HandleTypeDef htim3;

/*
 * PWM Initialize
 */
void RGB_Display_Init(void)
{
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1,0);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2,0);
}

/*
 * Temp & Humi 1second display
 * When flag 1, the function makes flag 0 after work that
 * And RB sequence be made 1 or 0 internal function the RGB_Temp_Humi
 */
void RGB_Temp_Humi(uint8_t *RB_sequence, float temp, float humi, uint8_t *flag)
{
	if( *flag == 1)
	{
		if(*RB_sequence==0)
		{

			__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,0);
			temp = 50*temp;
			__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_2,	(uint16_t)temp);
			(*RB_sequence)++;
		}
		else
		{
			__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_2,0);
			humi = humi*10;
			__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,(uint16_t)humi);
			(*RB_sequence) = 0;
		}
	}
	*flag = 0;
}
