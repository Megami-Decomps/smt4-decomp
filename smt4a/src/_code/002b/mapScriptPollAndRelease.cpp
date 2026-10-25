#include "shard/W6_W6Match8_MapMain.h"
#include "gamedata/GameFlags.h"

namespace {
union MapScriptCompletion {
    MapMainState main;
    struct {
        u8 unk00[0x9c];
        s32 completionFlag;
        u8 unka0[0x2c];
        s32 state; // 0xcc
    } control;
};
}

extern "C" {
extern MapMainState* g_mapMain;
s32 FUN_0013def0(u32 channel);
s32 getByteTableAValue();
void byteTableASetValue(s32 enabled);
s32 byteTableAGetValue3();
void byteTableASetValue3(s32 enabled);
s32 FUN_00162ea4();
void FUN_003d54f8(s32 channel, s32 mode);
s32 scrRunOpcodesStub(MapScriptProcess* process);

void messageSlotSet(s32 slot);
void scrScriptProcessDestroy(MapScriptProcess* process);
void asdMemFree(void* allocation);
s32 FUN_002e07f4();

u32 mapScriptPollAndRelease()
{
    MapScriptCompletion* map = reinterpret_cast<MapScriptCompletion*>(g_mapMain);
    switch (map->control.state) {
    case 0:
        if ((FUN_0013def0(0) != 3 || FUN_0013def0(1) != 3) && getByteTableAValue())
            byteTableASetValue(0);
        if (byteTableAGetValue3()) {
            byteTableASetValue3(0);
            byteTableASetValue(0);
        }
        if (getByteTableAValue() && !FUN_00162ea4()) {
            FUN_003d54f8(0, 5);
            FUN_003d54f8(1, 5);
            byteTableASetValue(0);
            map->control.state = 2;
            return 0;
        }
        if (scrRunOpcodesStub(map->main.process) == 2) {
            if (map->control.completionFlag)
                gameFlagSetValue(map->control.completionFlag, 1, 1);
            messageSlotSet(0);
            scrScriptProcessDestroy(map->main.process);
            map->main.process = NULL;
            asdMemFree(map->main.script);
            map->main.script = NULL;
            asdMemFree(map->main.messages);
            map->main.messages = NULL;
            return 1;
        }
        break;
    case 1:
        break;
    case 2:
        if (FUN_002e07f4())
            map->control.state = 0;
        break;
    }
    return 0;
}
} // extern "C"
