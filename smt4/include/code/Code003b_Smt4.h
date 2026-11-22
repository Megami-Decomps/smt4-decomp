#pragma once
#include "common.h"

/* Functions in the 0x003b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Obj;
struct TextureTableEntryIV;
struct ResultWork;

/* The level-up result rows' draw state (0x44dc38): the layout entry of the column being drawn and the colour the
 * draw calls were last given, so a row sets the colour only when it changes. */
struct ResultRowDrawState {
    /* 0x00 */ TextureTableEntryIV *column;
    /* 0x04 */ u32 color;       /* RGBA8, as passed to drawSetColorFromRGBA8 */
};

extern "C" {

extern ResultRowDrawState g_resultRowDrawState;

void resultDrawRowColumn(ResultWork *work, u32 column, s32 unit, s32 row, s32 x, s32 y, s32 width, s32 active, s32 gain,
                  s32 limit);
void resultDrawAilmentMarker(ResultWork *work, s32 unit, s32 x, s32 y);

void menu4CSetValue42(Obj *obj);

} /* extern "C" */
