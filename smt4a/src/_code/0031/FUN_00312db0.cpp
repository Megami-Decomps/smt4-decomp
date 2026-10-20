#include "map/mapMain.h"
#include "map/mapDepart.h"

extern "C" {

void scrScriptProcessStartEntry(u32 job, u32 value);
u32 tableGroupFindEntryIndex(u32 a, u32 b);

extern MapMainA *g_mapMain;
extern GameStateA g_gameState;

void FUN_00312db0(u32 value)
{
    MapMainA *main = g_mapMain;
    u32 result = tableGroupFindEntryIndex(g_gameState.unk50C, value);

    scrScriptProcessStartEntry(main->job, result);
}

} /* extern "C" */
