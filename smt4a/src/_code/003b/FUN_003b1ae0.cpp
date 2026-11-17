#include "common.h"
#include "battle/BtlGlobals.h"



extern "C" s32 FUN_003b1ae0(void)
{
    if (g_btlCamera->unk38 == 3) {
        return 0;
    }
    return 1;
}
