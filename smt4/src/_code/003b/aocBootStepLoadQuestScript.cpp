#include "addon/QuestScriptLoader.h"
#include "addon/aocMain.h"

extern "C" {

s32 gameJumpRequestIsPending(void);
void gameJumpRequestClear(void);
void infoWinSetShown(s32 enabled);
void buttonHelpSelectByProgress(AocStep *step);

/* Boot step: once no AOC operation is busy, start loading the quest script; when it is loaded, go
 * to state 13 if a game jump is pending, else to state 5. */
void aocBootStepLoadQuestScript(AocStep *step)
{
    switch (step->substate) {
    case 0:
        if (aocMainIsBusy(g_aocMain)) {
            return;
        }
        infoWinSetShown(0);
        aocMainClearResult(g_aocMain);
        aocScriptHolderReset(&g_aocMain->scriptHolder, 1);
        step->substate = 1;
        break;
    case 1:
        if (questSysUpdateLoad(&g_aocMain->scriptHolder)) {
            aocScriptHolderRelease(&g_aocMain->scriptHolder);
            if (gameJumpRequestIsPending()) {
                step->state = 13;
                step->substate = 0;
            } else {
                gameJumpRequestClear();
                infoWinSetShown(1);
                buttonHelpSelectByProgress(step);
                step->state = 5;
                step->substate = 0;
            }
        }
        break;
    }
}

} /* extern "C" */
