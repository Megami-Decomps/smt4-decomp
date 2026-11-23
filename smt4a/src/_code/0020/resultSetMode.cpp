#include "shard/X14_EngineUnits.h"
#include "shard/Shard0031.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "gamedata/SaveSlotTable.h"

struct ScriptProcess;
extern "C" {
s32 ifTouchRegionRemove(void);
void sysPlaySe(u16 sound);
void buttonHelpTransitionPresetFlags(s32 mode);
void buttonHelpSetText(s32 target, u32 color);
void scrScriptProcessStartEntry(ScriptProcess *script, s32 entry);
void statusDownSwitchTab(u8 value);
void gameGlobalsSetOverlayActive(u8 value);
void gameGlobalsSetSceneState(u8 value);
void gameGlobalsReleaseReference(void);
void FUN_0033449c(u8 value);
void FUN_00371f18(void);
void buttonHelpSetTextVisible(s32 mode);
void FUN_003a7b2c(void);
u32 gameDataBlocksGetWord(void);
s32 aocDataBlockHasEntries(void);

void resultSetMode(ResultWorkA *result, s32 state)
{
    result->previousState = result->state;
    result->state = state;
    result->step = 0;
    result->progress = 0;
    result->timer = 0;
    for (s32 region = 0; region < result->touchRegionCount; ++region)
        ifTouchRegionRemove();
    result->touchRegionCount = 0;

    s32 sound = -1;
    switch (result->state) {
    case 1: sound = 100; break;
    case 11: sound = 0xa0; break;
    case 12: sound = 0x67; break;
    case 14: sound = 0x68; break;
    case 15: sound = 0xe1; break;
    case 16: sound = 0x6a; break;
    case 17: sound = 0x6c; break;
    case 18: sound = 0xe3; break;
    case 19: sound = 0x66; break;
    case 20: sound = 0x67; break;
    }
    if (sound >= 0) {
        buttonHelpSetText(0, 0xf4f4f4ff);
        sysPlaySe(static_cast<u16>(sound));
    }
    if (result->state == 23) {
        if (aocDataBlockHasEntries()) {
            FUN_00371f18();
            FUN_003a7b2c();
            gameGlobalsSetSceneState(0);
            statusDownSwitchTab(0);
            FUN_0023b45c(0);
            gameGlobalsSetOverlayActive(0);
            FUN_0033449c(0);
            gameGlobalsReleaseReference();
            u32 required = gameDataBlocksGetWord();
            if (required != 0 && required <= *reinterpret_cast<const u32 *>(gameGetSlotTable())) {
                result->state = 22;
                sysPlaySe(0x92);
                scrScriptProcessStartEntry(result->process, 5);
            } else {
                buttonHelpSetTextVisible(0);
                buttonHelpTransitionPresetFlags(3);
            }
        } else {
            result->state = 24;
        }
    }
}
}
