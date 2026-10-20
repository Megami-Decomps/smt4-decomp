#include "shard/Shard003B.h"

extern "C" {

extern StateHolder518 *g_statusDown;
extern void FUN_003e4140(u8 *block);

void stateHolderMarkAndInit2588(void)
{
    StateHolder518 *obj = g_statusDown;

    if (g_statusDown != NULL) {
        g_statusDown->unk2584 = 1;
        FUN_003e4140(obj->block2588);
    }
}

} /* extern "C" */
