/*
 * Moros.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */
#include "Moros.hpp"

MorosLIDARTrigger* test_service;

void on_trigger(void);

void MorosInit(void*)
{
	test_service = new MorosLIDARTrigger(on_trigger);
	test_service->start();
	osDelay(10000);
	test_service->stop();
}

void on_trigger(void)
{

}
