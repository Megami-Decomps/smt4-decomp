#include "status/StatusDown.h"
#include "shard/Shard0033.h"
#include "util/FUN_00333dc8.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

void FUN_00333dc8(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->active = value;
    }
}

} /* extern "C" */
