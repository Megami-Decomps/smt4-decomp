#include "shard/Block57f0c4.h"

extern "C" {

/* Returns whether the state word at 0x10 of the record at 0x57F0C4 is 2. */
u8 FUN_002a21c8(void)
{
    return g_buttonHelp.record->unk010 == 2;
}

} /* extern "C" */
