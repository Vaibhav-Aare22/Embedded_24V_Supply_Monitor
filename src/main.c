#include <stdio.h>
#include "../inc/monitor.h"
#include "../inc/diagnostics.h"

int main(void)
{
    float voltage = 18.5f;

    VoltageStatus status;

    status = CheckVoltage(voltage);

    PrintDiagnostic(status);

    return 0;
}
