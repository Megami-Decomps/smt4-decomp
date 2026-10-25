#include "common.h"

extern "C" {

/* Where and how opaque a widget is drawn. */
typedef struct DrawPlacement {
    /* 0x00 */ f32 alpha;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
} DrawPlacement;

typedef struct ImageRect {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} ImageRect;

void FUN_00164b5c(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 depth);
void efctSetSpeed(f32 alpha);
void FUN_00183bb0(void);
void drawSetColorFromRGBA8(u32 color);
ImageRect *asdTMTexTableEntryAt(s32 group, s32 image);
void FUN_002e1b64(u32 value, s32 x, s32 y, s32 depth);

/* Draws a frame (image 8 when selected, 7 otherwise) with a number on it, faded by the placement's alpha. */
void uiDrawNumberFrame(DrawPlacement *placement, s32 x, s32 y, u32 value, s32 selected)
{
    ImageRect *rect;

    FUN_00183bb0();
    efctSetSpeed(placement->alpha);
    x = placement->x + x;
    y = placement->y + y;
    if (selected == 0) {
        FUN_00164b5c(2, 46, 7, x, y, 101);
    } else {
        FUN_00164b5c(2, 46, 8, x, y, 101);
    }
    drawSetColorFromRGBA8(0x82fff500);
    rect = asdTMTexTableEntryAt(46, 83);
    FUN_002e1b64(value, rect->x + x, rect->y + y, 103);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
}

} /* extern "C" */
