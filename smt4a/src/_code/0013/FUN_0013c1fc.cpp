/* NON_MATCHING: mask loads are hoisted and indexed table/counter iteration differs from retail pointer iteration. */
#include "sys/InputHoldCounters.h"

extern "C" {
s32 FUN_00159814(s32 device, u32 *buttons);
void *FUN_002e59f8(void *destination, const void *source, u32 bytes);
extern InputHoldGlobals DAT_005b4000;
extern u32 DAT_0063ffd0;
extern u32 DAT_00640000[31];
extern u32 DAT_0064007c[31];
extern const InputCounterBinding DAT_0053d740[31];

// Update each mapped input's hold duration and consume the pending-reset flag.
void FUN_0013c1fc(void)
{
    if (FUN_00159814(DAT_005b4000.device, &DAT_0063ffd0) != 0) {
        DAT_005b4000.available = 1;
        FUN_002e59f8(DAT_00640000, DAT_0064007c, sizeof(DAT_00640000));
    } else {
        DAT_005b4000.available = 0;
    }
    s32 available = DAT_005b4000.available;
    for (s32 index = 0; index < 31; ++index) {
        const InputCounterBinding *binding = &DAT_0053d740[index];
        u32 buttons = 0;
        if (binding->sourceSelector == 0) {
            if (available <= 0) {
                continue;
            }
            buttons = DAT_0063ffd0;
        }
        if ((buttons & binding->mask) != 0) {
            ++DAT_00640000[index];
        } else {
            DAT_00640000[index] = 0;
        }
    }
    if ((DAT_005b4000.flags & 2) != 0) {
        DAT_005b4000.flags &= ~2u;
    }
}
}
