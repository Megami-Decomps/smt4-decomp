#include "shard/Sys4650a0.h"

extern "C" {

/* Sets DAT_004650a0.unk10 when the argument is nonzero; returns whether it was. */
u8 FUN_00103f74(s32 value)
{
    if (value != 0) {
        DAT_004650a0.unk10 = value;
    }
    return value != 0;
}

} /* extern "C" */
