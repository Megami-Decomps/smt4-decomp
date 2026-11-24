/* The title scene's tuning values. */
#ifndef TITLE_TITLESCENETUNING_H
#define TITLE_TITLESCENETUNING_H

#include "common.h"

/* SMT IV: the title scene's tuning block at 0x44cdc8 (.data), read by the title draws and the map navigation's drag
 * scroll. */
struct TitleSceneTuning {
    /* 0x00 */ f32 dragFriction;        /* drag-scroll velocity damping (naviDragScrollUpdate, mapNaviDisplayUpdateDragScroll) */
    /* 0x04 */ s32 framesPerStep;       /* frames per loading ring step (FUN_0039bd04) */
    /* 0x08 */ u32 loadingCaptionColor; /* the loading caption's colour (FUN_0039bd04) */
    /* 0x0C */ u32 bannerCaptionColor;  /* the title banner caption's colour (FUN_0039ba2c) */
    /* 0x10 */ s32 unk10;               /* set to 0xF1/0xB and counted by naviMapDraw, read by naviPanelDraw */
};
typedef char TitleSceneTuningLayout[offsetof(TitleSceneTuning, bannerCaptionColor) == 0xC && sizeof(TitleSceneTuning) == 0x14 ? 1 : -1];

extern "C" TitleSceneTuning DAT_0044cdc8;

#endif
