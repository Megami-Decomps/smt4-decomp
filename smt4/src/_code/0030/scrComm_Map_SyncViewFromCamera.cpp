#include "common.h"

extern "C" {

int FUN_00273c54(void);
int FUN_00273d34(void);
int FUN_00273f5c(void);
int battlePrepareEncounter(void);
int mapClearPendingEntries(void);
int naviClearObjectBlock(void);
int lmapMainUpdateObj(void);
extern int lmapMainIsRunning(void);
extern int mapMainIsBusy(void);

u32 scrComm_Map_SyncViewFromCamera(void)
{
    FUN_00273f5c();
    mapClearPendingEntries();
    if (mapMainIsBusy() != 0) {
        naviClearObjectBlock();
        mapClearPendingEntries();
        FUN_00273d34();
        FUN_00273c54();
        battlePrepareEncounter();
    } else {
        if (lmapMainIsRunning() != 0) {
            naviClearObjectBlock();
            mapClearPendingEntries();
            lmapMainUpdateObj();
        }
    }
    return 1;
}

} /* extern "C" */
