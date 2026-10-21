#include "common.h"

namespace { struct Presets { u8 padding[0xbc]; u32 first; u8 gap[0x74]; u32 second; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Presets g_asdGxPresets;
u32 FUN_00169d8c(u32 kind)
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
