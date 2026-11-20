#include "common.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern s32 scrGetCommandFrame(void);
extern s32 uiQuestStateIsIdle(void);
extern s32 uiQuestOpenDetails(u32 id);
extern s32 uiQuestCreate(s32 arg);
extern s32 uiQuestClose(void);
extern s32 eventIsSkipping(void);
extern s32 gameFlagEntryToggleValue(u32 id);
extern s32 buttonHelpSetPreset(s32 preset);

/* Script command: runs the pending step for the id argument, then shows the button help preset 0x90 when the follow-up check holds. */
u32 scrCommButtonHelpPresetStep(void)
{
    u16 id = scrGetArg(0);
    s32 result;

    if (scrGetCommandFrame() == 0) {
        gameFlagEntryToggleValue(id);
        result = eventIsSkipping();
        if (result != 0) {
            return 1;
        }
        uiQuestCreate(result);
        uiQuestOpenDetails(id);
    }
    result = uiQuestStateIsIdle();
    if (result != 0) {
        uiQuestClose();
        buttonHelpSetPreset(0x90);
        return 1;
    }
    return 0;
}

} /* extern "C" */
