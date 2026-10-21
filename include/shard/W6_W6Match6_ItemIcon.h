#ifndef SHARD_W6_W6MATCH6_ITEMICON_H
#define SHARD_W6_W6MATCH6_ITEMICON_H

#include "common.h"

struct OffsetPosition2D;
extern "C" {
void uiDrawItemCategoryIcon(u32 id, s32 x, s32 y, s32 layer, s32 showEquipped);
void FUN_00493344(const OffsetPosition2D *position, u32 id, s32 x, s32 y,
                  u32 layer, s32 showEquipped);
}

#endif
