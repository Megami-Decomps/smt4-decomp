#include "common.h"

struct FlagState {
    /* 0x0000 */ u8 unk00[0x12f0];
    /* 0x12f0 */ u8 flags[1];
};
extern "C" {
FlagState *FUN_002c2710();
/* Tests an indexed packed flag. */
s32 FUN_00408240(u32 index)
{
    FlagState *state = FUN_002c2710();
    u8 *flags = state->flags;
    u8 byte = flags[index >> 3];
    u8 mask = 1 << (index & 7);
    return (byte & mask) != 0;
}
}
