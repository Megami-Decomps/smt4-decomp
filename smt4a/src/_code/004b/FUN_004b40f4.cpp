/* NON_MATCHING: saved panel register and numeric text coordinate/width load scheduling differ. */
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// Observed prefix of the panel owning the packed numeric value.
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
void FUN_002c0940(char *, u32);
f32 fontMeasureTextWidth(const char *, u32, f32);
void gxResetColorQuadToWhite(void);

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
    FUN_002c0940(text, value);
    s32 width = static_cast<s32>(fontMeasureTextWidth(text, 3, 1.0f));
    s32 textX = anchor->x + number->x + x + (56 - width) / 2;
    s32 textY = anchor->y + number->y + y;
    textDrawString(3, 0x9FDDDDFF, text, static_cast<f32>(textX), static_cast<f32>(textY), 0.0f, 1.0f, 1.0f);
    gxResetColorQuadToWhite();
}
}
