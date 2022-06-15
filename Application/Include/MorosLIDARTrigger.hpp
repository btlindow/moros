/*
 * MorosLIDARTrigger.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSLIDARTRIGGER_HPP_
#define INCLUDE_MOROSLIDARTRIGGER_HPP_

#include "MorosTriggerService.hpp"

class MorosLIDARTrigger: public MorosTriggerService
{
	public:
		MorosLIDARTrigger(void(*_on_trigger)(void));
	protected:
		void _task(void);
};

#endif /* INCLUDE_MOROSLIDARTRIGGER_HPP_ */
