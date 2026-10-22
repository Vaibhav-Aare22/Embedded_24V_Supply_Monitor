#include <stdio.h>
#include "../inc/diagnostics.h"

void PrintDiagnostic(VoltageStatus status)
{
    switch(status)
    {
        case VOLTAGE_OK:
            printf("Voltage Normal\n");
            break;

        case UNDERVOLTAGE:
            printf("DTC: Undervoltage Detected\n");
            break;

        case OVERVOLTAGE:
            printf("DTC: Overvoltage Detected\n");
            break;

        default:
            printf("Unknown Status\n");
            break;
    }
}
