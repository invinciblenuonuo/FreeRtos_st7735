#include "button.h"


/**
* @brief LED…¡À∏»ŒŒÒ
*/
void Button_detect_TASK(void const * argument)
{
	  while(1)
		{
			HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
			osDelay(1000);
		}
}






