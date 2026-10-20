#include "addon/aocMain.h"

extern "C" {

void FUN_0022af9c(s32 arg);
void FUN_0022b064(AocStep *step);
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
        scrLoaderResetWithFlag(&g_aocMain->objC, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && questSysLoadStep(&g_aocMain->objC) != 0) {
        scrLoaderRelease(&g_aocMain->objC);
        if (gameJumpRequestIsPending() == 0) {
            gameJumpRequestClear();
            FUN_0022af9c(1);
            FUN_0022b064(step);
            step->state = 5;
            step->substate = 0;
            return;
        }
        step->state = 0xD;
        step->substate = 0;
    }
}

} /* extern "C" */
