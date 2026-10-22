#include "../inc/monitor.h"

#define UNDER_VOLTAGE_LIMIT   20.0f
#define OVER_VOLTAGE_LIMIT    30.0f

VoltageStatus CheckVoltage(float voltage)
{
    if(voltage < UNDER_VOLTAGE_LIMIT)
    {
        return UNDERVOLTAGE;
    }

    if(voltage > OVER_VOLTAGE_LIMIT)
    {
        return OVERVOLTAGE;
    }

    return VOLTAGE_OK;
}
