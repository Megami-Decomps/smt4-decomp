/* Releases button help when its last user leaves, including outstanding touch timers. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include "script/scrScriptProcess.h"

extern "C" {
void jobStop(u32 job, s32 mode);
void asdMemFree(void *block);
void ifTouchDecrementTimer(void);
void asdMemFreeSlot(u32 slot);

void campButtonHelpRelease(void)
{
    --g_buttonHelp.references;
    if (g_buttonHelp.references <= 0) {
        ButtonHelpWorkA *work = g_buttonHelp.work;
        asdMemFreeSlot(work->text.directoryText);
        work->text.directoryText = 0;
        if (work->state != 3) {
            for (s32 i = 0; i < 6; ++i) {
                uiSpriteSelectAnim(&work->slotSprites[i], 1);
                if (work->slots[i].kind != 0) {
                    ifTouchDecrementTimer();
                    --work->touchCount;
                }
            }
            if (work->touchCount > 0) {
                for (s32 i = 0; i < work->touchCount; ++i) {
                    ifTouchDecrementTimer();
                }
                work->touchCount = 0;
            }
        }
        scrScriptProcessDestroy(work->scriptProcess);
        jobStop(work->calcProcess, 0);
        asdMemFree(work);
        g_buttonHelp.work = NULL;
        g_buttonHelp.references = 0;
    }
}
}
