#include <REGX52.H> //包含51头文件
#include "uart.h"	//包含串口函数头文件

void main() // 定义主函数
{

	UART_Init(); // 串口函数初始化 波特率9600
	while (1)
	{
	}
}

/**
 *@breaf 串口中断服务子函数
 *@param
 *@retval
 */
void uart_routine() interrupt 4 // 当数据传递给单片机后，我们需要进入中断，要不然我们无法知道，数据是否由串口助手传递给单片机
{
	if (RI == 1) // 如果接收数据标志位置1（即电脑发送的数据已经被单片机全部接收）；防止由单片机发送数据完成也会进入中断。因为收发用的是同一个中断；
	{
		P0 = ~SBUF;			 // 令接收的数据将改变 P0的八个管脚
		UART_SendByte(SBUF); // 将接收的数据又发送给电脑助手
		RI = 0;
	}
}