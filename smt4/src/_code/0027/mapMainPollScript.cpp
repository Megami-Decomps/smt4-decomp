#include "map/mapMain.h"
#include "gamedata/GameFlags.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern MapMain *g_mapMain;
s32 FUN_002c2a04(u32 channel);
s32 FUN_002897e0(void);
void FUN_002897d0(s32 enabled);
s32 FUN_002897c0(void);
void FUN_002897b0(s32 enabled);
s32 FUN_002c1d5c(void);
void titleSetSlotValueState2(s32 channel, s32 mode);

void messageSlotSet(s32 slot);
void asdMemFree(void *allocation);
s32 screenFadesAllReady(void);

// Poll the map script, coordinating message channels and releasing its data on completion.
u32 mapMainPollScript(void)
{
    MapMain *map = g_mapMain;
    switch (map->scriptState) {
    case 0:
        if ((FUN_002c2a04(0) != 3 || FUN_002c2a04(1) != 3) && FUN_002897e0())
            FUN_002897d0(0);
        if (FUN_002897c0()) {
            FUN_002897b0(0);
            FUN_002897d0(0);
        }
        if (FUN_002897e0() && !FUN_002c1d5c()) {
            titleSetSlotValueState2(0, 5);
            titleSetSlotValueState2(1, 5);
            FUN_002897d0(0);
            map->scriptState = 2;
            return 0;
        }
        if (scrRunOpcodesStub(map->scriptProcess) == 2) {
            if (map->completionFlag)
                gameFlagSetValue(map->completionFlag, 1, 1);
            messageSlotSet(0);
            scrScriptProcessDestroy(map->scriptProcess);
            map->scriptProcess = NULL;
            asdMemFree(map->scriptData);
            map->scriptData = NULL;
            asdMemFree(map->messageData);
            map->messageData = NULL;
            return 1;
        }
        break;
    case 1:
        break;
    case 2:
        if (screenFadesAllReady())
            map->scriptState = 0;
        break;
    }
    return 0;
}
}
