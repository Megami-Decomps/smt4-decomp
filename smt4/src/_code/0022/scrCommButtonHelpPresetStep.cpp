#include "common.h"

extern "C" {

extern s32 scrGetArg(void);
extern s32 scrGetCommandFrame(void);
extern s32 uiQuestStateIsIdle(void);
extern s32 FUN_00215cd4(u32 id);
extern s32 FUN_00269dc8(s32 arg);
extern s32 FUN_00296934(void);
extern s32 FUN_002c1d5c(void);
extern s32 FUN_003490b8(u32 id);
extern s32 buttonHelpSetPreset(s32 preset);

/* Script command: runs the pending step for the id argument, then shows the button help preset 0x90 when the follow-up check holds. */
u32 scrCommButtonHelpPresetStep(void)
{
    u16 id = scrGetArg();
    s32 result;

    if (scrGetCommandFrame() == 0) {
        FUN_003490b8(id);
        result = FUN_002c1d5c();
        if (result != 0) {
            return 1;
        }
        FUN_00269dc8(result);
        FUN_00215cd4(id);
    }
    result = uiQuestStateIsIdle();
    if (result != 0) {
        FUN_00296934();
        buttonHelpSetPreset(0x90);
        return 1;
    }
    return 0;
}

} /* extern "C" */
