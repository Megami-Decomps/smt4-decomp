#ifndef SHARD_W6_W6MATCH6_ITEMICON_H
#define SHARD_W6_W6MATCH6_ITEMICON_H

#include "common.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct OffsetPosition2D;
extern "C" {
void uiDrawItemCategoryIcon(u32 id, s32 x, s32 y, s32 layer, s32 showEquipped);
void FUN_00493344(const OffsetPosition2D *position, u32 id, s32 x, s32 y,
                  u32 layer, s32 showEquipped);
}

#ifdef __cplusplus
extern "C" {
#endif

void messageSetScriptDisplayMode(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 gxIsStereoscopic3dEnabled(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdModelCommandBlockRelease(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void memCopyWords(const u32 *source, u32 *destination, u32 byteCount);

#ifdef __cplusplus
}
#endif

#endif
