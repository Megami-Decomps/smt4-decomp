#ifndef PLAYER_MODEL_PLAYERMODEL_H
#define PLAYER_MODEL_PLAYERMODEL_H

#include "common.h"

enum PlayerOutfitPart {
    PLAYER_OUTFIT_HEAD = 0,
    PLAYER_OUTFIT_BODY = 1,
    PLAYER_OUTFIT_LEGS = 2,
};

enum { STATUS_MODEL_REFRESH = 7 };

extern "C" {
void playerLoadOutfitPartModel(void *owner, u32 part, u32 flags);
void FUN_0040b27c(void *owner, u32 part, u16 equipment, u32 flags);
} /* extern "C" */

#endif
