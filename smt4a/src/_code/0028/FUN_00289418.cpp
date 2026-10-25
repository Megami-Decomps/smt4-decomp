/* NON_MATCHING: readable rebuild of the status-down menu draw; retail enters the shared "unselected cell" test by goto from two branches and keeps the cursor row and the highlight flag in registers across the calls, and the banner text literal is the draft's decoding of the original bytes. */
#include "common.h"

/* A layout point and the size block it points at. */
struct StatusPoint {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;   /* size[0] is the width */
};

/* The status-down screen. */
struct StatusDown {
    /* 0x0000 */ u8 unk0000[0x3FC];
    /* 0x03FC */ u8 titleAnchor[0x144];
    /* 0x0540 */ u8 unk0540[4];
    /* 0x0544 */ s16 cardIds[8];
    /* 0x0554 */ u8 unk0554[0x1F98];
    /* 0x24EC */ s32 focusLimit;
    /* 0x24F0 */ u8 unk24F0[4];
    /* 0x24F4 */ s32 firstCursor;
    /* 0x24F8 */ s32 secondCursor;
    /* 0x24FC */ u8 unk24FC[4];
    /* 0x2500 */ u8 cursor[0x78];
    /* 0x2578 */ u8 confirming;
    /* 0x2579 */ u8 unk2579[3];
    /* 0x257C */ s32 selectedCard;
};

extern "C" {
extern StatusDown *g_statusDown;

s32 FUN_002a4894(void *cursor);
StatusPoint *FUN_001834a4(s32 group, s32 part);
s32 recordGetModeForId(s32 id);
void FUN_00334c6c(s32 x, s32 y, s32 flag);
void efctSetSpeed(f32 alpha);
void textFormatBuffer(u8 *buffer, const char *format);
s32 fontMeasureLineAdvance(u8 *text, s32 font);
void FUN_00162790(s32 a, u32 color, u8 *text, f32 x, f32 y);
void statusDownDrawEndBanner(s32 x, s32 y, f32 alpha);
s32 vec2GetYInt(void *vec);
void FUN_002f67c4(s32 card, s32 x, s32 y, s32 order);
void FUN_0037e5c0(s32 card, s32 x, s32 y);

/* Draws the status-down card row and, while confirming, the highlighted card's banner. */
void FUN_00289418(s32 x, s32 y, f32 alpha)
{
    StatusDown *screen = g_statusDown;
    s32 cursor = FUN_002a4894(screen->cursor);
    bool highlighted = false;
    if (cursor >= screen->focusLimit && screen->confirming != 0) {
        highlighted = true;
        u32 color = 0x9FE7FFFF;
        StatusPoint *banner = FUN_001834a4(0x12, 0x58D);
        s32 mode = recordGetModeForId(screen->cardIds[screen->selectedCard]);
        bool special = mode == 1 || mode == 2 || mode == 6;
        if (special)
            color = 0xF5FF9FFF;
        FUN_00334c6c(banner->x + x, banner->y + y, special);
        efctSetSpeed(alpha);
        u8 text[44];
        textFormatBuffer(text, "撂躂蒂＀");
        s32 textWidth = fontMeasureLineAdvance(text, 3);
        StatusPoint *label = FUN_001834a4(0x12, 0x579);
        FUN_00162790(3, color, text, (f32)(x + banner->x + (*banner->size - textWidth) / 2),
                     (f32)(label->y + banner->y + y));
        efctSetSpeed(1.0f);
    } else {
        statusDownDrawEndBanner(x, y, alpha);
    }
    if (screen->confirming == 0) {
        StatusPoint *first = FUN_001834a4(0x12, screen->firstCursor + 0x566);
        FUN_002f67c4(screen->firstCursor, first->x + x, y + vec2GetYInt(screen->titleAnchor) + first->y, 0x65);
        StatusPoint *second = FUN_001834a4(0x12, screen->secondCursor + 0x566);
        FUN_002f67c4(screen->secondCursor, second->x + x, second->y + y + vec2GetYInt(screen->titleAnchor), 0x65);
    }
    for (s32 i = 0; i < 8; i++) {
        bool skipped = i == cursor && !highlighted;
        if (screen->confirming != 0) {
            if (!skipped) {
                StatusPoint *point = FUN_001834a4(0x12, i + 0x566);
                FUN_002f67c4(i, point->x + x, point->y + y, 0x97);
            }
        } else if (screen->firstCursor != i && screen->secondCursor != i) {
            StatusPoint *point = FUN_001834a4(0x12, i + 0x566);
            FUN_002f67c4(i, point->x + x, point->y + y, 0x97);
        }
    }
    if (!highlighted && screen->confirming != 0) {
        StatusPoint *point = FUN_001834a4(0x12, cursor + 0x585);
        FUN_0037e5c0(cursor, point->x + x, point->y + y);
    }
}

} /* extern "C" */
