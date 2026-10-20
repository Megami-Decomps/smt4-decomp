#include "shard/Shard003C.h"

extern "C" {

extern StateHolder518 *DAT_00588fe8;

void FUN_003c607c(u8 value)
{
    if (DAT_00588fe8 != NULL) {
        DAT_00588fe8->unk2598 = value;
    }
}

} /* extern "C" */
