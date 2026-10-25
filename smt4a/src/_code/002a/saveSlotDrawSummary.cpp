/* NON_MATCHING: draw offsets use ldrd instead of retail's ldm; color-path registers and decimal-formatter layout also differ. */
#include "saveLoadUI/saveLoadUI.h"
#include "shard/TextureDrawCall.h"
#include "font/SearchWin/RunWin.h"
#include "text/TextDraw.h"

extern "C" {
void FUN_00183bb0(void);
void efctSetSpeed(f32 alpha);
void FUN_00164b5c(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 depth);
const MessageDrawPosition *FUN_001834a4(u32 group, u32 index);
const SaveSlotPortraitResource *FUN_00184310(u32 portrait);
void FUN_00169a1c(u32 image, s32 x, s32 y, s32 depth);
void *FUN_0019acdc(u32 id, u32 mode);
u32 FUN_0036fcd0(void *unit, u32 mode);
u32 FUN_0019e52c(u32 id);
void drawSetColorFromRGBA8(u32 color);
void textFormatBuffer(char *destination, const char *format, ...);
void FUN_00180310(s32 layer, s32 x, s32 y, s32 z, s32 scale, s32 depth, const char *format, ...);
void FUN_002e1b64(u32 location, s32 x, s32 y, s32 depth);

/* Draw a save-slot summary, including portraits and the elapsed-play-time fields. */
void saveSlotDrawSummary(const SaveSlotTextObjects *texts, const SaveSlotDisplayRecord *record,
                  const MessageDrawTransform *transform, s32 x, s32 y, s32 preview)
{
    if (texts == NULL || record == NULL || transform == NULL || transform->alpha == 0.0f) {
        return;
    }
    FUN_00183bb0();
    efctSetSpeed(transform->alpha);
    x += transform->x;
    y += transform->y;
    if (preview != 0) {
        FUN_001835b4(2, 0x2E, 0x56, x, y, 0x65);
        return;
    }
    u32 textColor;
    u32 nameColor;
    if (record->style == 0) {
        FUN_00164b5c(2, 0x2E, 9, x, y, 0x65);
        textColor = 0x32323200;
        nameColor = 0;
        if ((record->flags & 4) != 0) {
            FUN_001835b4(2, 0x2E, 0x165, x, y, 0x65);
            nameColor = 0x896E0000;
        }
    } else if (record->style == 1) {
        FUN_00164b5c(2, 0x2E, 10, x, y, 0x65);
        textColor = 0xC0C0C000;
        nameColor = 0xFFFFFF00;
        if ((record->flags & 4) != 0) {
            FUN_001835b4(2, 0x2E, 0x166, x, y, 0x65);
            nameColor = 0xE6C80000;
        }
    }
    const MessageDrawPosition *position = FUN_001834a4(0x2E, 0x75);
    FUN_001527d8((u32)texts->name, nameColor);
    FUN_0025cc78(texts->name, position->x + x, position->y + y, 0x66, 1.0f);
    if ((record->flags & 2) != 0) {
        position = FUN_001834a4(0x2E, 0x76);
        u32 color = record->style == 0 ? 0x006E0000 : 0x00F33700;
        FUN_001527d8((u32)texts->optional, color);
        FUN_0025cc78(texts->optional, position->x + x, position->y + y, 0x66, 1.0f);
    }
    FUN_001835b4(2, 0x2E, 0x5A, x, y, 0x66);
    if (record->portrait != 0) {
        const SaveSlotPortraitResource *portrait = FUN_00184310(record->portrait);
        position = FUN_001834a4(0x2E, 0x78);
        FUN_00169a1c(portrait->image, position->x + x, position->y + y, 0x67);
    }
    if (record->secondaryPortrait != 0) {
        void *unit = FUN_0019acdc(record->secondaryPortrait, 0);
        u16 id = FUN_0036fcd0(unit, 0);
        const SaveSlotPortraitResource *portrait = FUN_00184310(FUN_0019e52c(id));
        position = FUN_001834a4(0x2E, 0x100);
        FUN_00169a1c(portrait->image, position->x + x, position->y + y, 0x67);
    }
    char text[16];
    char time[12];
    drawSetColorFromRGBA8(textColor);
    textFormatBuffer(text, "%d", record->level);
    position = FUN_001834a4(0x2E, 0x74);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x6A, text);
    drawSetColorFromRGBA8(0xB9D7D700);
    u32 hours = record->playSeconds / 3600;
    u32 remainder = record->playSeconds % 3600;
    textFormatBuffer(time, "%02d", remainder % 60);
    position = FUN_001834a4(0x2E, 0x7C);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    textFormatBuffer(time, "%c", ':');
    position = FUN_001834a4(0x2E, 0x79);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    textFormatBuffer(time, "%02d", remainder / 60);
    position = FUN_001834a4(0x2E, 0x7E);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    textFormatBuffer(time, "%c", ':');
    position = FUN_001834a4(0x2E, 0x7A);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    for (s32 index = 0, place = 4; place >= 1; ++index, --place) {
        u32 digit = saveSlotDecimalDigit(hours, (u8)place);
        if (digit == 10) {
            time[index] = ' ';
        } else {
            textFormatBuffer(time + index, "%d", digit);
        }
    }
    time[4] = '\0';
    position = FUN_001834a4(0x2E, 0x82);
    FUN_00180310(0, position->x + x, position->y + y, 0, 5, 0x67, time);
    position = FUN_001834a4(0x2E, 0x89);
    FUN_002e1b64(record->location, position->x + x, position->y + y, 0x67);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
}
}
