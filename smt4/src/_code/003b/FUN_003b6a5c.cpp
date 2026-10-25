/* NON_MATCHING: near: 203 rows against 204; retail keeps the text colour in a callee-saved register and the work pointer in r7 (ours r8) and loads the frame/digit y offsets before the x offsets; the draw sequence and leading-zero logic agree. */
#include "common.h"
#include "shard/TextureDrawCall.h"

/* An image placement record (offsets 8 and 10 hold the position). */
struct ImagePlacement {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

/* The work area the counter reads (observed field). */
struct CounterWork {
    /* 0x0000 */ u8 unk0000[0xD550];
    /* 0xD550 */ u32 value;       /* fixed point, 12 fractional bits */
};

#define COUNTER_MAX 9999
#define COUNTER_GROUP 0x28
#define COUNTER_TEXT_COLOR 0x7A4C00FF

extern "C" {

ImagePlacement *FUN_002bf4f8(s32 group, s32 image);
void FUN_0025086c(u32 digit, char *text);
void FUN_002be5a4(s32 layer, u32 color, const char *text, f32 x, f32 y, f32 a, f32 b, f32 c);
void FUN_002bed3c(void);

/* Draws the counter frame at (x, y) and the work's value (clamped to 9999) as four digit images,
 * leaving out leading zeros. */
void FUN_003b6a5c(CounterWork *work, s32 x, s32 y)
{
    ImagePlacement *frame = FUN_002bf4f8(COUNTER_GROUP, 0xCA);
    ImagePlacement *digit;
    char text[0x44];
    u32 value;
    u32 thousands;
    u32 hundreds;
    u32 tens;

    FUN_002bf288(2, COUNTER_GROUP, 0xC2, frame->x + x, frame->y + y, 0x65);
    FUN_002bf288(2, COUNTER_GROUP, 0xC3, frame->x + x, frame->y + y, 0x6A);
    FUN_002bf288(2, COUNTER_GROUP, 0xC4, frame->x + x, frame->y + y, 0x6F);
    FUN_002bf288(2, COUNTER_GROUP, 0xC5, frame->x + x, frame->y + y, 0x74);
    FUN_002bf288(2, COUNTER_GROUP, 0xC6, frame->x + x, frame->y + y, 0x79);
    value = work->value >> 12;
    if (value > COUNTER_MAX) {
        value = COUNTER_MAX;
    }
    digit = FUN_002bf4f8(COUNTER_GROUP, 0xCB);
    thousands = value / 1000;
    value %= 1000;
    if (thousands != 0) {
        FUN_0025086c(thousands, text);
        FUN_002be5a4(3, COUNTER_TEXT_COLOR, text, (f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y),
                     0.0f, 0.0f, 1.0f);
    }
    hundreds = value / 100;
    value %= 100;
    if (thousands != 0 || hundreds != 0) {
        digit = FUN_002bf4f8(COUNTER_GROUP, 0xC9);
        FUN_0025086c(hundreds, text);
        FUN_002be5a4(3, COUNTER_TEXT_COLOR, text, (f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y),
                     0.0f, 0.0f, 1.0f);
    }
    tens = value / 10;
    if (thousands != 0 || hundreds != 0 || tens != 0) {
        digit = FUN_002bf4f8(COUNTER_GROUP, 0xC8);
        FUN_0025086c(tens, text);
        FUN_002be5a4(3, COUNTER_TEXT_COLOR, text, (f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y),
                     0.0f, 0.0f, 1.0f);
    }
    digit = FUN_002bf4f8(COUNTER_GROUP, 0xC7);
    FUN_0025086c(value % 10, text);
    FUN_002be5a4(3, COUNTER_TEXT_COLOR, text, (f32)(frame->x + digit->x + x), (f32)(frame->y + digit->y + y),
                 0.0f, 0.0f, 1.0f);
    FUN_002bed3c();
}

} /* extern "C" */
