#include "code/Code004b.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/GameSaveDataA.h"
#include "ui/AnimatedMessage.h"
#include "ui/NumberFont.h"

extern "C" {

PartySlotA *partyGetSlotPreferredFirst(u32 index);
void drawSetColorFromRGBA8(u32 color);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);
u32 texDrawTableEntrySized(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, u32 tag);

/* Draws part `part` of the status panel's row for party slot `slot` (partyPanelDrawSlotPart's parts, for the rows that
 * show a party slot rather than a save slot; these have no ailment icon). */
void partyPanelDrawPartySlotPart(CyclingPanel *panel, s32 part, u32 slot, s32 row, s32 x, s32 y, s32 gaugeWidth, s32 selected,
                  s32 levelGain, s32 shownLevel)
{
    SlotRecordA *record = &partyGetSlotPreferredFirst((u16)slot)->record;
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x1d, row + 0x152);

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
        TextureTableEntryIV *levelEntry = DAT_00588c4c.levelEntry;
        uiDrawItemOrStatusIcon((s16)record->id, entry->x + levelEntry->x + x, entry->y + levelEntry->y + y, 0x6a, 0);
        break;
    }
    case 3:
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5b, entry->x + x, entry->y + y, 0x6f);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5c, entry->x + x, entry->y + y, 0x6f);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5d, entry->x + x, entry->y + y, 0x74);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x5e, entry->x + x, entry->y + y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x81, entry->x + x, entry->y + y, 0x7e);
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
