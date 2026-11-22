/* NON_MATCHING: draws the play log's rows. Same calls, blocks, frame and literal pool as retail (72 lines). What
 * differs: retail sets the row index after the work pointer's address, stores the scroll bar's stack arguments
 * in other groups (regions 0 and 1 with the layer and 0 in one stm, 3 and 5 in another), and schedules the two
 * text positions' sums through other registers. */
#include "runtime/Stdio.h"
#include "camp/PlayLog/PlayLog.h"
#include "gamedata/PlayLogTable.h"
#include "gfx/SpritePartDraw.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "ui/UiSpriteApi.h"
#include "code/Code0029.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum {
    PLAY_LOG_SPRITES = 0x30,          /* the screen's sprite table */
    PLAY_LOG_NAME_COLOR = 0xe09800ff,
    PLAY_LOG_VALUE_COLOR = 0xff
};

extern "C" {

extern PlayLogWork *g_playLog;

s32 resourceRunOperationIfUnblocked(ScrollSelection *list); // declcheck: local (the shared declaration takes another list type)
void uiDrawListScrollBar(ScrollSelection *list, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId,
                         u32 arrowAId, u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion,
                         s32 arrowARegion, u32 arrowBRegion, s32 layer, s32 horizontal);
void textFormatFullWidthNumber(char *output, s32 value);

/* Draws the play log's visible rows: the list frame behind the first row, the scroll bar after the last, and
 * each row's label and value, a time as hours and minutes. */
void playLogDraw(void)
{
    PlayLogWork *work = g_playLog;
    char text[64];
    char numbers[2][16];

    for (s32 row = 0; row < (s32)uiListGetVisibleCount(&work->list); row++) {
        s32 x = vec2GetXInt(&work->sprites[row]);

        if (row == 0) {
            texDrawCompositeSprite(2, PLAY_LOG_SPRITES, 0, x, 0, 11);
        }
        if ((s32)uiListGetVisibleCount(&work->list) - 1 == row) {
            uiDrawListScrollBar(&work->list, x, 0, PLAY_LOG_SPRITES, 7, 8, 9, 3, 5, 4, 6, work->touchRegions[2],
                                work->touchRegions[0], work->touchRegions[1], 11, 0);
        }

        TextureTableEntryIV *rowFrame = asdTMTexTableEntryAt(PLAY_LOG_SPRITES, row + 21);
        texDrawCompositeSprite(2, PLAY_LOG_SPRITES, 1, rowFrame->x + x, rowFrame->y, 11);

        PlayLogRecord *record = playLogRowAt(work->ids[resourceRunOperationIfUnblocked(&work->list) + row]);
        if (record != NULL) {
            TextureTableEntryIV *nameFrame = asdTMTexTableEntryAt(PLAY_LOG_SPRITES, 19);
            __2sprintf(text, "%s", record->name);
            textDrawString((f32)(nameFrame->x + rowFrame->x + x), (f32)(rowFrame->y + nameFrame->y), 0.0f, 2, 0.0f,
                           PLAY_LOG_NAME_COLOR, 1.0f, text);

            TextureTableEntryIV *valueFrame = asdTMTexTableEntryAt(PLAY_LOG_SPRITES, 20);
            if (record->kind == PLAY_LOG_KIND_TIME) {
                u32 seconds = work->values[work->ids[resourceRunOperationIfUnblocked(&work->list) + row]];
                u32 hours = seconds / 3600;
                u32 minutes = (seconds - hours * 3600) / 60;
                textFormatFullWidthNumber(numbers[0], hours);
                textFormatFullWidthNumber(numbers[1], minutes);
                __2sprintf(text, "%s\x82\x67\x81\x40%s\x82\x6c", numbers[0], numbers[1]); /* full-width "<hours>H <minutes>M" */
            } else if (record->suffix[0] == '0') {
                textFormatFullWidthNumber(numbers[0], work->values[work->ids[resourceRunOperationIfUnblocked(&work->list) + row]]);
                __2sprintf(text, "%s", numbers[0]);
            } else {
                textFormatFullWidthNumber(numbers[0], work->values[work->ids[resourceRunOperationIfUnblocked(&work->list) + row]]);
                __2sprintf(text, "%s\x81\x40%s", numbers[0], record->suffix);
            }
            /* right-aligned in the value column */
            s32 width = fontMeasureLineAdvance(text, 2);
            textDrawString((f32)(valueFrame->x + valueFrame->placement->width - width + x + rowFrame->x),
                           (f32)(rowFrame->y + valueFrame->y), 0.0f, 2, 0.0f, PLAY_LOG_VALUE_COLOR, 1.0f, text);
        }
    }
}

} /* extern "C" */
