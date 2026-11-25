/* NON_MATCHING: the panel register, clamp/texture lookup schedule, and coordinate additions differ. */
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Observed prefix of the panel, whose numeric value is packed into a word. */
struct PackedNumberPanelView {
    u8 prefix[0x7E3C];
    union {
        u32 packedValue;
        struct {
            u32 lowBits : 12;
            u32 number : 20;
        } fields;
    };
};
typedef char PackedNumberPanelValueOffsetCheck[offsetof(PackedNumberPanelView, packedValue) == 0x7E3C ? 1 : -1];

extern "C" {
void textFormatFullWidthNumber(char *, u32);
f32 fontMeasureTextWidth(const char *, u32, f32);
void gxResetColorQuadToWhite(void);

/* Draws the five sprite layers and centers the full-width number on their caption anchor. */
void FUN_004b40f4(PackedNumberPanelView *panel, s32 x, s32 y)
{
    char text[64];
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x1D, 0xCA);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xC2, anchor->x + x, anchor->y + y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xC3, anchor->x + x, anchor->y + y, 0x6A);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xC4, anchor->x + x, anchor->y + y, 0x6F);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xC5, anchor->x + x, anchor->y + y, 0x74);
    texDrawTableEntryAtStoredOrigin(2, 0x1D, 0xC6, anchor->x + x, anchor->y + y, 0x79);
    u32 value = panel->fields.number;
    if (value > 9999)
        value = 9999;
    const TextureTableEntryIV *number = asdTMTexTableEntryAt(0x1D, 0xCB);
    textFormatFullWidthNumber(text, value);
    s32 width = (s32)fontMeasureTextWidth(text, 3, 1.0f);
    textDrawString(anchor->x + number->x + (x + (56 - width) / 2), anchor->y + number->y + y,
                   0.0f, 3, 1.0f, 0x9FDDDDFF, 1.0f, text);
    gxResetColorQuadToWhite();
}
} /* extern "C" */
