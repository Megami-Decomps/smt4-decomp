/* NON_MATCHING: retail address formation, clamping returns or grouped stores differ. */
#include "common.h"

struct StateBlock {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ s8 first;
    /* 0x71 */ s8 second;
};
/* Reports whether either activity flag is set. */
extern "C" s32 FUN_004d02e0(const StateBlock *state)
{
    return state->second != 0 || state->first != 0;
}
