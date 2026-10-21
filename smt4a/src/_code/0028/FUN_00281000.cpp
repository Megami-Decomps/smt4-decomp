/* NON_MATCHING: retail uses vstr s0, [r0] where the compiled block uses vstr s0, [r0]. */
#include "common.h"

struct ValueSettings {
    f32 value;       // 0x00
    s16 firstMode;   // 0x04
    s16 secondMode;  // 0x06
    u16 firstExtra;  // 0x08
    u16 secondExtra; // 0x0A
};

extern "C" void FUN_00281000(ValueSettings* settings, f32 value,
                              s32 firstMode, s32 secondMode,
                              u16 firstExtra, u16 secondExtra)
{
    settings->value = value;
    settings->firstMode = firstMode;
    if (firstMode == 3) {
        settings->firstExtra = firstExtra;
    }
    settings->secondMode = secondMode;
    if (secondMode == 3) {
        settings->secondExtra = secondExtra;
    }
}
