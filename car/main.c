/**
 * @file main.c
 * @author jachyn
 * @brief 51_car
 * @version 0.1
 * @date 2024-07-07
 *
 * @copyright Copyright (c) 2024
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

void main()
{

}
