#include "led.h"


/**
* @brief LED…¡À∏»ŒŒÒ
*/
void LED_FLASH_TASK(void const * argument)
{
		static int i;

	  while(1)
		{
			i++;
			lcd_num(i ,2 ,2);
			//HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
			vTaskDelay(100);
		}
}






