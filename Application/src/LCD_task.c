#include "LCD_task.h"

/**
* @brief LCDˢ���߳�
*/
void LCD_FLUSH_Task(void const * argument)
{
	while(1)
	{	
		//lcd_show();
		HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_5);
		vTaskDelay(200);
	}
}