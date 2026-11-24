/* NON_MATCHING: only the saved registers of the entry x/y (retail r8 = x, r9 = y; built the reverse) differ.
 * Tried the twin's (smt4a entryWindowDrawEntryName) s32 x/y with +=, the sibling bibleDevilDrawRace's form, the
 * branches swapped, and s16/u16/s32 devil ids (s16 fixes the registers but drops retail's uxth). */
#include "bible/BibleDevilList.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "addon/LookupRecord.h"

extern "C" {
UiLayoutEntryPrefixIV *layoutFindTableEntry(UiLayoutResourceIV *resource, u32 entryId); // declcheck: local (the shared declaration in AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h does not compile here: a value of type "TextureTableEntryIV *" cannot be assigned to an entity of type "const UiLayoutEntryPrefixIV *")
void drawTextAtSnappedRectangle(UiLayoutResourceIV *resource, f32 x, f32 y, f32 opacity, f32 rotation, u32 layer,
                                u32 color, f32 scale, const char *text);

/* Draws a listed devil's name in its row, raised rows on the upper layer in white. */
void bibleDevilDrawName(BibleDevilWork *work, u32 devil, u32 row, s32 raised, s32 fade)
{
    const f32 opacity = (f32)(256 - fade) * (1.0f / 256.0f);

    const UiLayoutEntryPrefixIV *entry;
    u32 anchorId;
    u32 layer;
    u32 color;
    if (!raised) {
        entry = layoutFindTableEntry((UiLayoutResourceIV *)work->layout, row + 0x40E);
        anchorId = 0x48B;
        layer = 2;
        color = 0xFF;
    } else {
        entry = layoutFindTableEntry((UiLayoutResourceIV *)work->layout, row + 0x42F);
        anchorId = 0x499;
        layer = 3;
        color = 0xFFFFFFFF;
    }

    const s16 entryX = entry->x;
    const s16 entryY = entry->y;
    const char *name = (const char *)dataTable01FindByIdWithAoc((u16)devil);
    const UiLayoutEntryPrefixIV *anchor = layoutFindTableEntry((UiLayoutResourceIV *)work->layout, anchorId);
    const s32 x = anchor->x + entryX;
    const s32 y = anchor->y + entryY;
    drawTextAtSnappedRectangle((UiLayoutResourceIV *)work->layout, (f32)x, (f32)y, opacity, 0.0f, layer, color,
                               1.0f, name);
}
} /* extern "C" */
