/**
 * @file main.c
 * @author Jachyn
 * @brief  jachyn's diy car
 * @version 0.1
 * @date 2023-07-22
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <REGX52.H>

/**
 * @brief 直行
 *
 */
void go()
{
	P0_0 = 1;
	P0_1 = 0;
	P0_2 = 1;
	P0_3 = 0;
}

/**
 * @brief 后退
 *
 */
void back()
{
	P0_0 = 0;
	P0_1 = 1;
	P0_2 = 0;
	P0_3 = 1;
}

/**
 * @brief 左转
 *
 */
void go_left()
{
	P0_0 = 0;
	P0_1 = 0;
	P0_2 = 1;
	P0_3 = 0;
}

/**
 * @brief 右转
 *
 */
void go_right()
{
	P0_0 = 1;
	P0_1 = 0;
	P0_2 = 0;
	P0_3 = 0;
}

/**
 * @brief 主函数
 *
 */
void main()
{
	//测试
	while (1)
	{
		go();
		// go_left();
		go_right();
		// go_back();
	}
}