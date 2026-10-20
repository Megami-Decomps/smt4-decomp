#include "map/mapMain.h"
#include "map/mapDepart.h"

extern "C" {

void FUN_00275f44(u32 job, u32 value);
u32 FUN_00357bc8(u32 a, u32 b);

extern MapMainA *g_mapMain;
extern GameStateA g_gameState;

void FUN_00312db0(u32 value)
{
    MapMainA *main = g_mapMain;
    u32 result = FUN_00357bc8(g_gameState.unk50C, value);

    FUN_00275f44(main->job, result);
}

} /* extern "C" */
