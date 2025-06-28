#include <main.h>
extern uint8_t led_pattern;
extern uint8_t sequence_number;
extern uint16_t timer_counter;

/*
 * If you want to make Timer_counter 0, delete the comment timer_counter=0
 * below GPIO_PIN_4.
 * if you don't want do that comment timer_counter=0;
 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  switch(GPIO_Pin)
  {

  case GPIO_PIN_4:
	  //timer_counter=0;
	  //카운트값을 초기화 하지 않으면 버튼을 누르고 이후의 값이 유지되어 즉시갱신
	  //즉시 갱신을 원하지 않는 경우 timer_counter 주석을 해제한다.
	  led_pattern++;
	  if(led_pattern == 5)
	  {
		  led_pattern = 1;
	  }
	  break;
  case GPIO_PIN_5:
	  break;
  case GPIO_PIN_11:
	  break;
  case GPIO_PIN_12:
	  break;
  }
  sequence_number = 0;
}

