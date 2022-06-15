/*
 * MorosIMUTrigger.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSIMUTRIGGER_HPP_
#define INCLUDE_MOROSIMUTRIGGER_HPP_

#include "MorosTriggerService.hpp"

class MorosIMUTrigger: public MorosTriggerService
{
	public:
		MorosIMUTrigger(void(*_on_trigger)(void));
	protected:
		void _task(void);
};

#endif /* INCLUDE_MOROSIMUTRIGGER_HPP_ */
