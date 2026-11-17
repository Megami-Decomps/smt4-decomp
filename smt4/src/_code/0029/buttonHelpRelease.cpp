#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern void asdMemFreeSlot(u32 slot);
extern void ifTouchDecrementTimer(void);
extern void jobStop(u32 job, s32 arg);
extern void asdMemFree(void *work);

/* Drops a reference to the button help; on the last one releases its buttons, script process and job and frees the work. */
void buttonHelpRelease(void)
{
    ButtonHelpWork *work;
    s32 i;

    g_buttonHelp.references--;
    if (g_buttonHelp.references <= 0) {
        work = g_buttonHelp.work;
        asdMemFreeSlot(work->text.directoryText);
        work->text.directoryText = 0;
        if (work->state != 3) {
            for (i = 0; i < 6; i++) {
                spriteStartAnimationByIndex(&work->slotSprites[i], 1);
                if (work->slots[i].kind != 0) {
                    ifTouchDecrementTimer();
                }
            }
        }
        scrScriptProcessDestroy(work->scriptProcess);
        jobStop(work->calcProcess, 0);
        asdMemFree(work);
        g_buttonHelp.work = NULL;
        g_buttonHelp.references = 0;
    }
}

} /* extern "C" */
