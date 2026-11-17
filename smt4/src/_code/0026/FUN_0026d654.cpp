#include "status/StatusDown.h"
#include "code/Code0026.h"

extern "C" {

void FUN_0026d654(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->panelEnabled = value;
    }
}

} /* extern "C" */
