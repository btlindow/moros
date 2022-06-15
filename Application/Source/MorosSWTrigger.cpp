/*
 * MorosSWTrigger.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */


#include "MorosSWTrigger.hpp"

static const osThreadAttr_t thread_attr = {
  .name = "mts_sw",
  .stack_size = 512,
  .priority = (osPriority_t) osPriorityNormal,
};

MorosSWTrigger::MorosSWTrigger(void(*_on_trigger)(void)) : MorosTriggerService(_on_trigger)
{
	this->_thread_attr = &thread_attr;
}

void MorosSWTrigger::_task(void)
{

}
