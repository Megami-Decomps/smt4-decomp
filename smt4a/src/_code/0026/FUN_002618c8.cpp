#include "ui/IfTouch.h"
#include "shard/FUN_002618c8.h"

extern "C" {

/* Returns the low 16 bits of the word at 0x660 of the record at 0x57F248 as a signed value. */
s32 FUN_002618c8(void)
{
    return (s16)g_ifTouch.state->unk660;
}

} /* extern "C" */
