#include "shard/Shard0033.h"

extern "C" {

extern StateHolder518 *g_statusDown;

void FUN_00333dc8(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk52A = value;
    }
}

} /* extern "C" */
