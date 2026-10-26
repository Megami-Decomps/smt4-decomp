#ifndef SHARD_UISPRITESELECTANIM_H
#define SHARD_UISPRITESELECTANIM_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* `sprite` is any playing sprite object (its resource and playback state are at fixed offsets). */
void uiSpriteSelectAnim(void *sprite, s32 group);

#ifdef __cplusplus
}
#endif

#endif
