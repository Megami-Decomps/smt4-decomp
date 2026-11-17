#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "gamedata/TableGroup.h"

extern "C" {

void scrScriptProcessStartEntry(u32 job, u32 value);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);

extern MapMainA *g_mapMain;

void mapMainStartEntry(u32 value)
{
    MapMainA *main = g_mapMain;
    u32 result = tableGroupFindEntryIndex(g_gameState.mapCommonScript, reinterpret_cast<const char *>(value));

    scrScriptProcessStartEntry(main->job, result);
}

} /* extern "C" */
