#ifndef UI_UISPRITESEQUENCE_H
#define UI_UISPRITESEQUENCE_H

#include "ui/UiSpriteState.h"

/* The first frame of sequence `sequence`: each sequence ends with an image of -1. */
static inline UiSpriteFrameKey *uiSpriteFindFrameSequence(UiResourceParameters *resources, s16 sequence)
{
    s32 group = 0;
    for (u32 index = 0; index < resources->frameKeyBytes / sizeof(UiSpriteFrameKey); ++index) {
        if (group == sequence)
            return &resources->frameKeys[index];
        if (resources->frameKeys[index].image == -1)
            ++group;
    }
    return NULL;
}

#endif
