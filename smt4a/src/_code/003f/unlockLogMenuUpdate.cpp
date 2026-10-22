/* NON_MATCHING: compiler folds keyframe-mode conversion, changes signed key loads and lays out state branches differently. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

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
    /* 0x16C */ SpritePlaybackView first;
    /* 0x1F8 */ SpritePlaybackView second;
    /* 0x284 */ SpritePlaybackView third;
    /* 0x310 */ u8 unk310[0x118];
    /* 0x428 */ SpritePlaybackView fourth;
    /* 0x4B4 */ u8 unk4b4[0x8c];
    /* 0x540 */ SpritePlaybackView fifth;
    /* 0x5CC */ u8 unk5cc[8];
    /* 0x5D4 */ u8 visible;
    /* 0x5D5 */ u8 unk5d5[0xf];
    /* 0x5E4 */ u8 firstFlag;
    /* 0x5E5 */ u8 secondFlag;
};

extern "C" {
void unlockLogMenuInitializeReadyResources(UnlockLogUpdateWork *work);
void FUN_003f5ed8(UnlockLogUpdateWork *work);
void FUN_003f5268(UnlockLogUpdateWork *work, u32 state, u32 argument);
u32 FUN_00163aa4(SpritePlaybackView *sprite, f32 speed);
void uiSpriteSetKeyframe(SpritePlaybackView *sprite, s16 key, s32 mode);
void uiSpriteSetImageKeyframe(SpritePlaybackView *sprite, s16 key, s32 mode);
void FUN_003f56ac(UnlockLogUpdateWork *work);
void scrScriptProcessStartEntry(void *script, u32 entry);
s32 scrRunOpcodesStub(void *script);
void *textureGetIndexedResource(u32 group);
s32 asdTMTexTableNodeIsLoaded(u32 group, s32 index);
void FUN_003f6bc0(UnlockLogUpdateWork *work);
void FUN_003f6f68(UnlockLogUpdateWork *work, u32 state);
}

/* Advance the unlock-log animations, script, and resource-ready transitions. */
extern "C" s32 unlockLogMenuUpdate(UnlockLogUpdateWork *work)
{
    switch (work->state) {
    case 1:
        unlockLogMenuInitializeReadyResources(work);
        break;
    case 2: {
        u32 firstDone = FUN_00163aa4(&work->first, 1.0f);
        u32 secondDone = FUN_00163aa4(&work->fifth, 1.0f);
        if (firstDone & secondDone)
            FUN_003f5268(work, work->nextState, 0);
        break;
    }
    case 3:
        FUN_003f5ed8(work);
        break;
    case 4:
        FUN_003f5268(work, 5, 0);
        break;
    case 5: {
        FUN_00163aa4(&work->fourth, 1.0f);
        u32 firstDone = FUN_00163aa4(&work->fifth, 1.0f);
        u32 secondDone = FUN_00163aa4(&work->second, 1.0f);
        if (firstDone & secondDone)
            FUN_003f5268(work, work->second.frameKey == 1 ? work->nextState : 7, 0);
        break;
    }
    case 6:
        if (FUN_00163aa4(&work->third, 1.0f)) {
            if (work->third.frameKey != 1) {
                FUN_003f5268(work, 7, 0);
                work->firstFlag = 0;
                work->secondFlag = 0;
            } else {
                uiSpriteSetKeyframe(&work->third, work->third.positionKey != 3, 0);
                uiSpriteSetImageKeyframe(&work->third, 0, 0);
                if (++work->counter >= 2)
                    work->counter = 0;
            }
        }
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
            FUN_003f5268(work, 3, 0);
            break;
        }
        break;
    case 9:
        if (work->owner == 0 || work->resource == NULL || textureGetIndexedResource(0x31) == NULL)
            return 0;
        for (s32 index = 0; index < 2; ++index) {
            if (!asdTMTexTableNodeIsLoaded(0x31, index))
                return 0;
        }
        FUN_003f6bc0(work);
        uiSpriteSetKeyframe(&work->first, 1, 0);
        uiSpriteSetImageKeyframe(&work->first, 0, 0);
        FUN_003f5268(work, 10, 0);
        break;
    case 10:
        if (FUN_00163aa4(&work->first, 1.0f)) {
            work->visible = 0;
            FUN_003f5268(work, 11, 0);
        }
        break;
    case 11:
        FUN_003f6f68(work, 8);
        break;
    }
    return 0;
}
