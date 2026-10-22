#include "addon/aocMain.h"

extern "C" {

extern AocMain *g_aocMain;

s32 questSysUpdateLoad(AocObjC *holder);
void FUN_002895a8(AocObjC *holder);
void FUN_00289608(AocObjC *holder, s32 arg);
s32 gameJumpRequestIsPending(void);
void gameJumpRequestClear(void);
void FUN_0022af9c(s32 enabled);
void buttonHelpSelectByProgress(AocStep *step);

/* Boot step: once no AOC operation is busy, start loading the quest script; when it is loaded, go
 * to state 13 if a game jump is pending, else to state 5. */
void aocBootStepLoadQuestScript(AocStep *step)
{
    switch (step->substate) {
    case 0:
        if (g_aocMain->flags & 4) {
            return;
        }
        if (g_aocMain->flags & 8) {
            return;
        }
        FUN_0022af9c(0);
        g_aocMain->flags &= ~0x70;
        FUN_00289608(&g_aocMain->scriptHolder, 1);
        step->substate = 1;
        break;
    case 1:
        if (questSysUpdateLoad(&g_aocMain->scriptHolder)) {
            FUN_002895a8(&g_aocMain->scriptHolder);
            if (gameJumpRequestIsPending()) {
                step->state = 13;
                step->substate = 0;
            } else {
                gameJumpRequestClear();
                FUN_0022af9c(1);
                buttonHelpSelectByProgress(step);
                step->state = 5;
                step->substate = 0;
            }
        }
        break;
    }
}

} /* extern "C" */
