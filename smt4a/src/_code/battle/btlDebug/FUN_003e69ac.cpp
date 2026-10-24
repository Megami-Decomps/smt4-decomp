/* NON_MATCHING: the 64-bit flag clears use per-word and/bic with mvn in retail (built folds the masks with orr+bic), the cases share one exit instead of duplicating the epilogue, and the stack setup assigns script mode via a separate register */
#include "script/scrScriptProcess.h"

extern "C" {

typedef struct ContinueState {
    /* 0x00 */ u32 state;
    /* 0x04 */ void *resource;
    /* 0x08 */ ScriptRunState *script;
} ContinueState;

typedef struct BtlFlagWord {
    u64 whole;
} BtlFlagWord;

typedef struct BtlContinueView {
    /* 0x0000 */ u8 unk0000[0x2268];
    /* 0x2268 */ u32 entry;
    /* 0x226C */ u8 unk226C[0x2334];
    /* 0x45A0 */ BtlFlagWord flags;
    /* 0x45A8 */ u8 unk45A8[0x6C8];
    /* 0x4C70 */ u16 cursorA;
    /* 0x4C72 */ u16 cursorB;
} BtlContinueView;

extern BtlFlagWord DAT_005715d0[5];
extern const char DAT_0052801c[];
extern u32 g_btlUiBlock;
extern u32 g_btlAux;

BtlContinueView *btlGetMainState(void);
s32 asdLoadFileAsyncSimple(const char *path, void **slot, s32 arg);
ScriptRunState *FUN_00275bc8(void *resource, u32 entry);
s32 dialogIsActive(void);
void dialogClose(s32 arg);
void btlUiPanelStart(u32 block);
void scrScriptProcessStartEntry(ScriptRunState *script, s32 entry);
void sysPlaySe(u32 id);
s32 scrRunOpcodesStub(ScriptRunState *script);
s32 gameFlagIsSet(u32 flag);
void btlUiClearSelectionSlots(u32 block);
void FUN_003ebc08(BtlContinueView *state, s32 arg);
void gameFlagSetValue(u32 flag, s32 value, s32 arg);
void FUN_003756c8(s32 arg);
void FUN_004f8f08(u32 aux);
void FUN_004ab734(u32 block);

/* Drives the continue prompt: loads and starts its script, waits for it to finish, then restores the battle flags. */
u32 FUN_003e69ac(ContinueState *continueState)
{
    u32 next;
    switch (continueState->state) {
    case 0:
        asdLoadFileAsyncSimple(DAT_0052801c, &continueState->resource, 0);
        next = 1;
        break;
    case 1:
        if (continueState->resource == NULL) {
            return 0;
        }
        next = 2;
        break;
    case 2: {
        BtlContinueView *battle = btlGetMainState();
        continueState->script = FUN_00275bc8(continueState->resource, battle->entry);
        continueState->script->mode = 2;
        battle->flags.whole = battle->flags.whole & ~DAT_005715d0[1].whole & ~DAT_005715d0[2].whole;
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
            BtlContinueView *battle = btlGetMainState();
            if ((DAT_005715d0[0].whole & battle->flags.whole) == 0) {
                battle->cursorA = 8;
                battle->cursorB = 8;
                btlUiClearSelectionSlots(g_btlUiBlock);
                FUN_003ebc08(battle, 1);
                battle->flags.whole = battle->flags.whole & ~DAT_005715d0[3].whole & ~DAT_005715d0[4].whole;
                gameFlagSetValue(0x590, 0, 1);
                return 0;
            }
        }
        FUN_003756c8(0);
        FUN_004f8f08(g_btlAux);
        FUN_004ab734(g_btlUiBlock);
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
