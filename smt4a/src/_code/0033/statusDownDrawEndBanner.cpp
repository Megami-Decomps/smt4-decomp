#include "runtime/Stdio.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern const char g_statusDownEndBannerText[];
void efctSetSpeed(f32 speed);
s32 fontMeasureLineAdvance(const u8 *text, u32 font);

/* Draws the end banner and centers its label over the banner's anchor. */
void statusDownDrawEndBanner(u32 x, s32 y, f32 alpha)
{
    efctSetSpeed(alpha);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x12, 0x56e);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x55a, anchor->x + x, anchor->y + y, 0x97);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x55b, anchor->x + x, anchor->y + y, 0x97);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x55c, anchor->x + x, anchor->y + y, 0x97);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x5bf, anchor->x + x, anchor->y + y, 0x97);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x5c0, anchor->x + x, anchor->y + y, 0x97);
    u8 text[24];
    __2sprintf((char *)text, g_statusDownEndBannerText);
    s32 textX = anchor->x + (anchor->placement->width - fontMeasureLineAdvance(text, 2)) / 2;
    textX = x + textX;
    s32 textY = y + anchor->y;
    const TextureTableEntryIV *baseline = asdTMTexTableEntryAt(0x12, 0x561);
    textDrawString((f32)textX, (f32)(textY + baseline->y), 0.2f, 2, 0.0f, ~0u, alpha, (const char *)text);
    efctSetSpeed(1.0f);
}
}
