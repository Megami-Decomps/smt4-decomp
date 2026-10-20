#include "common.h"

extern "C" {

typedef struct StateBlock {
    /* 0x0000 */ u8 unk0000[0x4A24];
    /* 0x4A24 */ u32 slotState[1];
} StateBlock;

/* Whether the slot's state is one of 0-3. */
u32 FUN_0033b35c(StateBlock *block, s32 slot)
{
    u32 state = block->slotState[slot];

    if (state == 0 || state == 1 || state == 2 || state == 3) {
        return 1;
    }
    return 0;
}

}
