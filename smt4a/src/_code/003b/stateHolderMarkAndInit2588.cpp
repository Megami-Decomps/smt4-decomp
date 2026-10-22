#include "status/StatusDown.h"
#include "shard/Shard003B.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

extern void FUN_003e4140(u8 *block);

void stateHolderMarkAndInit2588(void)
{
    StatusDownStateA *obj = g_statusDown;

    if (g_statusDown != NULL) {
        g_statusDown->unk2584 = 1;
        FUN_003e4140(obj->block2588);
    }
}

} /* extern "C" */
