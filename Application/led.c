#include "led.h"


/**
* @brief LED��˸����
*/
void LED_FLASH_TASK(void const * argument)
{
	  while(1)
		{
			HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
			osDelay(1000);
		}
}






