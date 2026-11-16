/* NON_MATCHING: mask loads are hoisted and indexed table/counter iteration differs from retail pointer iteration. */
#include "sys/InputHoldCounters.h"

extern "C" {
s32 FUN_00159814(s32 device, u32 *buttons);
void *memcpySrcFirst(void *destination, const void *source, u32 bytes);
extern InputHoldGlobals g_padInputState;
extern u32 DAT_0063ffd0;
extern u32 g_padHeldFrames[31];
extern u32 DAT_0064007c[31];
extern const InputCounterBinding DAT_0053d740[31];

// Update each mapped input's hold duration and consume the pending-reset flag.
void FUN_0013c1fc(void)
{
    if (FUN_00159814(g_padInputState.device, &DAT_0063ffd0) != 0) {
        g_padInputState.available = 1;
        memcpySrcFirst(g_padHeldFrames, DAT_0064007c, sizeof(g_padHeldFrames));
    } else {
        g_padInputState.available = 0;
    }
    const InputCounterBinding *binding = DAT_0053d740;
    s32 available = g_padInputState.available;
    u32 *counter = g_padHeldFrames;
    for (s32 index = 0; index < 31; ++index, ++binding, ++counter) {
        u32 buttons;
        if (binding->sourceSelector != 0) {
            buttons = 0;
        } else {
            if (available <= 0) {
                continue;
            }
            buttons = DAT_0063ffd0;
        }
        if ((buttons & binding->mask) != 0) {
            ++*counter;
        } else {
            *counter = 0;
        }
    }
    if ((g_padInputState.flags & 2) != 0) {
        g_padInputState.flags &= ~2u;
    }
}
}
