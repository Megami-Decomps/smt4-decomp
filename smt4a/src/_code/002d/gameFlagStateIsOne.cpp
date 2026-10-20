#include "common.h"

extern "C" {

typedef struct StateBlock {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 state;
} StateBlock;

extern StateBlock DAT_005f0c7c;
extern s32 gameFlagIsSet(u32 flag);

/* True when game flag 0x4D0 is set and the state block's state is 1. */
u32 gameFlagStateIsOne(void)
{
    if (gameFlagIsSet(0x4d0) == 0) {
        return 0;
    }
    return DAT_005f0c7c.state == 1;
}

} /* extern "C" */
