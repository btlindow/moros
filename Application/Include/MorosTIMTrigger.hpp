/*
 * MorosTIMTrigger.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSTIMTRIGGER_HPP_
#define INCLUDE_MOROSTIMTRIGGER_HPP_

#include "MorosTriggerService.hpp"

class MorosTIMTrigger: public MorosTriggerService
{
	public:
	MorosTIMTrigger(void(*_on_trigger)(void));
	protected:
		void _task(void);
};

#endif /* INCLUDE_MOROSTIMTRIGGER_HPP_ */
