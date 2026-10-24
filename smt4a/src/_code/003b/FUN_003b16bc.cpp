#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void *btlGetMainState(void);
s32 btlSlotStateIs4To7(void *state, s32 slot);
s32 btlSlotStateIsNot456(void *state, s32 slot);
void FUN_003f2280(void *state, s32 slot, s32 b, s32 a, u8 c);

/* Script command: starts the slot-0 action from three script arguments, then waits for it; 1 while it is still running. */
s32 FUN_003b16bc(void)
{
    s32 a = scrGetArg(0);
    s32 b = scrGetArg(1);
    s32 c = scrGetArg(2);
    void *state = btlGetMainState();

    if (btlSlotStateIs4To7(state, 0) != 0) {
        return btlSlotStateIsNot456(state, 0) != 0;
    }
    FUN_003f2280(state, 0, b, a, c);
    return 0;
}

} /* extern "C" */
