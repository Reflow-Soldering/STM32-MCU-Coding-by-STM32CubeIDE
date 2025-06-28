#include <main.h>
extern uint8_t *sequence_number;

/*
 * Need Function
 * 1. Init func each LED Pattern
 * 2. Cycle func of each LED Pattern
 * 3. Every function(Not Init function) works when flag 1
 */

void LED_Pattern_Init_One(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6|GPIO_PIN_11, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7|GPIO_PIN_12, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
}

void LED_Pattern_Init_Two(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6|GPIO_PIN_7, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11|GPIO_PIN_12, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
}

void LED_Pattern_Init_Three(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_11|GPIO_PIN_12, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
}

void LED_Pattern_Init_Four(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_11|GPIO_PIN_12, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
}

void LED_Pattern_One(uint8_t *flag)
{
	if(*flag == 1)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_7);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_11);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_12);
	}
}

void LED_Pattern_Two(uint8_t *flag)
{
	if(*flag == 1)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_7);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_11);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_12);
	}
}

void LED_Pattern_Three(uint8_t *flag)
{
	if(*flag == 1)
	{
		//HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_11|GPIO_PIN_12);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_7);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_11);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_12);
	}
}

void LED_Pattern_Four(uint8_t *flag, uint8_t *sequence)
{
	if(*flag == 1)
	{
		switch(*sequence)
			{
			case 1 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
				break;
			case 2 :
				//0의 케이스에서 6번핀은 LED가 켜져있으므로 하나만 하면 된다.
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
				break;
			case 3 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
				break;
			case 4 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
				break;
				//여기까지 4개가 모두 켜진 상태 아래부터는 왼쪽에서 꺼지게 할 것
			case 5 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
				break;
			case 6 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
				break;
			case 7 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
				break;
			case 8 :
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
				break;
			}
	}
}

void LED_Patterns(uint8_t pattern, uint8_t *sequence, uint8_t *flag)
{
	if(*flag == 1)
	{
		switch(pattern)
		{
		case 1:
			if(*sequence == 0)
			{
				LED_Pattern_Init_One();
			}
			else
			{
				LED_Pattern_One(flag);
			}
			break;
		case 2 :
			if(*sequence == 0)
			{
				LED_Pattern_Init_Two();
			}
			else
			{
				LED_Pattern_Two(flag);
			}
			break;
		case 3 :
			if(*sequence == 0)
			{
				LED_Pattern_Init_Three();
			}
			else
			{
				LED_Pattern_Three(flag);
			}
			break;
		case 4 :
			if(*sequence == 0)
			{
				LED_Pattern_Init_Four();
			}
			else
			{
				LED_Pattern_Four(flag, sequence);

			}
			break;
		}
		*sequence=((*sequence)%9+1);
		if(*sequence == 9)
		{
			*sequence=1;
		}
	}
		*flag = 0;
}


