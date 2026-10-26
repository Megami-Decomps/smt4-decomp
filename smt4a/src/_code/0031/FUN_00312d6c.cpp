#include "map/mapMain.h"

extern "C" {

void mapSelectRoomMusic(void);

extern MapMainA *g_mapMain;

void FUN_00312d6c(void)
{
    if (g_mapMain != NULL) {
        mapSelectRoomMusic();
    }
}

} /* extern "C" */
