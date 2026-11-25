/* NON_MATCHING: 12 lines, two registers in the ailment lookup: retail keeps the ailment bits in r2 and the
 * count of set bits in r1, this build the other way round. The cause is the order armcc creates the two
 * locals of panelAilmentColor in: with `count` declared before `ailments` (and still zeroed after the lookup,
 * as retail does: C89-style declarations at the top of the helper) the unit is IDENTICAL; types, the lookup's
 * form, the loop's form and the compare's operand order change nothing. Nothing but the diff picks that
 * declaration order (FUN_003f3f08, the same body as a function, is IDENTICAL in every order), so it is not
 * applied. Also tried: the lookup written as FUN_003f3f08 has it (mask zeroed, colour, an if/else assigning the
 * mask, then the count: 12 lines, the same swap); the count zeroed before the lookup as in
 * partyPanelDrawAilmentIcon (92); `color` and `levelEntry` declared once for the whole function (12); the
 * loop in place in case 2 with function-scope locals (65 to 75). The proven sibling partyPanelDrawAilmentIcon
 * needs the opposite order (its mask before its count; 10 lines with them swapped), so the siblings give this
 * helper's order no support either. */
#include "code/Code004b.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GamePlayerData.h"
#include "ui/UiControl.h"
#include "ui/AnimatedMessage.h"
#include "ui/NumberFont.h"

extern "C" {

void drawSetColorFromRGBA8(u32 color);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);
u32 texDrawTableEntrySized(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, u32 tag);

/* The ailment bits of slot `slot`, the player's for a negative slot. */
static __inline u16 panelSlotAilments(s32 slot)
{
    if (slot < 0) {
        return gameGetPlayerData()->ailments;
    }
    return gameGetSlotRecord(slot)->ailments;
}

/* The colour of the `cursor`-th ailment slot `slot` has, white when it has fewer: the body of FUN_003f3f08,
 * which FUN_004b0164 repeats twice with the same two-way panelSlotAilments() choice. */
static __inline u32 panelAilmentColor(s32 slot, s32 cursor)
{
    u32 color = 0xffffffff;
    u16 ailments = panelSlotAilments(slot);
    s32 count = 0;
    for (s32 kind = 1; kind < 14; kind++) {
        if (kind == 2) {
            continue;
        }
        if (ailments & (1 << kind)) {
            if (count == cursor) {
                color = markerKindGetColor((s16)kind);
                break;
            }
            count++;
        }
    }
    return color;
}

/* Draws part `part` of the status panel's row for save slot `slot`, placed by layout entry `row` at (x, y):
 * the row's frame, level plate, affinity icon, labels, level digits, ailment icon, experience gauge or
 * selection highlight. */
void partyPanelDrawSlotPart(CyclingPanel *panel, s32 part, s32 slot, s32 row, s32 x, s32 y, s32 gaugeWidth, s32 selected,
                  s32 levelGain, s32 shownLevel)
{
    SlotRecordA *record = gameGetSlotRecord(slot);
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x1d, row + 0x68);

    switch (part) {
    case 0:
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x56, entry->x + x, entry->y + y, 0x65);
        break;
    case 1:
        if ((levelGain > 0 || record->level > shownLevel) && record->level + levelGain > 99) {
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x58, entry->x + x, entry->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x174, entry->x + x, entry->y + y, 0x6f);
        } else if ((levelGain > 0 || record->level > shownLevel) && record->level + levelGain <= 99) {
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x58, entry->x + x, entry->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5a, entry->x + x, entry->y + y, 0x6f);
        } else if (record->level + levelGain > 99) {
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x57, entry->x + x, entry->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x173, entry->x + x, entry->y + y, 0x6f);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x57, entry->x + x, entry->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x59, entry->x + x, entry->y + y, 0x6f);
        }
        break;
    case 2: {
        u32 color = panelAilmentColor(slot, panel->cursor[slot]);
        if (DAT_00588c4c.color != color) {
            drawSetColorFromRGBA8(color);
            DAT_00588c4c.color = color;
        }
        TextureTableEntryIV *levelEntry = DAT_00588c4c.levelEntry;
        uiDrawItemOrStatusIcon((s16)record->id, entry->x + levelEntry->x + x, entry->y + levelEntry->y + y, 0x6a, 0);
        break;
    }
    case 3:
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5b, entry->x + x, entry->y + y, 0x6f);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5c, entry->x + x, entry->y + y, 0x6f);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5d, entry->x + x, entry->y + y, 0x74);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5e, entry->x + x, entry->y + y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x81, entry->x + x, entry->y + y, 0x7a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x14f, entry->x + x, entry->y + y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x150, entry->x + x, entry->y + y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x151, entry->x + x, entry->y + y, 0x65);
        break;
    case 4: {
        s32 font = 2;
        if (record->level + levelGain > 99) {
            DAT_00588c4c.levelEntry = asdTMTexTableEntryAt(0x1d, 0x177);
            font = 3;
        } else {
            DAT_00588c4c.levelEntry = asdTMTexTableEntryAt(0x1d, 0x66);
        }
        u32 color = (levelGain > 0 || record->level > shownLevel) ? 0xff : 0xffffffff;
        if (DAT_00588c4c.color != color) {
            drawSetColorFromRGBA8(color);
            DAT_00588c4c.color = color;
        }
        TextureTableEntryIV *levelEntry = DAT_00588c4c.levelEntry;
        numberFontDrawFormatted(0, levelEntry->x + entry->x + x, entry->y + levelEntry->y + y, 1, font, 0x7e, "%d",
                     record->level + levelGain);
        break;
    }
    case 5:
        partyPanelDrawAilmentIcon(panel, slot, entry->x + x, entry->y + y);
        break;
    case 6:
    {
        TextureTableEntryIV *levelEntry = DAT_00588c4c.levelEntry;
        if (selected) {
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x60, entry->x + x, entry->y + y, 0x83);
        } else {
            texDrawTableEntrySized(2, 0x1d, 0x5f, entry->x + x, entry->y + y, gaugeWidth,
                                   levelEntry->placement->height, 0x83);
        }
        break;
    }
    case 7:
        if (selected) {
            if (levelGain < 8) {
                efctSetSpeed((f32)levelGain * 0.125f);
            }
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x61, entry->x + x, entry->y + y, 0x88);
            texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x61, entry->x + x, entry->y + y, 0x89);
        }
        break;
    }
}

} /* extern "C" */
