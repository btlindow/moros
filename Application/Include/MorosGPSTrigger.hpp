/*
 * MorosGPSTrigger.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */

#ifndef INCLUDE_MOROSGPSTRIGGER_HPP_
#define INCLUDE_MOROSGPSTRIGGER_HPP_

#include "MorosTriggerService.hpp"

class MorosGPSTrigger: public MorosTriggerService
{
	public:
		MorosGPSTrigger(void(*_on_trigger)(void));
	protected:
		void _task(void);
};

#endif /* INCLUDE_MOROSGPSTRIGGER_HPP_ */
