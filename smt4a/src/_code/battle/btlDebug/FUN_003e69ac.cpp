/* NON_MATCHING: the 64-bit flag clears use per-word and/bic with mvn in retail (built folds the masks with orr+bic) and the cases share one exit instead of duplicating the epilogue */
#include "battle/BtlMainAccess.h"
#include "script/scrScriptProcess.h"
#include "gamedata/GameFlags.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "battle/BtlUiGlobal.h"
#include "script/ScriptEntry.h"


extern "C" {

typedef struct ContinueState {
    /* 0x00 */ u32 state;
    /* 0x04 */ void *resource;
    /* 0x08 */ ScriptProcess *script;
} ContinueState;

typedef struct BtlFlagWord {
    u64 whole;
} BtlFlagWord;


extern BtlFlagWord DAT_005715d0[5];
extern const char DAT_0052801c[];
extern u32 g_btlAux;

s32 dialogIsActive(void);
void dialogClose(s32 arg);
void btlUiPanelStart(BtlUiA *block);
void sysPlaySe(u32 id);
s32 gameFlagIsSet(u32 flag);
void btlUiClearSelectionSlots(BtlUiA *block);
void FUN_003ebc08(BtlMainStateA *state, s32 arg);

void btlPlayMenuConfirmSe(s32 arg);
void btlStageResetAndClearCameraFlag(u32 aux);
void btlUiRefreshMenuPanel(BtlUiA *block);

/* Drives the continue prompt: loads and starts its script, waits for it to finish, then restores the battle flags. */
u32 FUN_003e69ac(ContinueState *continueState)
{
    u32 next;
    switch (continueState->state) {
    case 0:
        asdLoadFileAsyncSimple(DAT_0052801c, reinterpret_cast<u32 *>(&continueState->resource), 0);
        next = 1;
        break;
    case 1:
        if (continueState->resource == NULL) {
            return 0;
        }
        next = 2;
        break;
    case 2: {
        BtlMainStateA *battle = btlGetMainState();
        /* The owner word is the help messages' context here. */
        continueState->script = scrScriptProcessCreate(continueState->resource, reinterpret_cast<void *>(battle->helpMessages.context));
        scriptProcessSetMode(continueState->script, 2);
        battle->stateFlags64.bits = battle->stateFlags64.bits & ~DAT_005715d0[1].whole & ~DAT_005715d0[2].whole;
        if (dialogIsActive() != 0) {
            dialogClose(1);
        }
        btlUiPanelStart(g_btlUiBlock);
        next = 3;
        break;
    }
    case 3:
        scrScriptProcessStartEntry(continueState->script, 0);
        sysPlaySe(0xDF);
        continueState->state = 4;
        return 0;
    case 4:
        if (scrRunOpcodesStub(continueState->script) != 2) {
            return 0;
        }
        if (gameFlagIsSet(0x590) != 0) {
            BtlMainStateA *battle = btlGetMainState();
            if ((DAT_005715d0[0].whole & battle->stateFlags64.bits) == 0) {
                battle->targetCapacity.counts[0] = 8;
                battle->targetCapacity.counts[1] = 8;
                btlUiClearSelectionSlots(g_btlUiBlock);
                FUN_003ebc08(battle, 1);
                battle->stateFlags64.bits = battle->stateFlags64.bits & ~DAT_005715d0[3].whole & ~DAT_005715d0[4].whole;
                gameFlagSetValue(0x590, 0, 1);
                return 0;
            }
        }
        btlPlayMenuConfirmSe(0);
        btlStageResetAndClearCameraFlag(g_btlAux);
        btlUiRefreshMenuPanel(g_btlUiBlock);
        next = 5;
        break;
    case 5:
        return 1;
    default:
        return 0;
    }
    continueState->state = next;
    return 0;
}

} /* extern "C" */
