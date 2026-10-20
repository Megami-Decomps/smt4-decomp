#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern u32 FUN_003f25b4(void *state, s32 index);
extern u32 FUN_003e7b2c(void *state, s32 index);
extern void btlResetSlot(void *state, s32 index, u32 value);

/* Script command: starts btlResetSlot once; then reports whether FUN_003e7b2c is satisfied. */
u8 FUN_003a90f0(void)
{
    u32 value = scrGetArg(0);
    void *state = btlGetMainState();

    if (FUN_003f25b4(state, 0) != 0) {
        return FUN_003e7b2c(state, 0) != 0;
    }
    btlResetSlot(state, 0, value);
    return 0;
}

} /* extern "C" */
