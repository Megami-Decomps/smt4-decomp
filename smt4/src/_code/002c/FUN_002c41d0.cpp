#include "shard/Sys4650a0.h"

extern "C" {

/* Sets or clears flag bit 0. */
void FUN_002c41d0(int set)
{
    if (set != 0) {
        DAT_004650a0.unk08 = DAT_004650a0.unk08 | 1;
    } else {
        DAT_004650a0.unk08 = DAT_004650a0.unk08 & 0xfffffffe;
    }
}

} /* extern "C" */
