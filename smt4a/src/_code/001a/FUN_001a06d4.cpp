#include "common.h"

extern "C" u32 FUN_001a06d4(f32 value)
{
    union {
        f32 value;
        u32 bits;
    } input;
    input.value = value;
    if (value == 0.0f || ((input.bits << 1) >> 24) == 0xff) {
        return 0;
    }

    f32 scaled = (value + 2.0f) * 2048.0f;
    if (scaled < 0.0f) {
        scaled = 0.0f;
    } else if (scaled >= 8192.0f) {
        scaled = 8191.0f;
    }
    if (scaled >= 4096.0f) {
        return (u32)(scaled - 4096.0f);
    }
    return (u32)(scaled + 4096.0f);
}
