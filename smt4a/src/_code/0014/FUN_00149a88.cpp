#include "shard/W6_W6Match5_DisplayMode.h"

// Read a property of the selected graphics target, leaving unsupported queries unchanged.
extern "C" void FUN_00149a88(u32 property, u32 *result)
{
    GraphicsTarget *target = g_asdGfxContext.query.targets[g_asdGfxContext.query.active];
    if (target == NULL)
        return;
    switch (property) {
    case 0x600: *result = (u32)target->pixels; break;
    case 0x601: *result = target->format; break;
    case 0x602: *result = target->width; break;
    case 0x603: *result = target->height; break;
    }
}
