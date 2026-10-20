#include "map/mapMain.h"

extern "C" {

void settings5BSetValue(s32 arg);

extern MapMainA *g_mapMain;

void FUN_003a2ecc(s32 arg)
{
    u8 flag = 0;

    if (g_mapMain != NULL) {
        flag = g_mapMain->unk40;
    }
    if (g_mapMain == NULL || flag == 0) {
        return;
    }
    settings5BSetValue(arg);
}

} /* extern "C" */
