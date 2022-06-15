/*
 * MorosUARTTrigger.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#include "MorosUARTTrigger.hpp"

static const osThreadAttr_t thread_attr = {
  .name = "mts_uart",
  .stack_size = 512,
  .priority = (osPriority_t) osPriorityNormal,
};

MorosUARTTrigger::MorosUARTTrigger(void(*_on_trigger)(void)) : MorosTriggerService(_on_trigger)
{
	this->_thread_attr = &thread_attr;
}

void MorosUARTTrigger::_task(void)
{

}


