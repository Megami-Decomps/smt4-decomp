/* Script command: opens the quest UI for (quest id, arg) when allowed; returns whether the UI is (now) open. */
#include "common.h"
#include "util/CalleeContracts.h"
#include "script/ScriptArgs.h"

extern "C" {

extern s32 uiQuestStateIsIdle(void);
extern void FUN_00215cd4(u16 questId);
extern void FUN_00269dc8(s32 arg);
extern void FUN_00296934(void);
extern void buttonHelpSetPreset(s32 id);
extern s32 FUN_002c1d5c(void);
extern void flagEntrySetValue(u16 questId, u32 arg);

s32 scrComm_QuestUI_OpenWithArg(void)
{
    u16 questId = scrGetArg(0);
    u32 arg = scrGetArg(1);
    s32 result = scrGetCommandFrame();

    if (result == 0) {
        flagEntrySetValue(questId, arg);
        result = FUN_002c1d5c();
        if (result != 0) {
            return 1;
        }
        FUN_00269dc8(result);
        FUN_00215cd4(questId);
    }
    result = uiQuestStateIsIdle();
    if (result != 0) {
        FUN_00296934();
        buttonHelpSetPreset(0x90);
        result = 1;
    }
    return result;
}

}
