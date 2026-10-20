#include "shard/Block57f248.h"

extern "C" {

/* Returns the low 16 bits of the word at 0x660 of the record at 0x57F248 as a signed value. */
s32 FUN_002618c8(void)
{
    return (s16)g_ifTouch.record->unk660;
}

} /* extern "C" */
