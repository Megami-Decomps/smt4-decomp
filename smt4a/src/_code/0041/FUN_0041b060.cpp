/* NON_MATCHING: Centered text metric loads, integer-to-float conversion order and color/zero literal order differ. */
#include "gfx/UiControlDraw.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct FramedBadgeOwner {
    u8 unk00[0x40];
    u32 frame;
};
extern "C" {
void efctSetSpeed(f32 alpha);
s32 fontMeasureLineAdvance(const char *text, s32 font);
void FUN_0041af74(FramedBadgeOwner *owner, s32 value, const UiScaledDrawPosition *position, u32 color);

/* Draws the framed label and its numeric badge using the supplied position and opacity. */
void FUN_0041b060(FramedBadgeOwner *owner, const UiScaledDrawPosition *position, const char *text, s32 value)
{
    efctSetSpeed(position->speed);
    FUN_001835b4(2, 0x2B, 0x8C, position->x, position->y, 2);
    FUN_001835b4(2, 0x2B, 0x8D, position->x, position->y, 7);
    for (s32 index = 0; index < 4; ++index) {
        FUN_001835b4(2, 0x2B, index + 0x8E, position->x, position->y, 12);
    }
    for (s32 index = 0; index < 4; ++index) {
        FUN_001835b4(2, 0x2B, index + 0x92, position->x, position->y, 17);
    }
    TextureTableEntryIV *metrics = asdTMTexTableEntryAt(0x2B, 0x8A);
    s32 width = fontMeasureLineAdvance(text, 4);
    textDrawString(4, 0x646464FF, text,
                 (f32)((metrics->placement->width - width) / 2 + (position->x + metrics->x)),
                 (f32)(metrics->y + position->y), 0.0f, 0.0f, position->speed);
    FUN_001835b4(2, 0x2B, 0x96, position->x, position->y, 2);
    FUN_001835b4(2, 0x2B, owner->frame, position->x, position->y, 2);
    FUN_0041af74(owner, value, position, 0x646464FF);
    efctSetSpeed(1.0f);
}
}
