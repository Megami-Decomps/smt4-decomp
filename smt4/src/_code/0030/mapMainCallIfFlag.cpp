#include "map/mapMain.h"

extern "C" {

void FUN_002cc07c(s32 arg);

extern MapMain *g_mapMain;

void mapMainCallIfFlag(s32 arg)
{
    u8 flag = 0;

    if (g_mapMain != NULL) {
        flag = g_mapMain->unk3C;
    }
    if (g_mapMain == NULL || flag == 0) {
        return;
    }
    FUN_002cc07c(arg);
}

} /* extern "C" */
