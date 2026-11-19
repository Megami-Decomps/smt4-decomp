#pragma once
#include "common.h"

struct BattleVector3;

/* MapSceneAccess (declarations migrated from callers). */
extern "C" {

void MapNaviTable_GetAreaCount(void);
void mapRegisterPendingSpawnMarker(BattleVector3 position);

} /* extern "C" */
