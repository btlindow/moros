/*
 * MorosTIMTrigger.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#include "MorosTIMTrigger.hpp"

static const osThreadAttr_t thread_attr = {
  .name = "mts_tim",
  .stack_size = 512,
  .priority = (osPriority_t) osPriorityNormal,
};

MorosTIMTrigger::MorosTIMTrigger(void(*_on_trigger)(void)) : MorosTriggerService(_on_trigger)
{
	this->_thread_attr = &thread_attr;
}

void MorosTIMTrigger::_task(void)
{

}



