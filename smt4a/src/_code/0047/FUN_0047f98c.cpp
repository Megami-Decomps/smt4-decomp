/* NON_MATCHING: VFP argument preservation uses three scalar moves rather than retail's paired move (d8 = d0) and scalar move; a by-value float-pair parameter did not reproduce it. */
#include "common.h"
#include "code/Code0014.h"

extern "C" {
s32 textFormatBuffer(char *destination, const char *format, ...);
u32 FUN_001628c0(const char *text, u32 alpha, u32 flags, u32 options, f32 x, f32 y);

// Draw the icon encoded by a packed resource id, including its optional variant suffix.
u32 FUN_0047f98c(u32 resourceId, f32 opacity, f32 x, f32 y)
{
    char name[16];
    u32 group = (resourceId & 0xfffff) >> 8;
    u32 index = resourceId >> 20;
    u32 variant = (resourceId & 0x3f) >> 4;
    if (group && index) {
        textFormatBuffer(name, "I%03u%03u", index, group);
        if (variant)
            textFormatBuffer(name, "%s%s", name, variant == 1 ? "a" : "b");
        u32 alpha = (u32)((f32)FUN_0014af98() * opacity);
        return FUN_001628c0(name, alpha & 0xff, 0, 0, x, y);
    }
    return 0;
}
}
