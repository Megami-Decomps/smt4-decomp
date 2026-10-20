#include "shard/Block57f248.h"

extern "C" {

/* Returns the low 16 bits of the word at 0x670 of the record at 0x57F248 as a signed value. */
s32 FUN_002c2c98(void)
{
    return (s16)g_ifTouch.record->unk670;
}

} /* extern "C" */
