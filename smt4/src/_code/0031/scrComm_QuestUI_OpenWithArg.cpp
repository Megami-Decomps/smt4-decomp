/* Script command: opens the quest UI for (quest id, arg) when allowed; returns whether the UI is (now) open. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "script/ScriptArgs.h"

extern "C" {

extern s32 uiQuestStateIsIdle(void);
extern void uiQuestOpenDetails(u16 questId);
extern void uiQuestCreate(s32 arg);
extern void uiQuestClose(void);
extern void buttonHelpSetPreset(s32 id);
extern s32 eventIsSkipping(void);
extern void flagEntrySetValue(u16 questId, u32 arg);

s32 scrComm_QuestUI_OpenWithArg(void)
{
    u16 questId = scrGetArg(0);
    u32 arg = scrGetArg(1);
    s32 result = scrGetCommandFrame();

    if (result == 0) {
        flagEntrySetValue(questId, arg);
        result = eventIsSkipping();
        if (result != 0) {
            return 1;
        }
        uiQuestCreate(result);
        uiQuestOpenDetails(questId);
    }
    result = uiQuestStateIsIdle();
    if (result != 0) {
        uiQuestClose();
        buttonHelpSetPreset(0x90);
        result = 1;
    }
    return result;
}

}
