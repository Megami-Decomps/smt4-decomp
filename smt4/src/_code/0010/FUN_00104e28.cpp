#include "shard/Sys4650a0.h"

extern "C" {

/* Sets DAT_004650a0.unk0C when the argument is nonzero; returns whether it was. */
u8 FUN_00104e28(s32 value)
{
    if (value != 0) {
        DAT_004650a0.unk0C = value;
    }
    return value != 0;
}

} /* extern "C" */
