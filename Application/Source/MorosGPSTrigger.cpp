/*
 * MorosGPSTrigger.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#include "MorosGPSTrigger.hpp"

static const osThreadAttr_t thread_attr = {
  .name = "mts_gps",
  .stack_size = 512,
  .priority = (osPriority_t) osPriorityNormal,
};

MorosGPSTrigger::MorosGPSTrigger(void(*_on_trigger)(void)) : MorosTriggerService(_on_trigger)
{
	this->_thread_attr = &thread_attr;
}

void MorosGPSTrigger::_task(void)
{

}
