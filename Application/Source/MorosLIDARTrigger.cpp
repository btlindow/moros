/*
 * MorosLIDARTrigger.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#include "MorosLIDARTrigger.hpp"
#include "main.h"

static const osThreadAttr_t thread_attr = {
  .name = "mts_lidar",
  .stack_size = 512,
  .priority = (osPriority_t) osPriorityNormal,
};

MorosLIDARTrigger::MorosLIDARTrigger(void(*_on_trigger)(void)) : MorosTriggerService(_on_trigger)
{
	this->_thread_attr = &thread_attr;
}

void MorosLIDARTrigger::_task(void)
{
	HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, GPIO_PIN_RESET);
	osDelay(500);
	HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin, GPIO_PIN_SET);
	osDelay(500);
}
