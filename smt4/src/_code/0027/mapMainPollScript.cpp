#include "map/mapMain.h"

extern "C" {
extern MapMain *g_mapMain;
s32 FUN_002c2a04(u32 channel);
s32 FUN_002897e0(void);
void FUN_002897d0(s32 enabled);
s32 FUN_002897c0(void);
void FUN_002897b0(s32 enabled);
s32 FUN_002c1d5c(void);
void FUN_002a03d8(s32 channel, s32 mode);
s32 scrRunOpcodesStub(void *process);
void gameFlagSetValue(s32 flag, s32 value, s32 mode);
void messageSlotSet(s32 slot);
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *allocation);
s32 FUN_002896bc(void);

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
            FUN_002a03d8(0, 5);
            FUN_002a03d8(1, 5);
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
        if (FUN_002896bc())
            map->scriptState = 0;
        break;
    }
    return 0;
}
}
