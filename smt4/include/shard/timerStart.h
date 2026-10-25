#ifndef SHARD_TIMERSTART_H
#define SHARD_TIMERSTART_H

#include "common.h"
#include "ui/UiSpriteKeyframes.h"

#ifdef __cplusplus
extern "C" {
#endif

void timerStart(UiSpriteKeyframeState *sprite, u32 frame, u32 alternate);

#ifdef __cplusplus
}
#endif

#endif
