#include "common.h"

struct ValueSettings {
    f32 value;       // 0x00
    s16 firstMode;   // 0x04
    s16 secondMode;  // 0x06
    u16 firstExtra;  // 0x08: kept only when firstMode is 3
    u16 secondExtra; // 0x0A: kept only when secondMode is 3
};

/* Sets the value and both modes; a mode of 3 also takes its extra value. */
extern "C" void FUN_00281000(ValueSettings* settings, f32 value,
                              s16 firstMode, s16 secondMode,
                              u16 firstExtra, u16 secondExtra)
{
    settings->value = value;
    settings->firstMode = firstMode;
    settings->secondMode = secondMode;
    if (firstMode == 3) {
        settings->firstExtra = firstExtra;
    }
    if (secondMode == 3) {
        settings->secondExtra = secondExtra;
    }
}
