/*
 * MorosSWTrigger.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSSWTRIGGER_HPP_
#define INCLUDE_MOROSSWTRIGGER_HPP_

#include "MorosTriggerService.hpp"

class MorosSWTrigger: public MorosTriggerService
{
	public:
	MorosSWTrigger(void(*_on_trigger)(void));
	protected:
		void _task(void);
};

#endif /* INCLUDE_MOROSSWTRIGGER_HPP_ */
