/* NON_MATCHING: centered-width expression recovered; final VFP argument conversions and literal loads still differ. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

extern "C" {
extern const char DAT_00536bc4[];
void efctSetSpeed(f32 speed);
const SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 id);
s32 textFormatBuffer(u8 *destination, const char *format, ...);
s32 fontMeasureLineAdvance(const u8 *text, u32 font);

void statusDownDrawEndBanner(u32 x, s32 y, f32 alpha)
{
    efctSetSpeed(alpha);
    const SpriteInfo *anchor = asdTMTexTableEntryAt(0x12, 0x56e);
    FUN_001835b4(2, 0x12, 0x55a, anchor->x + x, anchor->y + y, 0x97);
    FUN_001835b4(2, 0x12, 0x55b, anchor->x + x, anchor->y + y, 0x97);
    FUN_001835b4(2, 0x12, 0x55c, anchor->x + x, anchor->y + y, 0x97);
    FUN_001835b4(2, 0x12, 0x5bf, anchor->x + x, anchor->y + y, 0x97);
    FUN_001835b4(2, 0x12, 0x5c0, anchor->x + x, anchor->y + y, 0x97);
    u8 text[24];
    textFormatBuffer(text, DAT_00536bc4);
    s32 textX = anchor->x + (anchor->size[0] - fontMeasureLineAdvance(text, 2)) / 2;
    textX = x + textX;
    s32 textY = y + anchor->y;
    const SpriteInfo *baseline = asdTMTexTableEntryAt(0x12, 0x561);
    textY += baseline->y;
    textDrawString(2, ~0u, (const char *)text, (f32)textX, (f32)textY, 0.2f, 0.0f, alpha);
    efctSetSpeed(1.0f);
}
}
