/*
 * MorosUARTTrigger.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSUARTTRIGGER_HPP_
#define INCLUDE_MOROSUARTTRIGGER_HPP_

#include "MorosTriggerService.hpp"

class MorosUARTTrigger: public MorosTriggerService
{
	public:
		MorosUARTTrigger(void(*_on_trigger)(void));
	protected:
		void _task(void);
};

#endif /* INCLUDE_MOROSUARTTRIGGER_HPP_ */
