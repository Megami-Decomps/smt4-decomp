/* NON_MATCHING: centered-width expression recovered; final VFP argument conversions and literal loads still differ. */
#include "shard/S1ListPanel.h"

extern "C" {
extern const char DAT_00536bc4[];
void efctSetSpeed(f32 speed);
const SpriteInfo *FUN_001834a4(u32 group, u32 id);
void FUN_001835b4(u32 screen, u32 group, u32 id, s32 x, s32 y, s32 layer);
s32 textFormatBuffer(u8 *destination, const char *format, ...);
s32 fontMeasureLineAdvance(const u8 *text, u32 font);
void FUN_00162790(u32 screen, u32 color, const u8 *text,
                  f32 x, f32 y, f32 depth, f32 rotation, f32 alpha);

void statusDownDrawEndBanner(s32 x, s32 y, f32 alpha)
{
    efctSetSpeed(alpha);
    const SpriteInfo *anchor = FUN_001834a4(0x12, 0x56e);
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
    const SpriteInfo *baseline = FUN_001834a4(0x12, 0x561);
    textY += baseline->y;
    FUN_00162790(2, ~0u, text, (f32)textX, (f32)textY, 0.2f, 0.0f, alpha);
    efctSetSpeed(1.0f);
}
}
