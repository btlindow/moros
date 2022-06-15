/*
 * MorosTriggerService.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#include "MorosTriggerService.hpp"

MorosTriggerService::MorosTriggerService(void(*_on_trigger)(void))
{
	this->_on_trigger = _on_trigger;
}

void MorosTriggerService::start(void)
{
	this->_exit = false;
	this->_thread_handle = osThreadNew(this->_run, this, this->_thread_attr);
}

void MorosTriggerService::stop(void)
{
	this->_exit = true;
}

void MorosTriggerService::_run(void* obj)
{
	MorosTriggerService* svc = (MorosTriggerService*) obj;
	while(!svc->_exit) { svc->_task(); osDelay(1); }
	osThreadTerminate(svc->_thread_handle);
}
