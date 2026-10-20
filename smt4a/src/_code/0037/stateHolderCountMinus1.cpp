#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;
extern s32 FUN_002c2c68(u8 *block);

s32 stateHolderCountMinus1(void)
{
    if (DAT_00588fe8 == NULL) {
        return 0;
    }
    return FUN_002c2c68(DAT_00588fe8->unk5EC) - 1;
}

} /* extern "C" */
