#include "shard/W5_W5Match2_MapDepartureRecord.h"
extern "C" {
u32 lmapGetSpawnIndex(void);
void mapPlaceSet(s32 first,s32 second,s32 third);
void FUN_00376fb8(s32 value);
u32 FUN_00398004(s32 value);
extern MapDepartureRecord g_lmapSpawns[];
/* Select the current map departure coordinates and clear the pending transition. */
u32 mapApplyDeparturePoint(void) { const MapDepartureRecord *record=&g_lmapSpawns[lmapGetSpawnIndex()]; mapPlaceSet(record->first,record->second,record->third); FUN_00376fb8(0); return FUN_00398004(0); }
}
