#include "shard/Block57f0c4.h"

extern "C" {

/* Returns whether the state word at 0x10 of the record at 0x57F0C4 is not 1. */
u8 FUN_002bf444(void)
{
    return DAT_0057f0c4.record->unk010 != 1;
}

} /* extern "C" */
