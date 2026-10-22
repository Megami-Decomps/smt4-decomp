/* NON_MATCHING: retail loads the part's x/y before setting up the stacked arguments; this build
 * stores the stacked arguments first (same instructions, different order). */
#include "common.h"

/* A layout part FUN_0018349c finds by id. */
struct LayoutPart {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

/* The window that shows a percentage. */
struct PercentWindow {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ u8 style; /* 'd': draw the text in the highlight color */
    /* 0x95 */ u8 unk95[0x33];
    /* 0xc8 */ u8 layout[1];
};

extern "C" {
s32 textFormatBuffer(char *output, const char *format, ...);
LayoutPart *FUN_0018349c(void *layout, u32 partId);
void drawTextAtRelativePosition(void *layout, u32 drawContext, s32 x, s32 y, u32 option0, u32 option1,
                  u32 color, u32 alpha, const char *text);
void FUN_004934ac(void *layout, u32 partId, u32 option0, u32 option1, u32 alpha);

/* Draws the window's frame and the value as a three-digit percentage. */
void FUN_004a7950(PercentWindow *window, s32 value, u32 alpha)
{
    char text[32];
    u32 color = 0xffffffff;
    LayoutPart *part;

    FUN_004934ac(window->layout, 0x407, 0, 0, alpha);
    textFormatBuffer(text, "%3d", value);
    if (window->style == 'd') {
        color = 0x72e027ff;
    }
    part = FUN_0018349c(window->layout, 0x40b);
    drawTextAtRelativePosition(window->layout, 0, part->x, part->y, 0, 7, color, alpha, text);
    part = FUN_0018349c(window->layout, 0x408);
    drawTextAtRelativePosition(window->layout, 0, part->x, part->y, 0, 0, color, alpha, "%");
}
}
