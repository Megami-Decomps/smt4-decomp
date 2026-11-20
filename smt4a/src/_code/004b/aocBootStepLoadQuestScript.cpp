#include "addon/aocMain.h"
#include "shard/W4_Match3_AocMainA.h"

extern "C" {

s32 scriptHolderUpdateForward(AocScriptHolder *holder);
void scriptHolderFree2(AocScriptHolder *holder);
void aocBootResetAndReleaseBuffers(AocScriptHolder *holder, s32 arg);
s32 gameBlockByte27E98Is1To3(void);
void gameSaveBlockRebuild27E98(void);
void infoWinSetValue(s32 enabled);
void soundPlayCueForContextKind(AocStep *step);

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
        infoWinSetValue(0);
        g_aocMain->flags &= ~0x70;
        aocBootResetAndReleaseBuffers(&g_aocMain->scriptHolder, 1);
        step->substate = 1;
        break;
    case 1:
        if (scriptHolderUpdateForward(&g_aocMain->scriptHolder)) {
            scriptHolderFree2(&g_aocMain->scriptHolder);
            if (gameBlockByte27E98Is1To3()) {
                step->state = 13;
                step->substate = 0;
            } else {
                gameSaveBlockRebuild27E98();
                infoWinSetValue(1);
                soundPlayCueForContextKind(step);
                step->state = 5;
                step->substate = 0;
            }
        }
        break;
    }
}

} /* extern "C" */
