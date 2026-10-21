#include "common.h"

namespace { struct Presets { u8 padding[0x18]; u32 first; u8 gap[0x54]; u32 second; }; }

extern "C" {
extern Presets g_asdGxPresets;
/* Gets the preset for the requested render kind. */
u32 FUN_002c15d4(u32 kind)
{
    if (kind == 0 || kind == 1) {
        return g_asdGxPresets.first;
    }
    if (kind == 2) {
        return g_asdGxPresets.second;
    }
    return 0;
}
}
