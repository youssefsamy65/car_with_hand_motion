#include "main.h"
int main()
{
	LCD_Initialize();
	UART_Initialize(Asynchronous,Disable,Bit_1,Bits_8);
	Motor_Initialize();
	int pot1;
	LCD_Write_String((uint8_t*)"Mohamed Car");
	Motor_OFF(enable1);
	Motor_OFF(enable2);
	while (1)
	{
		pot1=UART_Received();
		if (pot1==1)
		{
			LCD_Write_String((uint8_t*)"forward");
			_delay_ms(1000);
			LCD_Clear();
			Motor_ON(clockwise,enable1);
			Motor_ON(clockwise,enable2);
		}
		else if (pot1==2)
		{
			LCD_Write_String((uint8_t*)"back");
			_delay_ms(1000);
			LCD_Clear();
			//  Right Car Direction Motion
			Motor_ON(clockwise,enable1);
			Motor_ON(anticlockwise,enable2);
			//  Right Car Direction Motion
			Motor_ON(clockwise,enable1);
			Motor_ON(anticlockwise,enable2);
			// Forward Car Direction Motion
			Motor_ON(clockwise,enable1);
			Motor_ON(clockwise,enable2);
		}
		else if (pot1==3)
		{
			LCD_Write_String((uint8_t*)"Rigth");
			_delay_ms(1000);
			LCD_Clear();
			Motor_ON(clockwise,enable1);
			Motor_ON(anticlockwise,enable2);
		}
		else if (pot1==4)
		{
			LCD_Write_String((uint8_t*)"Left");
			_delay_ms(1000);
			Motor_ON(clockwise,enable2);
			Motor_ON(anticlockwise,enable1);
		}
		else
		{
			LCD_Write_String((uint8_t*)"Direction Error");
			_delay_ms(1000);
			LCD_Clear();
			Motor_OFF(enable1);
			Motor_OFF(enable2);
		}
	}
	return 0;
}
