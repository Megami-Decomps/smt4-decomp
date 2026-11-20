#include "addon/QuestScriptLoader.h"
#include "addon/aocMain.h"

extern "C" {

void infoWinSetShown(s32 arg);
void buttonHelpSelectByProgress(AocStep *step);
void gameJumpRequestClear(void);
s32 gameJumpRequestIsPending(void);

void aocBootStep(AocStep *step)
{
    if (step->substate == 0) {
        infoWinSetShown(0);
        scrLoaderResetWithFlag(&g_aocMain->scriptHolder, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && questSysLoadStep(&g_aocMain->scriptHolder) != 0) {
        scrLoaderRelease(&g_aocMain->scriptHolder);
        if (gameJumpRequestIsPending() == 0) {
            gameJumpRequestClear();
            infoWinSetShown(1);
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
