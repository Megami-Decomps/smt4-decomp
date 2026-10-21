/* NON_MATCHING: retail uses different argument packing, inlined accessor frames or signed bit-index arithmetic. */
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
    return (state->flags[index >> 3] & (1u << (index & 7))) != 0;
}
}
