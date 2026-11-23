/* NON_MATCHING: 12 lines. Retail pools the pad buffer's address ahead of g_padInputState and sets
 * `available = 1` predicated right after the compare (movne/strne); the build sets it inside the success block.
 * The loop, the snapshot copy and the reset flag match. */
#include "sys/InputHoldCounters.h"
#include "AsdSDK/AsdMemCopy.h"
#include "input/PadAnalog.h"

extern "C" {
s32 FUN_00159814(s32 device, PadAnalogSample *input);
extern InputHoldGlobals g_padInputState;
extern const InputCounterBinding DAT_0053d740[31];

PadAnalogSample g_padInputs[3];
u32 g_padHeldFrames[31];
u32 g_padHeldFramesSnapshot[31];

/* Updates each mapped input's hold duration and consumes the pending-reset flag. */
void padUpdateHeldFrames(void)
{
    if (FUN_00159814(g_padInputState.device, &g_padInputs[0]) != 0) {
        g_padInputState.available = 1;
        memcpySrcFirst(g_padHeldFrames, g_padHeldFramesSnapshot, sizeof(g_padHeldFrames));
    } else {
        g_padInputState.available = 0;
    }
    s32 available = g_padInputState.available;
    for (s32 i = 0; i < 31; i++) {
        u32 buttons;
        if (DAT_0053d740[i].sourceSelector == 0) {
            if (available <= 0)
                continue;
            buttons = g_padInputs[0].held;
        } else {
            buttons = 0;
        }
        if ((buttons & DAT_0053d740[i].mask) != 0) {
            ++g_padHeldFrames[i];
        } else {
            g_padHeldFrames[i] = 0;
        }
    }
    if ((g_padInputState.flags & 2) != 0) {
        g_padInputState.flags &= ~2u;
    }
}
}
