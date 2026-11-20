#include "common.h"

extern "C" {

int mapUpdatePendingAvailabilityFlags(void);
int mapUpdateLocationAvailability(void);
int clearFlags310To31F(void);
int battlePrepareEncounter(void);
int mapClearPendingEntries(void);
int naviClearObjectBlock(void);
int lmapMainUpdateObj(void);
extern int lmapMainIsRunning(void);
extern int mapMainIsBusy(void);

u32 scrComm_Map_SyncViewFromCamera(void)
{
    clearFlags310To31F();
    mapClearPendingEntries();
    if (mapMainIsBusy() != 0) {
        naviClearObjectBlock();
        mapClearPendingEntries();
        mapUpdateLocationAvailability();
        mapUpdatePendingAvailabilityFlags();
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
