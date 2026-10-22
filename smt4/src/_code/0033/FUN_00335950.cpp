/* NON_MATCHING: Battle transition resource/script state machine is reconstructed; switch return blocks, save-counter address setup, and final completion branch layout differ. */
#include "common.h"

struct BattleTransitionSelector {
    /* 0x00 */ s32 state;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u32 step;
    /* 0x0C */ u32 firstFile;
    /* 0x10 */ void *scriptProcess;
    /* 0x14 */ u32 secondFile;
    /* 0x18 */ u32 job;
};
struct BattleTransitionMain {
    /* 0x0000 */ u8 unk0000[0x4978];
    /* 0x4978 */ s32 complete;
};
struct BattleTransitionSave {
    /* 0x00000 */ u8 unk00000[0x24b29];
    /* 0x24B29 */ u8 count;
};
extern "C" {
extern void *DAT_00435d18;
extern const char DAT_00400a08[];
extern const char DAT_004009cc[];
extern const char DAT_004009e8[];
extern const char DAT_0040098c[];
extern const char DAT_004009ac[];
void FUN_003db258(void *context, const char *name);
s32 FUN_00246f18(void *context);
s32 FUN_003357c0(BattleTransitionSelector *selector);
void asdLoadFileAsyncSimple(const char *name, u32 *handle, s32 flags);
BattleTransitionSave *gameDataBlocksGetSaveData();
s32 FUN_0023f194(BattleTransitionSelector *selector);
s32 jobIsValid(u32 job);
s32 FUN_0023f074(BattleTransitionSelector *selector);
s32 scrRunOpcodesStub(void *process);
void uiFadeRelease();
void buttonHelpRelease();
BattleTransitionMain *btlGetMainState();
s32 FUN_0023ed64(BattleTransitionSelector *selector);
}

/* Load and run the battle transition scripts, then hand off or report completion. */
extern "C" s32 FUN_00335950(BattleTransitionSelector *selector)
{
    switch (selector->state) {
    case 0:
        FUN_003db258(DAT_00435d18, DAT_00400a08);
        selector->state = 1;
        if (!FUN_00246f18(DAT_00435d18)) return 0;
        selector->step = 0;
        selector->state = 2;
        return FUN_003357c0(selector);
    case 1:
        if (!FUN_00246f18(DAT_00435d18)) return 0;
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
    case 7: {
        if (scrRunOpcodesStub(selector->scriptProcess) != 2) return 0;
        uiFadeRelease();
        buttonHelpRelease();
        BattleTransitionMain *battle = btlGetMainState();
        if ((selector->flags & 1) || battle->complete == 1) {
            battle->complete = 1;
            selector->state = 9;
            return -1;
        }
        selector->state = 8;
        return FUN_0023ed64(selector);
    }
    case 8:
        return FUN_0023ed64(selector);
    case 9:
        return -1;
    default:
        return 0;
    }
}
