#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *g_statusDown;

void FUN_00371edc(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk529 = value;
    }
}

} /* extern "C" */
