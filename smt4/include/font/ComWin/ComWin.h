#ifndef FONT_COMWIN_COMWIN_H
#define FONT_COMWIN_COMWIN_H

#include "common.h"

extern "C" {
/* `sprite` is any playing sprite object (its resource and playback state are at fixed offsets). */
void spriteStartAnimationByIndex(void *sprite, s32 index);
}

#endif
