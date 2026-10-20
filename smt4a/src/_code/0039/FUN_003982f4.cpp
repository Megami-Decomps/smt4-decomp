#include "map/mapMain.h"

extern "C" {

void FUN_00398464(void);

extern MapMainA *g_mapMain;

void FUN_003982f4(void)
{
    if (g_mapMain != NULL) {
        FUN_00398464();
    }
}

} /* extern "C" */
