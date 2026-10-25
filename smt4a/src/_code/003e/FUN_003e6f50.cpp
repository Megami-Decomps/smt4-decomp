/* NON_MATCHING: script-mode setter and phase switch match; state-7 tail merging and result-state store scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlGameOver.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern void *g_btlAux;
extern const char DAT_00528618[]; /* Dead_eyes */
extern const char DAT_005285fc[]; /* battle/gameover/gameover.bf */
extern const char DAT_005285dc[]; /* battle/gameover/gameover.mbm */
void FUN_004f7b84(void *aux, const char *name);
s32 FUN_004f6d34(void *aux);
void *gameDataBlocksGetSaveData(void);
void *FUN_00275bc8(void *process, void *data);
void scrScriptProcessStartEntry(void *process, s32 entry);
s32 scrRunOpcodesStub(void *process);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
u32 FUN_003e6c14(BtlGameOverA *work);
s32 talkEventStartScript(BtlGameOverA *work);
u32 FUN_003e71a8(BtlGameOverA *work);
u32 stepStateBattleStart(BtlGameOverA *work);
void scriptProcessSetMode(void *process, u32 mode);
}

/* The save counter is outside the shared save-data prefixes. */
struct SaveCounterView {
    u8 unk00000[0x27E3D];
    u8 gameOvers;
};

#define GAMEOVER_STATE_EYES_START 0
#define GAMEOVER_STATE_EYES_WAIT 1
#define GAMEOVER_STATE_TIMELINE 2
#define GAMEOVER_STATE_LOAD 3
#define GAMEOVER_STATE_MENU 4
#define GAMEOVER_STATE_CHAINED 5
#define GAMEOVER_STATE_SCRIPT 6
#define GAMEOVER_STATE_START 7
#define GAMEOVER_STATE_RESULT_WAIT 8
#define GAMEOVER_STATE_RESULT 9
#define GAMEOVER_STATE_DONE 10

extern "C" {

/* Game-over state machine: plays the eye animation and timeline, loads the screen's files, runs
 * the script and hands over to the result states. Returns the next state's result: 0 to keep
 * running, -1 when finished. */
s32 FUN_003e6f50(BtlGameOverA *work)
{
    switch (work->state) {
    case GAMEOVER_STATE_EYES_START:
        FUN_004f7b84(g_btlAux, DAT_00528618);
        work->state = GAMEOVER_STATE_EYES_WAIT;
        if (FUN_004f6d34(g_btlAux) != 0) {
            work->state = GAMEOVER_STATE_TIMELINE;
            work->timing.frameCounter = 0;
            return FUN_003e6c14(work);
        }
        break;
    case GAMEOVER_STATE_EYES_WAIT:
        if (FUN_004f6d34(g_btlAux) != 0) {
            work->state = GAMEOVER_STATE_TIMELINE;
            work->timing.frameCounter = 0;
            return FUN_003e6c14(work);
        }
        break;
    case GAMEOVER_STATE_TIMELINE:
        return FUN_003e6c14(work);
    case GAMEOVER_STATE_LOAD: {
        SaveCounterView *save;

        asdLoadFileAsyncSimple(DAT_005285fc, reinterpret_cast<u32 *>(&work->dataA), 0);
        asdLoadFileAsyncSimple(DAT_005285dc, reinterpret_cast<u32 *>(&work->dataB), 0);
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
        work->state = GAMEOVER_STATE_START;
        return stepStateBattleStart(work);
    case GAMEOVER_STATE_SCRIPT:
        switch (work->step.phase) {
        case 0:
            work->process = FUN_00275bc8(work->dataA, work->dataB);
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
                return FUN_003e71a8(work);
            }
            work->state = GAMEOVER_STATE_DONE;
            return -1;
        }
        break;
    case GAMEOVER_STATE_RESULT:
        return FUN_003e71a8(work);
    case GAMEOVER_STATE_DONE:
        return -1;
    }
    return 0;
}

} /* extern "C" */
