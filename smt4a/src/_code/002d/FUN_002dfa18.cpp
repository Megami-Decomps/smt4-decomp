#include "map/LmapMainGlobals.h"
#include "gamedata/GameFlags.h"
#include "script/scrScriptProcess.h"
extern "C" {
s32 pairedAvailabilityGetState(s32 display);
u32 getByteTableAValue(void);
void byteTableASetValue(u32 value);
u32 byteTableAGetValue3(void);
void byteTableASetValue3(u32 value);
s32 FUN_00162ea4(void);
void titleSetSlotValueState2(s32 display, s32 mode);

void messageSlotSet(s32 slot);
void asdMemFree(void *memory);
s32 pairedAvailabilityBothReady(void);

u32 FUN_002dfa18(void)
{
    LmapMainStateA *map = g_lmapMainState;
    switch (map->scriptState) {
    case 0:
        if ((pairedAvailabilityGetState(0) != 3 || pairedAvailabilityGetState(1) != 3) && getByteTableAValue())
            byteTableASetValue(0);
        if (byteTableAGetValue3()) {
            byteTableASetValue3(0);
            byteTableASetValue(0);
        }
        if (getByteTableAValue() && !FUN_00162ea4()) {
            titleSetSlotValueState2(0, 5);
            titleSetSlotValueState2(1, 5);
            byteTableASetValue(0);
            map->scriptState = 2;
            return 0;
        }
        if (scrRunOpcodesStub(map->script) == 2) {
            if (map->scriptCompletionFlag)
                gameFlagSetValue(map->scriptCompletionFlag, 1, 1);
            messageSlotSet(0);
            scrScriptProcessDestroy(map->script);
            map->script = NULL;
            asdMemFree(map->scriptCode);
            map->scriptCode = NULL;
            asdMemFree(map->scriptStrings);
            map->scriptStrings = NULL;
            return 1;
        }
        break;
    case 1:
        break;
    case 2:
        if (pairedAvailabilityBothReady())
            map->scriptState = 0;
        break;
    }
    return 0;
}
}
