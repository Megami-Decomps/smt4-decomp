#include "gfx/StereoParallax.h"
/* NON_MATCHING: the stereo parallax is recomputed per call where retail reuses one value, the kind switch is a jump table and register assignment differs (225 vs 238 rows); the name plate drawing is the same. */
#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {

/* A message record (only the fields read here). */
typedef struct TalkMessage {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 kind;
    /* 0x06 */ u8 unk06[0xA];
    /* 0x10 */ char speaker[1];         /* the speaker name, "<pc 0>" for the player */
} TalkMessage;

/* A layout record (only the fields read here). */
typedef struct TalkLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;               /* width, height */
} TalkLayout;

/* The talk window (only the message pointer, at 0x664). */
typedef struct TalkWindow {
    /* 0x000 */ u8 unk000[0x664];
    /* 0x664 */ TalkMessage *message;
} TalkWindow;

extern u8 *g_renderCtx;
extern const char DAT_0052d134[];

void efctSetSpeed(f32 speed);
u32 FUN_004038e0(TalkWindow *window, u16 id);
void drawSetColorFromRGBA8(u32 color);
TalkLayout *FUN_001834a4(u32 group, u32 id);
void FUN_00183bb0(void);
s32 libc_strcmp(const char *a, const char *b);
void *gameGetPlayerData(void);
const char *gameGetPlayerName(void);
void textFormatBuffer(void *buffer, const char *format, const char *text);
void FUN_00162790(u32 first, s32 second, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);

/* Draws the talk window's name plate at (`x`, `y`) with fade `scale`: the frame, then for the
 * current message its portrait (highlighted for even kinds) and the speaker's name. */
void FUN_004045ac(TalkWindow *window, s32 x, s32 y, f32 scale)
{
    s32 nameColor = -1;
    s32 left = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 depth = 0x65;

    efctSetSpeed(scale);
    for (s32 i = 0; i < 3; i++) {
        FUN_001835b4(2, 0x32, i, left, y, depth);
    }
    TalkMessage *message = window->message;

    if (message != NULL && message->id != 0) {
        u32 portrait = FUN_004038e0(window, message->kind);
        s32 highlighted = 0;

        switch (window->message->kind) {
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        case 14:
        case 16:
        case 18:
            highlighted = 1;
            break;
        }
        if (highlighted != 0) {
            drawSetColorFromRGBA8(0x57D8FFFF);
            TalkLayout *frame = FUN_001834a4(0x32, 0x36);

            FUN_001835b4(2, 0x32, 1000, frame->x + x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f), frame->y + y, depth);
            TalkLayout *face = FUN_001834a4(0x32, 3);
            s32 faceX = face->x + x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);

            FUN_001835b4(2, 0x32, portrait, faceX, face->y + y, depth);
            FUN_001835b4(2, 0x32, 0x3F1, faceX, face->y + y, depth + 1);
            FUN_00183bb0();
        } else {
            TalkLayout *frame = FUN_001834a4(0x32, 0x36);

            FUN_001835b4(2, 0x32, 1000, frame->x + x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f), frame->y + y, depth);
            TalkLayout *face = FUN_001834a4(0x32, 3);

            FUN_001835b4(2, 0x32, portrait, face->x + x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f), face->y + y, depth);
        }
        TalkLayout *plate = FUN_001834a4(0x32, 4);
        const char *name = window->message->speaker;
        char text[64];

        if (libc_strcmp(name, DAT_0052d134) == 0) {
            gameGetPlayerData();
            name = gameGetPlayerName();
        }
        textFormatBuffer(text, "%s", name);
        TalkLayout *nameBox = FUN_001834a4(0x32, 5);
        s32 labelX = nameBox->size[0] + plate->x + x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);

        FUN_00162790(3, nameColor, text, (f32)labelX, (f32)(plate->y + y), (f32)(256 - depth) * 0.00390625f, 0.0f, scale);
    }
    efctSetSpeed(1.0f);
}

}
