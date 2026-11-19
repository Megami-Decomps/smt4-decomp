#pragma once
#include "common.h"

/* Map scene and navigation accessors. */
extern "C" {

void MapDepart_InitState(void *state, s32 save);

void MapNaviTable_GetCategoryCount(void);

u8 lmapGetSpawnIndex(void);

u32 lmapSceneGetUnk0(void);

void lmapSceneSetUnk134(u8 value);

void naviMainQueueRequest(u32 id);

} /* extern "C" */
