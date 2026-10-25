/* NON_MATCHING: Panel-context saved registers and alternate-style block placement differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern PanelTextDefaultsPrefixA DAT_0057f0ac;
const PanelTextLayoutEntryPrefixA *layoutFindTableEntry(TextLayoutContextA *context, s32 entryId);
u32 FUN_002a4b28(u16 textId);
u32 FUN_00180118(u16 textId);
void drawTextAtSnappedRectangle(TextLayoutContextA *context, u32 style,
                                u32 color, u32 textValue,
                                f32 x, f32 y, f32 opacity,
                                f32 extraZero, f32 scale);

void FUN_004a7ba0(PanelTextOwnerPrefixA *panel, s16 textId,
                  s32 entryIndex, s32 alternateStyle, s32 fade, f32 scale)
{
    const f32 opacity = static_cast<f32>(256 - fade) * (1.0f / 256.0f);
    TextLayoutContextA *context = reinterpret_cast<TextLayoutContextA *>(
        reinterpret_cast<u8 *>(panel) + 0xC8);

    const PanelTextLayoutEntryPrefixA *base;
    s32 offsetEntry;
    u32 style;
    u32 color;
    if (alternateStyle != 0) {
        base = layoutFindTableEntry(context, entryIndex + 0x42F);
        offsetEntry = 0x499;
        style = 3;
        color = 0x9FE7FFFFu;
    } else {
        base = layoutFindTableEntry(context, entryIndex + 0x40E);
        offsetEntry = 0x48B;
        style = 2;
        color = 0xFFFFFFFFu;
    }

    const s16 baseX = base->x;
    const s16 baseY = base->y;
    u32 textValue;
    if (FUN_002a4b28(textId) != 0 || panel->allowTextLookup != 0) {
        textValue = FUN_00180118(textId);
    } else {
        textValue = DAT_0057f0ac.fallbackTextValue;
    }

    const PanelTextLayoutEntryPrefixA *offset = layoutFindTableEntry(context, offsetEntry);
    drawTextAtSnappedRectangle(context, style, color, textValue,
        static_cast<f32>(static_cast<s32>(offset->x) + baseX),
        static_cast<f32>(static_cast<s32>(offset->y) + baseY),
        opacity, 0.0f, scale);
}
}
