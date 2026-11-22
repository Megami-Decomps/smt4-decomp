#ifndef SMT4A_CAMP_UNITE_DRAW_H
#define SMT4A_CAMP_UNITE_DRAW_H

#include "common.h"

struct UniteWorkA;

/* Colours of a skill's name in the skill inheritance screen's two lists. */
enum {
    SKILL_NAME_COLOR = 0x9fe7ffff,         /* a skill that can be picked */
    SKILL_NAME_COLOR_EMPTY = 0x9b9b9bff,   /* a candidate row past the end of the list */
    SKILL_NAME_COLOR_SLOTTED = 0x57d8ffff, /* a candidate that already sits in one of the eight slots */
    SKILL_NAME_COLOR_PRESSED = 0xf5ff9fff  /* the row's button is touched (button kinds 1, 2 and 6) */
};

extern "C" {

s32 FUN_001f5294(u32 job);
s32 uniteDrawPanel(u32 job);
void uniteDrawListPanel(s32 x, s32 y, s32 mode, f32 opacity);
void FUN_002aa038(s32 x, s32 y, f32 opacity);
void uniteDrawPanelRows(s32 x, s32 y, f32 opacity);
void FUN_0034abe0(s32 x, s32 y, s32 panel, s32 opened, f32 opacity);
void FUN_002a7bb8(s32 x, s32 y, s32 opened, f32 opacity);
void FUN_002a968c(s32 x, s32 y, u32 mode, s32 preview, u32 opened, s32 detail, s32 alternate, f32 opacity);
void uniteDrawDetailPanel(s32 x, s32 y, f32 opacity);
/* Draws the strip of list button `button` at (x, y) with opacity `scale`: the frame at the screen's fade, the
 * plate and caption (the highlighted set for the button kinds 1, 2 and 6) and the sliding shine. The scale is
 * declared before the button: every caller schedules its arguments in that order. */
void largeGridDrawButtonStrip(UniteWorkA *work, s32 x, s32 y, f32 scale, s32 button);

}
#endif
