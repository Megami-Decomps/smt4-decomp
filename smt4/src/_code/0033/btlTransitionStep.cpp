/* NON_MATCHING: mode 7 is its own function (retail returns its result through a copy, no tail call); remaining: the texture-wait cases store state before step (retail step first), the file-name selects predicate in the other order, and the mode-7 not-ready return is laid out at the shared exit. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

struct BattleTransitionSelector {
    /* 0x00 */ s32 state;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u32 step;
    /* 0x0C */ u32 firstFile;
    /* 0x10 */ void *scriptProcess;
    /* 0x14 */ u32 secondFile;
    /* 0x18 */ u32 job;
};
struct BattleTransitionSave {
    /* 0x00000 */ u8 unk00000[0x24b29];
    /* 0x24B29 */ u8 count;
};
extern "C" {
extern void *g_btlAux;
extern const char DAT_00400a08[];
extern const char DAT_004009cc[];
extern const char DAT_004009e8[];
extern const char DAT_0040098c[];
extern const char DAT_004009ac[];
void effectRequestByName(void *context, const char *name);
s32 btlPollVersionedEffectTexture(void *context);
s32 FUN_003357c0(BattleTransitionSelector *selector);
BattleTransitionSave *gameDataBlocksGetSaveData();
s32 FUN_0023f194(BattleTransitionSelector *selector);
s32 jobIsValid(u32 job);
s32 FUN_0023f074(BattleTransitionSelector *selector);
s32 scrRunOpcodesStub(void *process);
void uiFadeRelease();
void buttonHelpRelease();
s32 FUN_0023ed64(BattleTransitionSelector *selector);
}

/* Mode 7: waits for the transition script, releases the fade and button help, then finishes the
 * battle (state 9) or starts the hand-off (state 8). Retail inlines this as its own body: the
 * hand-off call is not a tail call and its result is copied out through r1 to a shared exit. */
static s32 transitionFinishScript(BattleTransitionSelector *selector)
{
    if (scrRunOpcodesStub(selector->scriptProcess) != 2) return 0;
    uiFadeRelease();
    buttonHelpRelease();
    BtlMainState *battle = btlGetMainState();
    if ((selector->flags & 1) || battle->completion.complete == 1) {
        battle->completion.complete = 1;
        selector->state = 9;
        return -1;
    }
    selector->state = 8;
    return FUN_0023ed64(selector);
}

/* Load and run the battle transition scripts, then hand off or report completion. */
extern "C" s32 btlTransitionStep(BattleTransitionSelector *selector)
{
    switch (selector->state) {
    case 0:
        effectRequestByName(g_btlAux, DAT_00400a08);
        selector->state = 1;
        if (!btlPollVersionedEffectTexture(g_btlAux)) return 0;
        selector->step = 0;
        selector->state = 2;
        return FUN_003357c0(selector);
    case 1:
        if (!btlPollVersionedEffectTexture(g_btlAux)) return 0;
        selector->step = 0;
        selector->state = 2;
        return FUN_003357c0(selector);
    case 2:
        return FUN_003357c0(selector);
    case 3: {
        asdLoadFileAsyncSimple((selector->flags & 1) ? DAT_004009e8 : DAT_004009cc,
                               &selector->firstFile, 0);
        asdLoadFileAsyncSimple((selector->flags & 1) ? DAT_004009ac : DAT_0040098c,
                               &selector->secondFile, 0);
        BattleTransitionSave *save = gameDataBlocksGetSaveData();
        if (save->count < 255) ++save->count;
        selector->state = 4;
        return FUN_0023f194(selector);
    }
    case 4:
        return FUN_0023f194(selector);
    case 5:
        if (jobIsValid(selector->job)) return 0;
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
