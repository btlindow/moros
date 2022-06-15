/*
 * MorosIMUTrigger.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */


#include "MorosIMUTrigger.hpp"

static const osThreadAttr_t thread_attr = {
  .name = "mts_imu",
  .stack_size = 512,
  .priority = (osPriority_t) osPriorityNormal,
};

MorosIMUTrigger::MorosIMUTrigger(void(*_on_trigger)(void)) : MorosTriggerService(_on_trigger)
{
	this->_thread_attr = &thread_attr;
}

void MorosIMUTrigger::_task(void)
{

}


