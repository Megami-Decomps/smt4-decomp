/* NON_MATCHING: 227 lines (349 vs 342 rows), complete. Retail keeps the title's white in r8 across the sprintf (the
 * build loads it at the call, so the later saved registers are one off: sl/r9 against r9/r8), computes the title's y
 * before its x, loads the number format for each numberFontDrawFormatted call (the build keeps it in sl) and reads the
 * position's two words separately where the build pairs them. */
#include <string.h>
#include "common.h"
#include "runtime/Stdio.h"
#include "saveLoadUI/SaveSlotRow.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code0019.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "ui/NumberFont.h"

extern "C" {

extern const char DAT_00533f48[];   /* the number format */
extern const char DAT_00533f4c[];   /* the title format */

void drawSetColorFromRGBA8(u32 color);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 style, s32 option);
void FUN_003849cc(s32 id, s32 sub, s32 flag, char *buffer, s32 level);
const char *configValueName(s32 index);

enum {
    kRowBank = 0x2B,
    kTextColor = 0xB9D7D7FF,
    kCycleColor = 0x57D8FFFF,
    kFlagLevelThreeDigits = 0x534
};

/* Draws one row of the save/load menu at `layout`: the file's title, level, place, play time, icons, cycle count,
 * partner and difficulty, at full opacity when `selected` and half otherwise. A slot without a file (`record` NULL)
 * draws as the empty row with one of the row's two labels. */
void saveSlotRowDraw(SaveSlotRow *row, SaveSlotRecord *record, const TextureTableEntryIV *layout, s32 value, s32 selected,
                  s32 alternate)
{
    UiScaledDrawPosition position;
    char text[0x80];

    position.x = row->x + layout->x;
    f32 scale = 0.5f;
    if (selected != 0) {
        scale = 1.0f;
    }
    position.y = layout->y + row->y;
    s32 frame = 2;
    if (selected != 0) {
        frame = 3;
    }
    position.speed = row->alpha * scale;

    if (record == NULL) {
        saveSlotRowDrawEmpty(row, &position, alternate != 0 ? row->emptyLabel : row->emptyLabelAlternate, value, selected);
        return;
    }

    efctSetSpeed(position.speed);
    texDrawCompositeSprite(2, kRowBank, frame, position.x, position.y, 2);
    texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x3B, position.x, position.y, 2);
    texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x3C, position.x, position.y, 2);
    texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x1E, position.x, position.y, 2);
    for (s32 i = 0; i < 3; i++) {
        texDrawTableEntryAtStoredOrigin(2, kRowBank, i + 0x2B, position.x, position.y, 2);
    }
    texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x4B, position.x, position.y, 2);

    TextureTableEntryIV *entry = asdTMTexTableEntryAt(kRowBank, 0x2F);
    s32 x = position.x + entry->x;
    s32 y = position.y + entry->y;
    __2sprintf(text, DAT_00533f4c, record->name);
    textDrawString((f32)x, (f32)y, 0.0f, 4, 0.0f, 0xFFFFFFFF, position.speed, text);

    s32 digits;
    if (gameFlagIsSet(kFlagLevelThreeDigits) || record->level > 99) {
        entry = asdTMTexTableEntryAt(kRowBank, 0x89);
        digits = 3;
    } else {
        entry = asdTMTexTableEntryAt(kRowBank, 0x3A);
        digits = 2;
    }
    numberFontDrawFormatted(6, position.x + entry->x, position.y + entry->y, 1, digits, 2, DAT_00533f48, record->level);

    entry = asdTMTexTableEntryAt(kRowBank, 0x2A);
    u32 placeKind = record->placeKind;
    if (placeKind != 0) {
        if (placeKind - 200 < 100) {
            placeKind = 203;
        }
        FUN_003849cc(placeKind, record->placeIndex, 2, text, record->placeLevel);
        fontMeasureLineAdvance(text, 2);
        textDrawString((f32)(position.x + entry->x), (f32)(position.y + entry->y), 0.0f, 2, 0.0f, kTextColor,
                       position.speed, text);
    }

    saveSlotRowDrawPlayTime(row, record, &position);
    saveSlotRowDrawIcons(row, record, &position);

    if (record->cycle != 0) {
        texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x6E, position.x, position.y, 2);
        drawSetColorFromRGBA8(kCycleColor);
        entry = asdTMTexTableEntryAt(kRowBank, 0x72);
        numberFontDrawFormatted(6, position.x + entry->x, entry->y + position.y, 1, 4, 2, DAT_00533f48,
                                record->cycle + 1);
        gxResetColorQuadToWhite();
    } else if (record->marked != 0) {
        texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x17, position.x, position.y, 2);
    }
    texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x84, position.x, position.y, 2);
    texDrawTableEntryAtStoredOrigin(2, kRowBank, row->frame, position.x, position.y, 2);
    saveSlotRowDrawNumber(row, value, &position, 0xFFFFFFFF);
    texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x1C, position.x, position.y, 11);

    u16 partnerId = record->partnerId;
    if (partnerId != 0) {
        entry = asdTMTexTableEntryAt(kRowBank, 0x1D);
        texDrawTableEntryAtStoredOrigin(2, kRowBank, 0x16, position.x + entry->x, position.y + entry->y, 11);
        uiDrawItemOrStatusIcon((s16)dataTable10FindValue(partnerId), position.x + entry->x, position.y + entry->y, 21,
                               0);
    }

    memcpy(text, configValueName(record->difficulty), 0x40);
    s32 width = fontMeasureLineAdvance(text, 2);
    entry = asdTMTexTableEntryAt(kRowBank, 0x25);
    textDrawString((f32)(entry->x + position.x + (entry->placement->width - width) / 2), (f32)(entry->y + position.y),
                   0.0f, 2, 0.0f, kTextColor, position.speed, text);
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
}

} /* extern "C" */
