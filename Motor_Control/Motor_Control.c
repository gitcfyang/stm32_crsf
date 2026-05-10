#include "Motor_Control.h"



void Esc_Distance_Set(void)
{
	// 开启PWM
	HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_3);
	
	// 设置电调油门最大占空比
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3,2000);//BB响两声
	HAL_Delay(4000);//延时4S
	
	// 设置电调油门最小占空比
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3,1000);//BBB响三声
	HAL_Delay(4000);
	
//	// 开启
//	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3,1049);//起飞
//	HAL_Delay(2000);	
}

void Esc_Start(void)
{
	// 开启PWM
	HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_3);	
	
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3,10000);
	HAL_Delay(3000);
}

void Motor_Control(void)
{
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3,1800);	
	HAL_Delay(2000);
}
	



