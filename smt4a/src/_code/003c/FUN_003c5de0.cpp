/* NON_MATCHING: retail initializes the frame search before computing its phase and allocates the scaled draw's VFP temporaries differently. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include <stddef.h>

struct AnimatedIconFrame { u32 sprite; s32 duration; };
struct AnimatedIconLookup {
    s16 id;
    u16 unk02;
    s32 divisor;
    s32 frameCount;
    s32 duration;
    AnimatedIconFrame frames[4];
};
typedef char AnimatedIconLayout[sizeof(AnimatedIconLookup) == 0x30 &&
    offsetof(AnimatedIconLookup, divisor) == 4 &&
    offsetof(AnimatedIconLookup, frameCount) == 8 &&
    offsetof(AnimatedIconLookup, duration) == 0xc &&
    offsetof(AnimatedIconLookup, frames) == 0x10 ? 1 : -1];

extern "C" {
extern const AnimatedIconLookup g_engineObjectLookup[10];
f32 jobGetScalarValue();
void texDrawTableEntrySized(s32 layer, s32 group, u32 sprite, s32 x, s32 y, u32 width, u32 height, u32 color);
}

/* The icon's index in the lookup table, or -1 (engineLookupObjectById searches the same table). */
static s32 findAnimatedIcon(s32 id)
{
    for (s32 i = 0; i < 10; ++i) {
        if (g_engineObjectLookup[i].id == id) {
            return i;
        }
    }
    return -1;
}

/* Draws the animated icon for id, centring the scaled sprite on the unscaled footprint. */
extern "C" void FUN_003c5de0(s32 id, s32 time, s32 x, s32 y, u32 color, f32 scale, f32 speed)
{
    s32 index = findAnimatedIcon(id);
    if (index < 0) {
        return;
    }
    const AnimatedIconLookup &icon = g_engineObjectLookup[index];
    const s32 divisor = icon.divisor;
    s32 frame = time % (icon.duration / divisor);
    s32 begin = 0;
    s32 selected = 0;
    for (s32 i = 0; i < icon.frameCount; ++i) {
        s32 end = begin + icon.frames[i].duration / divisor;
        if (begin <= frame && frame < end) {
            selected = i;
            break;
        }
        begin = end;
    }
    u32 sprite = icon.frames[selected].sprite;
    f32 previousSpeed = jobGetScalarValue();
    if (speed < 1.0f) {
        efctSetSpeed(speed);
    }
    f32 size = scale * 12.0f;
    f32 margin = (size - 12.0f) * 0.5f;
    texDrawTableEntrySized(2, 0xb, sprite, (s32)((f32)x - margin), (s32)((f32)y - margin),
                           (u32)size, (u32)size, color);
    efctSetSpeed(previousSpeed);
}
