/* NON_MATCHING: register assignment (frame/result in r6/r7 swapped) and retail evaluates the register arguments before the two stack zeros */
#include "battle/BtlMainAccess.h"

extern "C" {

extern s16 g_battleSlotCount; /* 0x5e2058 */

u32 scrGetCommandFrame(void);
u32 FUN_0021bdac(s32 state, s32 index, u32 frame, s32 mode, s32 first, u32 second);

/* Script command: runs the step for every battle unit slot and returns the last result other than 1 (1 when all returned 1). */
s32 FUN_003305b0(void)
{
    u32 frame = scrGetCommandFrame();
    BtlMainStateExtA *state = btlGetMainStateExt();
    s32 result = 1;

    for (s32 i = 0; g_battleSlotCount > i; i++) {
        u32 value = FUN_0021bdac(state->infoWindow, i, frame, 13, 0, 0);

        if (value != 1) {
            result = value;
        }
    }
    return result;
}

} /* extern "C" */
