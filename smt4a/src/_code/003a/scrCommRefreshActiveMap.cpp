#include "shard/Shard003A.h"

extern "C" {

extern s32 mapMainIsBusy(void);
extern s32 lmapMainIsRunning(void);
extern void FUN_00272f54(void);
extern void lmapMainStateRefreshSetter(void);

/* Script command: runs the map's or the field map's refresh, whichever is active. */
u32 scrCommRefreshActiveMap(void)
{
    if (mapMainIsBusy() != 0) {
        FUN_00272f54();
    } else if (lmapMainIsRunning() != 0) {
        lmapMainStateRefreshSetter();
    }
    return 1;
}

} /* extern "C" */
