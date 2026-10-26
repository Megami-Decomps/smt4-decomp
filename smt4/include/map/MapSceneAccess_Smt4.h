#pragma once
#include "common.h"

/* MapSceneAccess (declarations migrated from callers). */
struct RotationTargetGroup;
extern "C" {

void lmapSceneSetUnk134(u8 value);

void mapRangeEntriesRun(void);

int MapNaviTable_GetCategoryRecord(u32 unused, u32 index);

void mapSetThreeTargetRotations(RotationTargetGroup *group, f32 x, f32 y, f32 z);

} /* extern "C" */
