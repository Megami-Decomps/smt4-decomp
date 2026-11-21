/* NON_MATCHING: state 8's finished arm stores the done state before loading the -1 result; retail loads the result
   first (moving that arm into a mode function of its own matches, but nothing besides the score supports it). */
#include "battle/BtlMainAccess.h"
#include "script/scrScriptProcess.h"
#include "battle/btlGameOver.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern void *g_btlAux;
extern const char DAT_00528618[]; /* Dead_eyes */
extern const char DAT_005285fc[]; /* battle/gameover/gameover.bf */
extern const char DAT_005285dc[]; /* battle/gameover/gameover.mbm */
void effectRequestByName(void *aux, const char *name);
s32 btlPollVersionedEffectTexture(void *aux);
void *gameDataBlocksGetSaveData(void);
void scrScriptProcessStartEntry(void *process, s32 entry);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
u32 FUN_003e6c14(BtlGameOverA *work);
s32 talkEventStartScript(BtlGameOverA *work);
u32 touchToContinueSplashStep(BtlGameOverA *work);
u32 stepStateBattleStart(BtlGameOverA *work);
void scriptProcessSetMode(void *process, u32 mode);
}

/* unit-local: save-file game-over counter outside the shared save-data prefixes */
struct SaveCounterView {
    /* 0x00000 */ u8 unk00000[0x27E3D];
    /* 0x27E3D */ u8 gameOvers;
};

enum {
    GAMEOVER_STATE_EYES_START = 0,
    GAMEOVER_STATE_EYES_WAIT = 1,
    GAMEOVER_STATE_TIMELINE = 2,
    GAMEOVER_STATE_LOAD = 3,
    GAMEOVER_STATE_MENU = 4,
    GAMEOVER_STATE_CHAINED = 5,
    GAMEOVER_STATE_SCRIPT = 6,
    GAMEOVER_STATE_START = 7,
    GAMEOVER_STATE_RESULT_WAIT = 8,
    GAMEOVER_STATE_RESULT = 9,
    GAMEOVER_STATE_DONE = 10
};

extern "C" {

/* State 5's mode step: enters the battle-start step (retail keeps this tail as its own copy instead of
 * cross-jumping it into state 6's identical phase-99 tail, the sign of an inlined mode function). */
static __inline s32 gameOverStepChained(BtlGameOverA *work)
{
    work->state = GAMEOVER_STATE_START;
    return stepStateBattleStart(work);
}

/* Drives the game-over state machine, returning 0 to keep running or -1 when finished. */
s32 FUN_003e6f50(BtlGameOverA *work)
{
    switch (work->state) {
    case GAMEOVER_STATE_EYES_START:
        effectRequestByName(g_btlAux, DAT_00528618);
        work->state = GAMEOVER_STATE_EYES_WAIT;
        if (btlPollVersionedEffectTexture(g_btlAux) == 0) {
            return 0;
        }
        work->state = GAMEOVER_STATE_TIMELINE;
        work->timing.frameCounter = 0;
        return FUN_003e6c14(work);
    case GAMEOVER_STATE_EYES_WAIT:
        if (btlPollVersionedEffectTexture(g_btlAux) == 0) {
            return 0;
        }
        work->state = GAMEOVER_STATE_TIMELINE;
        work->timing.frameCounter = 0;
        return FUN_003e6c14(work);
    case GAMEOVER_STATE_TIMELINE:
        return FUN_003e6c14(work);
    case GAMEOVER_STATE_LOAD: {
        SaveCounterView *save;

        asdLoadFileAsyncSimple(DAT_005285fc, (u32 *)&work->dataA, 0);
        asdLoadFileAsyncSimple(DAT_005285dc, (u32 *)&work->dataB, 0);
        save = (SaveCounterView *)gameDataBlocksGetSaveData();
        if (save->gameOvers < 255) {
            save->gameOvers++;
        }
        work->state = GAMEOVER_STATE_MENU;
        return talkEventStartScript(work);
    }
    case GAMEOVER_STATE_MENU:
        return talkEventStartScript(work);
    case GAMEOVER_STATE_CHAINED:
        return gameOverStepChained(work);
    case GAMEOVER_STATE_SCRIPT:
        switch (work->step.phase) {
        case 0:
            work->process = scrScriptProcessCreate(work->dataA, work->dataB);
            scriptProcessSetMode(work->process, 1);
            scrScriptProcessStartEntry(work->process, 0);
            scrScriptProcessStartEntry(work->process, 4);
            work->step.phase = 1;
            break;
        case 1:
            if (scrRunOpcodesStub(work->process) == 2) {
                work->step.phase = 99;
            }
            break;
        case 99:
            work->state = GAMEOVER_STATE_START;
            return stepStateBattleStart(work);
        }
        break;
    case GAMEOVER_STATE_START:
        return stepStateBattleStart(work);
    case GAMEOVER_STATE_RESULT_WAIT:
        if (scrRunOpcodesStub(work->process) == 2) {
            campCommonBgRelease();
            campButtonHelpRelease();
            if (btlGetMainState()->gameOver.kind != 1) {
                work->state = GAMEOVER_STATE_RESULT;
                return touchToContinueSplashStep(work);
            }
            work->state = GAMEOVER_STATE_DONE;
            return -1;
        }
        break;
    case GAMEOVER_STATE_RESULT:
        return touchToContinueSplashStep(work);
    case GAMEOVER_STATE_DONE:
        return -1;
    }
    return 0;
}

} /* extern "C" */
