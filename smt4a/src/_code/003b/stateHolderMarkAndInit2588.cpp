#include "status/StatusDownA.h"
#include "shard/Shard003B.h"

extern "C" {

extern void copyDefaultWordsPair(u8 *block);

void stateHolderMarkAndInit2588(void)
{
    StatusDownStateA *obj = g_statusDown;

    if (g_statusDown != NULL) {
        g_statusDown->unk2584 = 1;
        copyDefaultWordsPair(obj->block2588);
    }
}

} /* extern "C" */
