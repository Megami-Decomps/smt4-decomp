#include "shard/W9_W9Match1_TouchSample.h"

extern "C" {

extern TouchInputSample g_touchInput;

/* Resets the touch input: clears the readings and the hold state (the first six words) and sets the
 * trigger to repeat after 15 frames held, then every 4. */
s32 touchInputReset(void)
{
    u32 *state = (u32 *)&g_touchInput;

    for (s32 i = 0; i < 6; i++) {
        state[i] = 0;
    }
    g_touchInput.firstRepeatDelay = 15;
    g_touchInput.repeatDelay = 4;
    return 1;
}

} /* extern "C" */
