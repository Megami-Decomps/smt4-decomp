/* NON_MATCHING: only the Y coordinate temp differs (retail ip, built r1). */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// The layout context follows the known owner prefix, beyond its recovered extent.
struct HighlightedPanelTextView {
    PanelTextOwnerPrefixA owner;
    u8 unk96[0x32];
    u8 layout[1];
};

extern "C" {
extern PanelTextDefaultsPrefixA DAT_0057f0ac;
u32 FUN_002a4b28(u16 textId);
u32 FUN_00180118(u16 textId);
void drawTextAtSnappedRectangle(TextLayoutContextA *context, u32 style,
                                u32 color, u32 textValue,
                                f32 x, f32 y, f32 opacity, f32 extraZero, f32 scale);

// Position a text label relative to its row and tint highlighted entries.
void FUN_004a7fb8(HighlightedPanelTextView *panel, u32 textId, s32 entryIndex,
                  s32 alternateStyle, s32 highlighted, s32 fade, f32 scale)
{
    const f32 opacity = static_cast<f32>(256 - fade) * (1.0f / 256.0f);
    const PanelTextLayoutEntryPrefixA *base;
    s32 offsetEntry;
    u32 style;
    u32 color;
    if (alternateStyle != 0) {
        base = reinterpret_cast<const PanelTextLayoutEntryPrefixA *>(layoutFindTableEntry(reinterpret_cast<TextLayoutContextA *>(panel->layout), entryIndex + 0x42F));
        offsetEntry = 0x499;
        if (highlighted == 0)
            color = 0x9FE7FFFFu;
        else
            color = 0xF5FF9FFFu;
        style = 3;
    } else {
        base = reinterpret_cast<const PanelTextLayoutEntryPrefixA *>(layoutFindTableEntry(reinterpret_cast<TextLayoutContextA *>(panel->layout), entryIndex + 0x40E));
        offsetEntry = 0x48B;
        style = 2;
        color = 0xFFFFFFFFu;
    }
    const s16 baseX = base->x;
    const s16 baseY = base->y;
    u32 textValue;
    if (FUN_002a4b28(textId) != 0 || panel->owner.allowTextLookup != 0) {
        textValue = FUN_00180118(textId);
    } else {
        textValue = DAT_0057f0ac.fallbackTextValue;
    }
    const PanelTextLayoutEntryPrefixA *offset = reinterpret_cast<const PanelTextLayoutEntryPrefixA *>(layoutFindTableEntry(
        reinterpret_cast<TextLayoutContextA *>(panel->layout), offsetEntry));
    s32 y = static_cast<s32>(offset->y) + baseY;
    s32 x = static_cast<s32>(offset->x) + baseX;
    drawTextAtSnappedRectangle(reinterpret_cast<TextLayoutContextA *>(panel->layout),
        style, color, textValue, static_cast<f32>(x), static_cast<f32>(y), opacity, 0.0f, scale);
}
}
