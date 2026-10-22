/* Releases button help when its last user leaves, including outstanding touch timers. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
void jobStop(u32 job, s32 mode);
void uiSpriteSelectAnim(ButtonHelpUnit *unit, s32 animation);
void asdMemFree(void *block);
void scrScriptProcessDestroy(u32 process);
void ifTouchDecrementTimer(void);
void asdMemFreeSlot(u32 slot);

void campButtonHelpRelease(void)
{
    --g_buttonHelp.references;
    if (g_buttonHelp.references <= 0) {
        ButtonHelpWorkA *work = g_buttonHelp.work;
        asdMemFreeSlot(work->unk678);
        work->unk678 = 0;
        if (work->state != 3) {
            for (s32 i = 0; i < 6; ++i) {
                uiSpriteSelectAnim(&work->units[i], 1);
                if (work->kinds[i].kind != 0) {
                    ifTouchDecrementTimer();
                    --work->count;
                }
            }
            if (work->count > 0) {
                for (s32 i = 0; i < work->count; ++i) {
                    ifTouchDecrementTimer();
                }
                work->count = 0;
            }
        }
        scrScriptProcessDestroy(work->process);
        jobStop(work->job, 0);
        asdMemFree(work);
        g_buttonHelp.work = NULL;
        g_buttonHelp.references = 0;
    }
}
}
