#include "common.h"

struct PrioritizedValues {
    u8 unk00000[0x15d58];
    u32 first; // 0x15d58
    u32 second; // 0x15d5c
    u32 fallback; // 0x15d60
    s8 useFirst; // 0x15d64
    s8 useSecond; // 0x15d65
};

extern "C" {
// Select the first enabled override, otherwise the fallback value.
u32 FUN_003a1460(PrioritizedValues *values)
{
    u32 selected = values->fallback;
    if (values->useFirst != 0) {
        selected = values->first;
    } else if (values->useSecond != 0) {
        selected = values->second;
    }
    return selected;
}
}
