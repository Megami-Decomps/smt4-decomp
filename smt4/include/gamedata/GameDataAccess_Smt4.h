#pragma once
#include "common.h"

/* GameDataAccess (declarations migrated from callers). */
struct Entry002670cc;
struct MapStateSource;
extern "C" {

u32 gameCountUnits(void);

u32 recordKindRank(u32 id);

void gameDataFlagsClearAndRefresh(u32 mask);

void gameReleaseDataReference(void);

void gameDataFlagsSetBits(u32 flags);

Entry002670cc * contentEntryGetE(u32 index);

void gameSynchronizeMapState(const MapStateSource *source);

} /* extern "C" */
