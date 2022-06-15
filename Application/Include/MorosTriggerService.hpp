/*
 * MorosTriggerService.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSTRIGGERSERVICE_HPP_
#define INCLUDE_MOROSTRIGGERSERVICE_HPP_

#include "cmsis_os.h"
#include "stm32h7xx_hal.h"

class MorosTriggerService
{
	public:
		MorosTriggerService(void(*)(void));
		~MorosTriggerService();
		void start(void);
		void stop(void);
	protected:
		static void _run(void*);
		virtual void _task(void) = 0;
		void(*_on_trigger)(void);
		osThreadId_t _thread_handle;
		const osThreadAttr_t* _thread_attr;
		bool _exit = false;
};

#endif /* INCLUDE_MOROSTRIGGERSERVICE_HPP_ */
