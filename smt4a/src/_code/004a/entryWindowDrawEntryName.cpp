#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern PanelTextDefaultsPrefixA DAT_0057f0ac;
u32 compendiumEntryIsRegistered(u16 textId);
u32 dataTable01GetRecordWithAocOverride(u16 textId);
void drawTextAtSnappedRectangle(TextLayoutContextA *context, f32 x,
                                f32 y, f32 opacity,
                                f32 extraZero, u32 style, u32 color,
                                f32 scale, u32 textValue);

static __inline TextLayoutContextA *panelTextContext(PanelTextOwnerPrefixA *panel)
{
    return (TextLayoutContextA *)((u8 *)panel + 0xC8);
}

/* Draws the entry's name at the selected layout position, with the fallback for unregistered entries. */
void entryWindowDrawEntryName(PanelTextOwnerPrefixA *panel, s16 textId,
                  s32 entryIndex, s32 alternateStyle, s32 fade, f32 scale)
{
    const f32 opacity = (f32)(256 - fade) * (1.0f / 256.0f);

    const TextureTableEntryIV *base;
    s32 offsetEntry;
    u32 style;
    u32 color;
    if (alternateStyle == 0) {
        base = layoutFindTableEntry(panelTextContext(panel), entryIndex + 0x40E);
        offsetEntry = 0x48B;
        style = 2;
        color = 0xFFFFFFFFu;
    } else {
        base = layoutFindTableEntry(panelTextContext(panel), entryIndex + 0x42F);
        offsetEntry = 0x499;
        style = 3;
        color = 0x9FE7FFFFu;
    }

    s32 x = base->x;
    s32 y = base->y;
    u32 textValue;
    if (compendiumEntryIsRegistered(textId) != 0 || panel->allowTextLookup != 0) {
        textValue = dataTable01GetRecordWithAocOverride(textId);
    } else {
        textValue = DAT_0057f0ac.fallbackTextValue;
    }

    const TextureTableEntryIV *offset = layoutFindTableEntry(panelTextContext(panel), offsetEntry);
    x += offset->x;
    y += offset->y;
    drawTextAtSnappedRectangle(panelTextContext(panel), (f32)x, (f32)y, opacity,
        0.0f, style, color, scale, textValue);
}
} /* extern "C" */
