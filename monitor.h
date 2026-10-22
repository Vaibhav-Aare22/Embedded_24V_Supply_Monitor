#ifndef MONITOR_H
#define MONITOR_H

typedef enum
{
    VOLTAGE_OK,
    UNDERVOLTAGE,
    OVERVOLTAGE
} VoltageStatus;

VoltageStatus CheckVoltage(float voltage);

#endif
