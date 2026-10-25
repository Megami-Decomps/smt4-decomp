#ifndef W6_W6MATCH3_MAP_MARKER_MODELS_H
#define W6_W6MATCH3_MAP_MARKER_MODELS_H

#include "common.h"
#include "gamedata/InheritedAffinities.h"

struct MapMarkerModels;
extern "C" void lmapCreateEnemyMarkerModels(MapMarkerModels* models);

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00394edc(const AffinitySourcePair *pair, u16 *affinities);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 systemKeyboardReadUtf8(u32 unused, char *output, const u16 *hint, u32 capacity, s32 password, s32 filter, u32 requestOption);

#ifdef __cplusplus
}
#endif

#endif
