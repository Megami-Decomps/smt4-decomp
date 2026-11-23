#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
/* The width reference lies beyond the shared lookup-result prefix. */
struct CenteredPanelEntryView {
    PanelTextLayoutEntryPrefixA position;
    const s16 *width;
};
struct PanelLayoutOwnerView {
    u8 unk00[0xC8];
    u8 layout[1];
};
}

extern "C" {
u32 demonGetRaceLabel(u16 textId, u32 flags);
s32 textMeasureOnLayer(u32 textValue, u32 style);
void drawTextAtSnappedRectangle(TextLayoutContextA *context, f32 x,
                                f32 y, f32 opacity,
                                f32 extraZero, u32 style, u32 color,
                                f32 scale, u32 textValue);

/* Center the selected text in a layout region, with the panel fade and scale. */
void FUN_004a7cb0(PanelLayoutOwnerView *panel, u32 textId,
                  s32 entryIndex, s32 alternateStyle, s32 fade, f32 scale)
{
    f32 opacity = static_cast<f32>(256 - fade) * (1.0f / 256.0f);
    const PanelTextLayoutEntryPrefixA *base;
    s32 offsetEntry;
    u32 style;
    u32 color;
    if (alternateStyle == 0) {
        base = reinterpret_cast<const PanelTextLayoutEntryPrefixA *>(layoutFindTableEntry(reinterpret_cast<TextLayoutContextA *>(panel->layout), entryIndex + 0x40E));
        offsetEntry = 0x48A;
        color = 0x08262DFF;
        style = 2;
    } else {
        base = reinterpret_cast<const PanelTextLayoutEntryPrefixA *>(layoutFindTableEntry(reinterpret_cast<TextLayoutContextA *>(panel->layout), entryIndex + 0x42F));
        offsetEntry = 0x498;
        style = 3;
        color = 0xFFFFFFFF;
    }
    s16 baseX = base->x;
    s16 baseY = base->y;
    u32 textValue = demonGetRaceLabel(static_cast<u16>(textId), 0);
    s32 textWidth = textMeasureOnLayer(textValue, 2);
    const CenteredPanelEntryView *offset = reinterpret_cast<const CenteredPanelEntryView *>(
        layoutFindTableEntry(reinterpret_cast<TextLayoutContextA *>(panel->layout), offsetEntry));
    s32 x = baseX + *offset->width / 2 + offset->position.x - textWidth / 2;
    s32 y = offset->position.y + baseY;
    drawTextAtSnappedRectangle(reinterpret_cast<TextLayoutContextA *>(panel->layout), static_cast<f32>(x), static_cast<f32>(y), opacity,
        0.0f, style, color, scale, textValue);
}
}
