#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern u32 slotTableStateIsActive(void *state, s32 index);
extern u32 btlIsExtendedState(void *state, s32 index);
extern void btlResetSlot(void *state, s32 index, u32 value);

/* Script command: starts btlResetSlot once; then reports whether btlIsExtendedState is satisfied. */
u8 scrSlotResetThenCheck(void)
{
    u32 value = scrGetArg(0);
    void *state = btlGetMainState();

    if (slotTableStateIsActive(state, 0) != 0) {
        return btlIsExtendedState(state, 0) != 0;
    }
    btlResetSlot(state, 0, value);
    return 0;
}

} /* extern "C" */
