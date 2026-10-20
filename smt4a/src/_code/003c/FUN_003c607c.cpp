#include "shard/Shard003C.h"

extern "C" {

extern StateHolder518 *g_statusDown;

void FUN_003c607c(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk2598 = value;
    }
}

} /* extern "C" */
