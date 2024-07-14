#include "uart.h"
/**
 *@breaf  串口初始化
 *@param 无
 *@retval 无
 */
void UART_Init(void)
{
	TMOD = 0X20; // 设置定时器的工作方式：设置使用定时器1，工作方式为方式1；
	SCON = 0X50; // 设置串口工作方式：设置为工作方式1；打开接受ren=1；
	PCON = 0X80; // 设置电源控制寄存器，波特率加倍；
	// 计算波特率，设置定时计数器的初值
	TH1 = 0xfa;
	TL1 = 0xfa;
	// 是否使用中断，如若使用，则打开中断配置；
	EA = 1;	 // 打开中断总开关；
	ES = 1;	 // 启动串口中断；
	ET1 = 0; // 关闭定时器1的中断
	TR1 = 1; // 打开计数器；TCON寄存器
}
/**
 *@breaf 串口发送一个字节数据函数
 *@param byte 传送的一个字节
 *@retval 无
 */
void UART_SendByte(unsigned char byte)
{
	SBUF = byte;
	while (TI == 0)
		;
	TI = 0;
}