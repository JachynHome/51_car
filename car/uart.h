#ifndef __UART_H__
#define __UART_H__

#include <REGX52.H> 
void UART_Init(void);//串口初始化
void UART_SendByte(unsigned char byte);//发送一个字节

#endif