/* NON_MATCHING: ranking transitions and helper arguments are recovered; resource predicates, shared state commits, and switch branch placement differ. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct RankingScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
};

struct RankingTransitionWork {
    /* 0x00 */ u32 task;
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 done;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u8 sprite[0x8c];
    /* 0x98 */ u8 sound[0x20];
    /* 0xB8 */ void *heapA;
    /* 0xBC */ void *heapB;
    /* 0xC0 */ RankingScriptProcess *process;
};

struct RankingSavedState {
    /* 0x00000 */ u8 unk00000[0x28362];
    /* 0x28362 */ u16 flags;
};

extern "C" {
extern RankingTransitionWork *g_campCecRanking;
RankingScriptProcess *FUN_00275bc8(void *heapA, void *heapB);
void uiSpriteSetKeyframe(void *sprite, u32 frame, u32 option);
void uiSpriteSetImageKeyframe(void *sprite, u32 frame, u32 option);
RankingSavedState *gameDataBlocksGetSaveData();
void sysPlaySe(u32 sound);
void scrScriptProcessStartEntry(RankingScriptProcess *process, u32 entry);
s32 scrRunOpcodesStub(RankingScriptProcess *process);
s32 FUN_00163aa4(void *sprite, f32 speed);
s32 FUN_001517b4(u32 input, u32 mode);
s32 padButtonIsPressed(u32 button);
u32 gameDataBlocksGetWord27E90();
void FUN_00359974(u32 first, u32 value, u32 third);
void campCecSetObjectValue(u32 value);
}

// Drive the ranking screen's open, script, confirmation, and close transitions.
extern "C" s32 FUN_002c0240()
{
    RankingTransitionWork *work = g_campCecRanking;
    s32 nextState;
    switch (work->state) {
    case 0:
        if (!asdTMTexTableNodeIsLoaded(46, 1) || work->heapA == NULL || work->heapB == NULL)
            return 0;
        work->process = FUN_00275bc8(work->heapA, work->heapB);
        work->process->state = 2;
        uiSpriteSetKeyframe(work->sprite, 13, 0);
        uiSpriteSetImageKeyframe(work->sprite, 21, 0);
        if ((gameDataBlocksGetSaveData()->flags & 0x3ff) == 0) {
            sysPlaySe(160);
            scrScriptProcessStartEntry(work->process, 33);
            work->state = 1;
            return 0;
        }
        sysPlaySe(0x116);
        nextState = 2;
        break;
    case 1:
        if (scrRunOpcodesStub(work->process) != 2)
            return 0;
        work->state = 6;
        return 0;
    case 2:
        if (!FUN_00163aa4(work->sprite, 1))
            return 0;
        nextState = 3;
        break;
    case 3:
        if (!FUN_001517b4(0, 1) && !padButtonIsPressed(1))
            return 0;
        FUN_00359974(0, 100 - gameDataBlocksGetWord27E90() % 100, ~0u);
        scrScriptProcessStartEntry(work->process, 32);
        sysPlaySe(160);
        nextState = 5;
        break;
    case 4:
        if (!FUN_00163aa4(work->sprite, 1))
            return 0;
        work->state = 6;
        return 0;
    case 5:
        if (scrRunOpcodesStub(work->process) != 2)
            return 0;
        uiSpriteSetKeyframe(work->sprite, 11, 0);
        uiSpriteSetImageKeyframe(work->sprite, 20, 0);
        nextState = 4;
        break;
    case 6:
        campCecSetObjectValue(0);
        work->done = 1;
        return 0;
    default:
        return 0;
    }
    work->state = nextState;
    return 0;
}
