#include "ui/UiControl.h"
/* NON_MATCHING: retail's prologue pushes r0-r3 with the saved registers and reads the entry argument from its pushed slot ([sp+96]) instead of keeping it in a register (frame 76 vs 92); the panel/alternate/textId registers also differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

namespace {
struct ProfileEntryDrawView {
    u8 unk000[0xC8];
    u8 layout[0x761];
    s8 style;
    u8 unk82A[0x26];
    s32 fade;
};

/* The fields of a demon table record this panel shows. */
struct DemonCaptionRecord {
    u8 unk00[2];
    u16 flags;
    u32 caption;
    u32 detail;
};
}

static __inline const void *panelTouchSelection(ProfileEntryDrawView *panel)
{
    return reinterpret_cast<u8 *>(panel) + 0x818;
}

static __inline TextLayoutContextA *panelLayout(ProfileEntryDrawView *panel)
{
    return reinterpret_cast<TextLayoutContextA *>(panel->layout);
}

extern "C" {
const PanelTextLayoutEntryPrefixA *layoutFindTableEntry(TextLayoutContextA *context, s32 entryId);
DemonCaptionRecord *dataTable00FindById(u16 id);
s8 touchSelectionGetSelected(const void *selection);
void FUN_004a7dc8(ProfileEntryDrawView *panel, s32 entry, s32 fade, s32 style);
void demonIconPanelDrawRow(ProfileEntryDrawView *panel, s32 enabled, u32 textId, s32 entry, s32 alternate, s32 fade);
void FUN_004a7cb0(ProfileEntryDrawView *panel, u32 textId, s32 entry, s32 alternate, s32 fade, f32 scale);
void FUN_004a7fb8(ProfileEntryDrawView *panel, u32 textId, s32 entry, s32 alternate, s32 style, s32 fade, f32 scale);
void FUN_004a7814(ProfileEntryDrawView *panel, u32 first, s32 entry, s32 alternate, s32 fade, u32 second);
s32 textFormatBuffer(char *destination, const char *format, ...);

/* Draws one entry of the profile panel: its icon, tags and the two number captions. */
void FUN_004a5ea0(ProfileEntryDrawView *panel, s32 entry, s32 alternate, u32 textId, f32 scale)
{
    s32 fade = panel->fade;
    if (alternate != 0) {
        fade++;
    }
    u32 opacity = (u32)(scale * 255.0f) & 0xff;
    const PanelTextLayoutEntryPrefixA *base;
    if (alternate == 0) {
        base = layoutFindTableEntry(panelLayout(panel), entry + 0x40E);
    } else {
        base = layoutFindTableEntry(panelLayout(panel), entry + 0x42F);
    }
    s32 baseX = base->x;
    s32 baseY = base->y;
    if (alternate != 0) {
        FUN_004a7dc8(panel, entry, fade, touchSelectionGetSelected(panelTouchSelection(panel)));
    }
    demonIconPanelDrawRow(panel, 1, textId, entry, alternate, fade);
    FUN_004a7cb0(panel, textId, entry, alternate, fade, scale);
    FUN_004a7fb8(panel, textId, entry, alternate, touchSelectionGetSelected(panelTouchSelection(panel)), fade, scale);

    u16 id = static_cast<u16>(textId);
    DemonCaptionRecord *record = dataTable00FindById(id);
    u32 flags = 0;
    if (record != NULL) {
        flags = record->flags & 0x7FFF;
    }
    FUN_004a7814(panel, flags, entry, alternate, fade, 0xFFFFFFFF);

    record = dataTable00FindById(id);
    u32 caption = 0;
    if (record != NULL) {
        caption = record->caption;
    }
    char text[60];
    const PanelTextLayoutEntryPrefixA *captionEntry;
    u32 color;
    if (alternate != 0) {
        captionEntry = layoutFindTableEntry(panelLayout(panel), 0x49D);
        color = 0xFBEB39FF;
    } else {
        captionEntry = layoutFindTableEntry(panelLayout(panel), 0x48F);
        color = 0xFFC90FFF;
    }
    s32 captionX = captionEntry->x + baseX;
    s32 captionY = captionEntry->y + baseY;
    textFormatBuffer(text, "%4d", caption);
    drawTextAtRelativePosition(panelLayout(panel), 0, captionX, captionY, 0, 7, color | opacity, fade, text);

    record = dataTable00FindById(id);
    u32 detail = 0;
    if (record != NULL) {
        detail = record->detail;
    }
    const PanelTextLayoutEntryPrefixA *detailEntry;
    if (alternate != 0) {
        detailEntry = layoutFindTableEntry(panelLayout(panel), 0x4A1);
    } else {
        detailEntry = layoutFindTableEntry(panelLayout(panel), 0x493);
    }
    s32 detailX = detailEntry->x + baseX;
    s32 detailY = detailEntry->y + baseY;
    textFormatBuffer(text, "%4d", detail);
    drawTextAtRelativePosition(panelLayout(panel), 0, detailX, detailY, 0, 7, 0x4ABAE1FF | opacity, fade, text);
}

}
