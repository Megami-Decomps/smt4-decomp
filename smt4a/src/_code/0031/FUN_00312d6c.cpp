#include "map/mapMain.h"

extern "C" {

void FUN_002bcafc(void);

extern MapMainA *g_mapMain;

void FUN_00312d6c(void)
{
    if (g_mapMain != NULL) {
        FUN_002bcafc();
    }
}

} /* extern "C" */
