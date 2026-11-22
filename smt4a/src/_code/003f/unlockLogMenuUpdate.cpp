/* NON_MATCHING: 145 lines (shape 67). Retail cross-jumps the dialogEnterState calls of cases 4, 8, 9 and 10 into one
 * unpadded `bl` (case 4 sets r0 first), keeps the button-pose variant in r6 and re-forms the sprite address per
 * call; most other rows are the shifted branch offsets. Cases are in retail's layout order. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

struct UnlockLogUpdateWork {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 owner;
    /* 0x014 */ u32 state;
    /* 0x018 */ u32 nextState;
    /* 0x01C */ s32 stage;
    /* 0x020 */ u8 unk020[8];
    /* 0x028 */ void *resource;
    /* 0x02C */ u8 unk02c[8];
    /* 0x034 */ void *script;
    /* 0x038 */ u32 unk038;
    /* 0x03C */ u32 entry;
    /* 0x040 */ u8 unk040[0xe4];
    /* 0x124 */ s32 counter;
    /* 0x128 */ u8 unk128[0x44];
    /* 0x16C */ UiSpriteState first;
    /* 0x1F8 */ UiSpriteState second;
    /* 0x284 */ UiSpriteState third;
    /* 0x310 */ u8 unk310[0x118];
    /* 0x428 */ UiSpriteState fourth;
    /* 0x4B4 */ u8 unk4b4[0x8c];
    /* 0x540 */ UiSpriteState fifth;
    /* 0x5CC */ u8 unk5cc[8];
    /* 0x5D4 */ u8 visible;
    /* 0x5D5 */ u8 unk5d5[0xf];
    /* 0x5E4 */ u8 firstFlag;
    /* 0x5E5 */ u8 secondFlag;
};

extern "C" {
void unlockLogMenuInitializeReadyResources(UnlockLogUpdateWork *work);
void FUN_003f5ed8(UnlockLogUpdateWork *work);
void dialogEnterState(UnlockLogUpdateWork *work, u32 state, u32 argument);
void FUN_003f56ac(UnlockLogUpdateWork *work);
void scrScriptProcessStartEntry(void *script, u32 entry);
s32 scrRunOpcodesStub(void *script);
void *textureGetIndexedResource(u32 group);
void FUN_003f6bc0(UnlockLogUpdateWork *work);
void scrollListAdvancePage(UnlockLogUpdateWork *work, u32 state);
}

/* Poses a button sprite: variants 0 and 1 are its resting keyframes, 2 and 3 the pressed ones, which also
 * switch to the pressed image. Inlined: retail tests all four variants against a value that can only be 0 or 1
 * here (FUN_00405268 poses the content list's page button the same way). */
static __inline void unlockLogPoseButton(UiSpriteState *sprite, s32 variant)
{
    s32 key = 0;
    s32 image = 0;
    switch (variant) {
    case 0:
        key = 0;
        break;
    case 1:
        key = 1;
        break;
    case 2:
        key = 2;
        image = 1;
        break;
    case 3:
        key = 3;
        image = 1;
        break;
    }
    uiSpriteSetKeyframe(sprite, key, 0);
    uiSpriteSetImageKeyframe(sprite, image, 0);
}

/* Waits for the log's owner, resource and both texture nodes, then opens the log (state 10). State 9's body:
 * retail runs it with the work pointer copied to r5 and the loop index in r4, as an inlined function. */
static void unlockLogMenuOpenWhenReady(UnlockLogUpdateWork *work)
{
    if (work->owner == 0 || work->resource == NULL || textureGetIndexedResource(0x31) == NULL)
        return;
    for (s32 index = 0; index < 2; ++index) {
        if (!asdTMTexTableNodeIsLoaded(0x31, index))
            return;
    }
    FUN_003f6bc0(work);
    uiSpriteSetKeyframe(&work->first, 1, 0);
    uiSpriteSetImageKeyframe(&work->first, 0, 0);
    dialogEnterState(work, 10, 0);
}

/* Advance the unlock-log animations, script, and resource-ready transitions. */
extern "C" s32 unlockLogMenuUpdate(UnlockLogUpdateWork *work)
{
    switch (work->state) {
    case 1:
        unlockLogMenuInitializeReadyResources(work);
        break;
    case 3:
        FUN_003f5ed8(work);
        break;
    case 2: {
        u32 firstDone = uiSpriteAdvanceAnimation(&work->first, 1.0f);
        u32 secondDone = uiSpriteAdvanceAnimation(&work->fifth, 1.0f);
        if (firstDone & secondDone)
            dialogEnterState(work, work->nextState, 0);
        break;
    }
    case 5: {
        uiSpriteAdvanceAnimation(&work->fourth, 1.0f);
        u32 firstDone = uiSpriteAdvanceAnimation(&work->fifth, 1.0f);
        u32 secondDone = uiSpriteAdvanceAnimation(&work->second, 1.0f);
        if (firstDone & secondDone) {
            if (uiSpriteGetMode(&work->second) != 1)
                dialogEnterState(work, 7, 0);
            else
                dialogEnterState(work, work->nextState, 0);
        }
        break;
    }
    case 6:
        if (uiSpriteAdvanceAnimation(&work->third, 1.0f)) {
            if (uiSpriteGetMode(&work->third) != 1) {
                dialogEnterState(work, 7, 0);
                work->firstFlag = 0;
                work->secondFlag = 0;
            } else {
                unlockLogPoseButton(&work->third, uiSpriteGetOperationMode(&work->third) == 3 ? 0 : 1);
                if (++work->counter >= 2)
                    work->counter = 0;
            }
        }
        break;
    case 4:
        dialogEnterState(work, 5, 0);
        break;
    case 7:
        FUN_003f56ac(work);
        break;
    case 8:
        switch (work->stage) {
        case 0:
            scrScriptProcessStartEntry(work->script, work->entry);
            ++work->stage;
        case 1:
            if (scrRunOpcodesStub(work->script) != 2)
                return 0;
            ++work->stage;
        case 2:
            dialogEnterState(work, 3, 0);
            break;
        }
        break;
    case 9:
        unlockLogMenuOpenWhenReady(work);
        break;
    case 10:
        if (uiSpriteAdvanceAnimation(&work->first, 1.0f)) {
            work->visible = 0;
            dialogEnterState(work, 11, 0);
        }
        break;
    case 11:
        scrollListAdvancePage(work, 8);
        break;
    }
    return 0;
}
