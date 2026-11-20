#include "addon/aocMain.h"
struct ScriptHolder;

extern "C" {

void infoWinSetValue(s32 arg);
void soundPlayCueForContextKind(AocStep *step);
void scriptHolderBReset(AocScriptHolder *obj, s32 arg);
void scriptHolderFree1(AocScriptHolder *obj);
void gameSaveBlockRebuild27E98(void);
u32 scriptHolderUpdate(ScriptHolder *holder);
s32 gameBlockByte27E98Is1To3(void);

void aocBootStep(AocStep *step)
{
    if (step->substate == 0) {
        infoWinSetValue(0);
        scriptHolderBReset(&g_aocMain->scriptHolder, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && scriptHolderUpdate((ScriptHolder *)&g_aocMain->scriptHolder) != 0) {
        scriptHolderFree1(&g_aocMain->scriptHolder);
        if (gameBlockByte27E98Is1To3() == 0) {
            gameSaveBlockRebuild27E98();
            infoWinSetValue(1);
            soundPlayCueForContextKind(step);
            step->state = 5;
            step->substate = 0;
            return;
        }
        step->state = 0xD;
        step->substate = 0;
    }
}

} /* extern "C" */
