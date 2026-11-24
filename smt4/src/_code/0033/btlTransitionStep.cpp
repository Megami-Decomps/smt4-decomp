#include "battle/BtlGameOverTransition.h"
#include "battle/BtlMainAccess.h"
#include "script/scrScriptProcess.h"
#include "gamedata/GameDataAccess.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern void *g_btlAux;
extern const char DAT_00400a08[];
extern const char DAT_004009cc[];
extern const char DAT_004009e8[];
extern const char DAT_0040098c[];
extern const char DAT_004009ac[];
void effectRequestByName(void *context, const char *name);
s32 btlPollVersionedEffectTexture(void *context);
s32 jobIsValid(u32 job);
void uiFadeRelease(void);
void buttonHelpRelease(void);
} /* extern "C" */

/* Tests the script in each phase that can run it and starts the splash when required. */
static s32 transitionFinishScript(BtlGameOver *work)
{
    s32 result;
    if (scrRunOpcodesStub(work->process) == 2) {
        uiFadeRelease();
        buttonHelpRelease();
        BtlMainState *battle = btlGetMainState();
        if ((work->flags & 1) == 0 && battle->completion.complete != 1) {
            work->state = 8;
            result = FUN_0023ed64(work);
        } else {
            battle->completion.complete = 1;
            result = -1;
            work->state = 9;
        }
    } else {
        result = 0;
    }
    return result;
}

/* Enters the timed phase from either texture-ready path and runs its first tick. */
static s32 transitionEnterTimedPhase(BtlGameOver *selector)
{
    selector->state = 2;
    return FUN_003357c0(selector);
}

/* Loads and runs the battle transition scripts, then hands off or reports completion. */
extern "C" s32 btlTransitionStep(BtlGameOver *selector)
{
    switch (selector->state) {
    case 0:
        effectRequestByName(g_btlAux, DAT_00400a08);
        selector->state = 1;
        if (!btlPollVersionedEffectTexture(g_btlAux))
            return 0;
        selector->frameCounter = 0;
        return transitionEnterTimedPhase(selector);
    case 1:
        if (!btlPollVersionedEffectTexture(g_btlAux))
            return 0;
        selector->frameCounter = 0;
        return transitionEnterTimedPhase(selector);
    case 2:
        return FUN_003357c0(selector);
    case 3: {
        asdLoadFileAsyncSimple(!(selector->flags & 1) ? DAT_004009cc : DAT_004009e8,
                               &selector->scriptFileAddress, 0);
        asdLoadFileAsyncSimple(!(selector->flags & 1) ? DAT_0040098c : DAT_004009ac,
                               &selector->messageFileAddress, 0);
        GameSaveBody *save = (GameSaveBody *)gameDataBlocksGetSaveData();
        if (save->gameOverContinueEnabled < 255)
            ++save->gameOverContinueEnabled;
        selector->state = 4;
        return FUN_0023f194(selector);
    }
    case 4:
        return FUN_0023f194(selector);
    case 5:
        if (jobIsValid(selector->followupJob))
            return 0;
        selector->state = 6;
        return FUN_0023f074(selector);
    case 6:
        return FUN_0023f074(selector);
    case 7:
        return transitionFinishScript(selector);
    case 8:
        return FUN_0023ed64(selector);
    case 9:
        return -1;
    default:
        return 0;
    }
}
