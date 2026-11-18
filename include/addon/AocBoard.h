/* The work shared by the AOC board's calculation and draw jobs, in both games. */
#ifndef ADDON_AOCBOARD_H
#define ADDON_AOCBOARD_H

#include "gfx/DrawParameterOwner.h"
#include "ui/UiSpriteState.h"

struct AocBoardWork {
    /* 0x000 */ DrawParameterOwner owner;
    /* 0x440 */ UiSpriteState sprites[3];

    /* Publish whether the opening animation has finished. */
    void setTransitionReady(bool ready)
    {
        if (ready)
            owner.control.flags |= 0x20u;
        else
            owner.control.flags &= ~0x20u;
    }
};

typedef char AocBoardWorkOffsets[
    offsetof(AocBoardWork, owner.unk418) == 0x418 &&
    offsetof(AocBoardWork, sprites) == 0x440 &&
    sizeof(UiSpriteState) == 0x8C ? 1 : -1];

#endif
