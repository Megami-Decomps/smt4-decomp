/* NON_MATCHING: retail keeps the record in r7 and x in r9 (here r8 and r7), places the level text below the time
 * buffer (sp+16 and sp+32; here sp+24 and sp+12), and unrolls the decimal-digit helper's two loops by two. */
#include <stdio.h>
#include "saveLoadUI/saveLoadUI.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/TextureDrawCall.h"
#include "font/SearchWin/RunWin.h"
#include "text/TextDraw.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "code/Code0019.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 alpha);
void texDrawCompositeSprite(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 depth);
void FUN_00169a1c(u32 image, s32 x, s32 y, s32 depth);
u32 FUN_0036fcd0(void *unit, u32 mode);
void drawSetColorFromRGBA8(u32 color);
void FUN_00180310(s32 layer, s32 x, s32 y, s32 z, s32 scale, s32 depth, const char *format, ...);
void FUN_002e1b64(u32 location, s32 x, s32 y, s32 depth);

/* Draw a save-slot summary, including portraits and the elapsed-play-time fields. */
void saveSlotDrawSummary(const SaveSlotTextObjects *texts, const SaveSlotDisplayRecord *record,
                  const MessageDrawTransform *transform, s32 x, s32 y, s32 preview)
{
    if (texts == NULL || record == NULL || transform == NULL || transform->alpha == 0.0f) {
        return;
    }
    gxResetColorQuadToWhite();
    efctSetSpeed(transform->alpha);
    MessageDrawOffset offset = transform->offset;
    x += offset.x;
    y += offset.y;
    if (preview != 0) {
        texDrawTableEntryAtStoredOrigin(2, 0x2E, 0x56, x, y, 0x65);
        return;
    }
    u32 textColor;
    u32 nameColor;
    if (record->style == 0) {
        texDrawCompositeSprite(2, 0x2E, 9, x, y, 0x65);
        textColor = 0x32323200;
        nameColor = 0;
        if ((record->flags & 4) != 0) {
            texDrawTableEntryAtStoredOrigin(2, 0x2E, 0x165, x, y, 0x65);
            nameColor = 0x896E0000;
        }
    } else if (record->style == 1) {
        texDrawCompositeSprite(2, 0x2E, 10, x, y, 0x65);
        textColor = 0xC0C0C000;
        nameColor = 0xFFFFFF00;
        if ((record->flags & 4) != 0) {
            texDrawTableEntryAtStoredOrigin(2, 0x2E, 0x166, x, y, 0x65);
            nameColor = 0xE6C80000;
        }
    }
    const TextureTableEntryIV *position = asdTMTexTableEntryAt(0x2E, 0x75);
    uiObjectSetColorRgb((u32)texts->name, nameColor);
    textDrawFaded(texts->name, position->x + x, position->y + y, 0x66, transform->alpha);
    if ((record->flags & 2) != 0) {
        position = asdTMTexTableEntryAt(0x2E, 0x76);
        uiObjectSetColorRgb((u32)texts->optional, record->style == 0 ? 0x006E0000 : 0x00F33700);
        textDrawFaded(texts->optional, position->x + x, position->y + y, 0x66, transform->alpha);
    }
    texDrawTableEntryAtStoredOrigin(2, 0x2E, 0x5A, x, y, 0x66);
    if (record->portrait != 0) {
        const NkmBaseRecordA *portrait = nkmBaseGetRecord(record->portrait);
        position = asdTMTexTableEntryAt(0x2E, 0x78);
        FUN_00169a1c(portrait->model, position->x + x, position->y + y, 0x67);
    }
    if (record->secondaryPortrait != 0) {
        void *unit = reinterpret_cast<void *>(FUN_0019acdc(record->secondaryPortrait, 0));
        u16 id = FUN_0036fcd0(unit, 0);
        const NkmBaseRecordA *portrait = nkmBaseGetRecord(dataTable10FindValue(id));
        position = asdTMTexTableEntryAt(0x2E, 0x100);
        FUN_00169a1c(portrait->model, position->x + x, position->y + y, 0x67);
    }
    char text[16];
    char time[12];
    drawSetColorFromRGBA8(textColor);
    sprintf(text, "%d", record->level);
    position = asdTMTexTableEntryAt(0x2E, 0x74);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x6A, text);
    drawSetColorFromRGBA8(0xB9D7D700);
    u32 hours = record->playSeconds / 3600;
    u32 remainder = record->playSeconds % 3600;
    sprintf(time, "%02d", remainder % 60);
    position = asdTMTexTableEntryAt(0x2E, 0x7C);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    sprintf(time, "%c", ':');
    position = asdTMTexTableEntryAt(0x2E, 0x79);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    sprintf(time, "%02d", remainder / 60);
    position = asdTMTexTableEntryAt(0x2E, 0x7E);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    sprintf(time, "%c", ':');
    position = asdTMTexTableEntryAt(0x2E, 0x7A);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    s32 index = 0;
    for (s32 place = 4; place >= 1; ++index, --place) {
        u32 digit = saveSlotDecimalDigit(hours, (u8)place);
        if (digit == 10) {
            time[index] = ' ';
        } else {
            sprintf(time + index, "%d", digit);
        }
    }
    time[index] = '\0';
    position = asdTMTexTableEntryAt(0x2E, 0x82);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    position = asdTMTexTableEntryAt(0x2E, 0x89);
    FUN_002e1b64(record->location, position->x + x, position->y + y, 0x67);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
}
}
