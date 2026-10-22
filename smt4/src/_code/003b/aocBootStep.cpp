#include "addon/aocMain.h"

extern "C" {

void FUN_0022af9c(s32 arg);
void buttonHelpSelectByProgress(AocStep *step);
void scrLoaderResetWithFlag(AocObjC *obj, s32 arg);
void scrLoaderRelease(AocObjC *obj);
void gameJumpRequestClear(void);
s32 questSysLoadStep(AocObjC *obj);
s32 gameJumpRequestIsPending(void);

extern AocMain *g_aocMain;

void aocBootStep(AocStep *step)
{
    if (step->substate == 0) {
        FUN_0022af9c(0);
        scrLoaderResetWithFlag(&g_aocMain->scriptHolder, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && questSysLoadStep(&g_aocMain->scriptHolder) != 0) {
        scrLoaderRelease(&g_aocMain->scriptHolder);
        if (gameJumpRequestIsPending() == 0) {
            gameJumpRequestClear();
            FUN_0022af9c(1);
            buttonHelpSelectByProgress(step);
            step->state = 5;
            step->substate = 0;
            return;
        }
        step->state = 0xD;
        step->substate = 0;
    }
}

} /* extern "C" */
