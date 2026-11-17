#include "status/StatusDownA.h"
#include "shard/Shard0038.h"

extern "C" {

void FUN_0038b548(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->panelEnabled = value;
    }
}

} /* extern "C" */
