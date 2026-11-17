#include "status/StatusDownA.h"
#include "shard/Shard0033.h"
#include "code/Code0033.h"
#include "code/Code003a.h"

extern "C" {

void FUN_00333dc8(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->active = value;
    }
}

} /* extern "C" */
