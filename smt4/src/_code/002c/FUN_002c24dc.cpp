#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

// Read a property of the selected graphics target, leaving unsupported queries unchanged.
extern "C" void FUN_002c24dc(u32 property, u32 *result)
{
    AsdGfxTarget *target = g_asdGfxContext.targets[g_asdGfxContext.activeTarget];
    if (target == NULL)
        return;
    switch (property) {
    case 0x600: *result = (u32)target->pixels; break;
    case 0x601: *result = target->format; break;
    case 0x602: *result = target->width; break;
    case 0x603: *result = target->height; break;
    }
}
