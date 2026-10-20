#include "shard/Shard003B.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;
extern void FUN_003e4140(u8 *block);

void stateHolderMarkAndInit2588(void)
{
    StateHolder518 *obj = DAT_00588fe8;

    if (DAT_00588fe8 != NULL) {
        DAT_00588fe8->unk2584 = 1;
        FUN_003e4140(obj->block2588);
    }
}

} /* extern "C" */
