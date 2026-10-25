#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 objSlotStateIsActiveRange(void *state, s32 slot);
s32 FUN_0024502c(void *state, s32 slot);
void FUN_00244fb0(void *state, s32 slot, s32 b, s32 a, u8 c);

/* Script command: starts the slot-0 action from three script arguments, then waits for it; 1 while it is still running. */
s32 FUN_0031850c(void)
{
    s32 a = scrGetArg(0);
    s32 b = scrGetArg(1);
    s32 c = scrGetArg(2);
    void *state = static_cast<void *>(btlGetMainState());

    if (objSlotStateIsActiveRange(state, 0) != 0) {
        return FUN_0024502c(state, 0) != 0;
    }
    FUN_00244fb0(state, 0, b, a, c);
    return 0;
}

} /* extern "C" */
