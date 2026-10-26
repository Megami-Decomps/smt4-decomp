/* NON_MATCHING: readable rebuild of the save/load prompt state machine (the draft's call arguments were kept as it read them); armcc here shares the state-store tail and the script-process pointer reload differently. */
#include "common.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "gamedata/GameDataAccess_Smt4a.h"

/* The script process the prompt runs. */
struct LazyScript {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 mode;
};

/* The prompt's state block. */
struct PromptState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
};

extern "C" {
extern u8 g_saveLoadThread;
extern s8 DAT_0057f6c9;
extern u8 DAT_0057f6cb;
extern s8 DAT_0057f6cc;
extern PromptState *DAT_0057f6d0;
extern LazyScript *g_lazyScriptState;
extern s32 DAT_005e210c;
extern LazyScript *DAT_005e2110;

void gameDataFlagsClearBits(s32 bits);
void gameDataBlocksReleaseHold(s32 hold);
void sysPlaySe(s32 id);
s32 scrRunOpcodesStub(LazyScript *script);
void gameDataBlocksAddFlags(s32 flags);
void FUN_00275bc8(void);
void scrScriptProcessStartEntry(LazyScript *script, s32 entry);
void campCommonBgAcquire(void);
void FUN_0031ed60(PromptState *state, s32 flag);
void obj04Finish(void);
s32 FUN_0035d7bc(PromptState *state);
s32 FUN_0035d83c(PromptState *state);
void FUN_003b61ec(void);
s32 messageMainIsWindowActive(void);
s32 FUN_002e0b5c(u32 a, u32 b);

/* Releases the held game-data blocks the prompt took. */
static void releasePromptHold(void)
{
    gameDataBlocksReleaseHold(1);
    gameDataFlagsClearBits(1);
    gameDataBlocksMaskClearBits(1);
}

/* Steps the prompt: asks which way to go, shows the intro script, runs the file select and then
 * the closing script. Returns 1 when it is finished. */
u32 FUN_002a60f8(u32 unused, s32 enabled)
{
    PromptState *prompt = DAT_0057f6d0;
    if (g_lazyScriptState != NULL)
        enabled = DAT_005e210c;
    if (g_lazyScriptState == NULL || enabled == 0)
        return 0;
    if (DAT_005e2110 == NULL) {
        LazyScript *script = g_lazyScriptState;
        FUN_00275bc8();
        DAT_005e2110 = script;
        script->mode = 2;
    }
    s32 next;
    switch (prompt->state) {
    case 0: {
        s32 choice = FUN_002e0b5c(6, 0);
        if (choice == 0) {
            g_saveLoadThread = 0;
            scrScriptProcessStartEntry(DAT_005e2110, 4);
            next = 9;
        } else if (choice == 3) {
            g_saveLoadThread = 1;
            scrScriptProcessStartEntry(DAT_005e2110, 0);
            next = 4;
        } else if (choice == 4) {
            g_saveLoadThread = 1;
            scrScriptProcessStartEntry(DAT_005e2110, 3);
            next = 4;
        } else {
            next = 8;
            g_saveLoadThread = 1;
        }
        break;
    }
    case 4:
        releasePromptHold();
        sysPlaySe(0xE8);
        if (DAT_0057f6cc == 0) {
            campCommonBgAcquire();
            FUN_003b61ec();
            DAT_0057f6cc = 1;
        }
        if (scrRunOpcodesStub(DAT_005e2110) != 2)
            return 0;
        gameDataAddHomeButtonHold(1);
        gameDataBlocksAddFlags(1);
        FUN_00333574(1);
        scrScriptProcessStartEntry(DAT_005e2110, 1);
        next = 5;
        break;
    case 5:
        sysPlaySe(0xE9);
        scrRunOpcodesStub(DAT_005e2110);
        FUN_0031ed60(prompt, 1);
        next = 6;
        break;
    case 6:
        scrRunOpcodesStub(DAT_005e2110);
        if (messageMainIsWindowActive() != 0)
            DAT_0057f6cb = 1;
        if (FUN_0035d83c(prompt) == 0)
            return 0;
        FUN_0035d7bc(prompt);
        sysPlaySe(0xE8);
        releasePromptHold();
        obj04Finish();
        DAT_0057f6cb = 0;
        if (DAT_0057f6c9 != 0) {
            scrScriptProcessStartEntry(DAT_005e2110, 2);
            next = 7;
        } else {
            scrScriptProcessStartEntry(DAT_005e2110, 5);
            next = 9;
        }
        break;
    case 7:
        if (scrRunOpcodesStub(DAT_005e2110) != 2)
            return 0;
        return 1;
    case 8:
        return 1;
    case 9:
        releasePromptHold();
        if (scrRunOpcodesStub(DAT_005e2110) != 2)
            return 0;
        return 1;
    case 12:
        prompt->state = 6;
        return 0;
    default:
        return 0;
    }
    prompt->state = next;
    return 0;
}

} /* extern "C" */
