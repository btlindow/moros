/*
 * Moros.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: ben
 */
#include "Moros.hpp"

static MorosGPSTrigger* trigger_gps;
static MorosIMUTrigger* trigger_imu;
static MorosLIDARTrigger* trigger_lidar;
static MorosSWTrigger* trigger_sw;
static MorosTIMTrigger* trigger_tim;
static MorosUARTTrigger* trigger_uart;

static void on_trigger(void);

void MorosInit(void*)
{
	trigger_gps = new MorosGPSTrigger(on_trigger);
	trigger_imu = new MorosIMUTrigger(on_trigger);
	trigger_lidar = new MorosLIDARTrigger(on_trigger);
	trigger_sw = new MorosSWTrigger(on_trigger);
	trigger_tim = new MorosTIMTrigger(on_trigger);
	trigger_uart = new MorosUARTTrigger(on_trigger);
}

static void on_trigger(void)
{

}
