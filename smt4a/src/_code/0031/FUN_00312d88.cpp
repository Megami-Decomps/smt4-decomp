#include "map/mapMain.h"

extern "C" {

s32 FUN_00224880(u32 job);

extern MapMainA *g_mapMain;

bool FUN_00312d88(void)
{
    return FUN_00224880(g_mapMain->job) == 2;
}

} /* extern "C" */
