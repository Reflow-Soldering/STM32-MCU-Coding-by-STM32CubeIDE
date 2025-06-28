#include <stdio.h>
#include <main.h>
extern ADC_HandleTypeDef hadc1, hadc2;


/*
 * ADC Error check & Calibration Init
 */
void ADC_Control_Init(void)
{
	if(HAL_ADCEx_Calibration_Start(&hadc1) != HAL_OK)
	   {
	 	  Error_Handler();
	   }
	  if(HAL_ADCEx_Calibration_Start(&hadc2) != HAL_OK)
	    {
	  	  Error_Handler();
	    }

}

/*
 * ADC Volume Start & Get data
 */
void ADC_Volume_Control(uint8_t *flag,uint16_t *data)
{
	if(HAL_ADC_Start(&hadc1) != HAL_OK)
			  {
				  Error_Handler();
			  }
		 while(((HAL_ADC_GetState(&hadc1) & HAL_ADC_STATE_REG_EOC) != HAL_ADC_STATE_REG_EOC))
		 {

				  HAL_ADC_PollForConversion(&hadc1, 100);


				  *data = HAL_ADC_GetValue(&hadc1);
		 }
			  HAL_ADC_Stop(&hadc1);
}

/*
 * ADC Cds Start & Get data
 */
void ADC_Cds_Control(uint8_t *flag, uint16_t *data)
{

	  if(HAL_ADC_Start(&hadc2) != HAL_OK)
			  {
				  Error_Handler();
			  }

	  while((HAL_ADC_GetState(&hadc2) & HAL_ADC_STATE_REG_EOC) != HAL_ADC_STATE_REG_EOC)
	  {
				  HAL_ADC_PollForConversion(&hadc2, 100);


					  *data = HAL_ADC_GetValue(&hadc2);
	  }
}
