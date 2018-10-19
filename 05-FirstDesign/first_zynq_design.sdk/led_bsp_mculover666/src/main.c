/**
 *   @filename		main.c
 *   @brief				测试LED驱动
 *   @data				 2018/10/18
 *   @author			Mculover666
 */
#include "led_bsp_mculover666.h"
#include "xil_printf.h"

int main()
{
	/* 初始化LED所在io */
	led_init();
	print("LED init ok\r\n");

	/* 打开所有io */
	LED_Statue(ON);
	print("LED is all on\r\n");

	while(1);

}

