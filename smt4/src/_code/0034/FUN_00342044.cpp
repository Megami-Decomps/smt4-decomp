#include "common.h"
#include "gamedata/PackedFlagState.h"

extern "C" {
PackedFlagState *saveGetFlagRowTable();
/* Tests an indexed packed flag. */
s32 FUN_00342044(u32 index)
{
    PackedFlagState *state = saveGetFlagRowTable();
    u8 *flags = state->flags;
    u8 byte = flags[index >> 3];
    u8 mask = 1 << (index & 7);
    return (byte & mask) != 0;
}
}
