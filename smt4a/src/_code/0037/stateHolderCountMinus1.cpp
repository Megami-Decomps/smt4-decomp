#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *g_statusDown;
extern s32 FUN_002c2c68(u8 *block);

s32 stateHolderCountMinus1(void)
{
    if (g_statusDown == NULL) {
        return 0;
    }
    return FUN_002c2c68(g_statusDown->unk5EC) - 1;
}

} /* extern "C" */
