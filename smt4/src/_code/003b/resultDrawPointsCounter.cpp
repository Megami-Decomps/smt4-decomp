/* NON_MATCHING: one scheduling difference (8 lines): retail sets the 0xCB lookup's id before loading the work value and loads the 9999 clamp constant after the shift (into r0, the value in r7); this build loads the constant first. */
#include "common.h"
#include "result/Result.h"
#include "text/TextDraw.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define COUNTER_MAX 9999
#define COUNTER_GROUP 0x28
#define COUNTER_TEXT_COLOR 0x7A4C00FF

extern "C" {

void textFormatFullWidthTwoDigits(u32 digit, char *text);
void gxResetColorQuadToWhite(void);

/* Draws the counter frame at (x, y) and the work's value (clamped to 9999) as four digit images,
 * leaving out leading zeros. */
void resultDrawPointsCounter(ResultWork *work, s32 x, s32 y)
{
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(COUNTER_GROUP, 0xCA);
    TextureTableEntryIV *digit;
    char text[0x44];
    u32 value;
    u32 thousands;
    u32 hundreds;
    u32 tens;

    texDrawTableEntryAtStoredOrigin(2, COUNTER_GROUP, 0xC2, frame->x + x, frame->y + y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, COUNTER_GROUP, 0xC3, frame->x + x, frame->y + y, 0x6A);
    texDrawTableEntryAtStoredOrigin(2, COUNTER_GROUP, 0xC4, frame->x + x, frame->y + y, 0x6F);
    texDrawTableEntryAtStoredOrigin(2, COUNTER_GROUP, 0xC5, frame->x + x, frame->y + y, 0x74);
    texDrawTableEntryAtStoredOrigin(2, COUNTER_GROUP, 0xC6, frame->x + x, frame->y + y, 0x79);
    value = work->shownPoints >> 12;
    value = value > COUNTER_MAX ? COUNTER_MAX : value;
    digit = asdTMTexTableEntryAt(COUNTER_GROUP, 0xCB);
    thousands = value / 1000;
    value %= 1000;
    if (thousands != 0) {
        textFormatFullWidthTwoDigits(thousands, text);
        textDrawString((f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y), 0.0f, 3, 0.0f,
                     COUNTER_TEXT_COLOR, 1.0f, text);
    }
    hundreds = value / 100;
    value %= 100;
    if (thousands != 0 || hundreds != 0) {
        digit = asdTMTexTableEntryAt(COUNTER_GROUP, 0xC9);
        textFormatFullWidthTwoDigits(hundreds, text);
        textDrawString((f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y), 0.0f, 3, 0.0f,
                     COUNTER_TEXT_COLOR, 1.0f, text);
    }
    tens = value / 10;
    value %= 10;
    if (thousands != 0 || hundreds != 0 || tens != 0) {
        digit = asdTMTexTableEntryAt(COUNTER_GROUP, 0xC8);
        textFormatFullWidthTwoDigits(tens, text);
        textDrawString((f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y), 0.0f, 3, 0.0f,
                     COUNTER_TEXT_COLOR, 1.0f, text);
    }
    digit = asdTMTexTableEntryAt(COUNTER_GROUP, 0xC7);
    textFormatFullWidthTwoDigits(value, text);
    textDrawString((f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y), 0.0f, 3, 0.0f,
                 COUNTER_TEXT_COLOR, 1.0f, text);
    gxResetColorQuadToWhite();
}

} /* extern "C" */
