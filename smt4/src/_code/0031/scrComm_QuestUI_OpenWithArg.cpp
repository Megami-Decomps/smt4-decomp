/* NON_MATCHING: early `return 1` only: retail exits with `movne r0,#1; bne pop` (own copy of the result), built jumps to the shared `mov r0,#1` */
/* Script command: opens the quest UI for (quest id, arg) when allowed; returns whether the UI is (now) open. */
#include "common.h"

extern "C" {

extern s32 FUN_00215c9c(void);
extern void FUN_00215cd4(u16 questId);
extern void FUN_00269dc8(s32 arg);
extern void FUN_00296934(void);
extern s32 scrGetArg(s32 index);
extern s32 scrGetCommandFrame(void);
extern void buttonHelpSetPreset(s32 id);
extern s32 FUN_002c1d5c(void);
extern void flagEntrySetValue(u16 questId, u32 arg);

u8 scrComm_QuestUI_OpenWithArg(void)
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
    result = FUN_00215c9c();
    if (result != 0) {
        FUN_00296934();
        buttonHelpSetPreset(0x90);
    }
    return result != 0;
}

}
