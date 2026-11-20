#include "addon/AocBoard.h"
#include "ui/UiSpriteApi.h"
#include "shard/JobWork.h"

extern "C" {
void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 group, u32 image);

/* Per-frame update: plays the three sprites in sequence (fade in, hold, fade out). */
s32 aocBoardUpdateAnimation(u32 job)
{
    AocBoardWork *work = (AocBoardWork *)jobGetWork(job);
    work->owner.unk418 = (work->owner.unk418 + 1) % 40;
    switch (work->owner.control.frame) {
    case 0:
        work->setTransitionReady(false);
        work->owner.control.frame = 1;
        uiSpriteStateInitFromSource(&work->sprites[0], 0xe, -1, &work->owner.parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&work->sprites[1], 0xe, -1, &work->owner.parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&work->sprites[2], 0xe, -1, &work->owner.parameters, 0xb, 1.0f);
        if (static_cast<s32>(work->owner.control.resource) <= 4) {
            pairSetSecondResetFirst(&work->sprites[0], 6);
            spriteStartAnimationByIndex(&work->sprites[0], 3);
            uiStoreTextureEntryCenter(&work->sprites[0], 0xe, 0x36);
            pairSetSecondResetFirst(&work->sprites[2], 7);
            spriteStartAnimationByIndex(&work->sprites[2], 3);
            uiStoreTextureEntryCenter(&work->sprites[2], 0xe, 0x36);
        } else {
            pairSetSecondResetFirst(&work->sprites[0], 4);
            spriteStartAnimationByIndex(&work->sprites[0], 3);
            uiStoreTextureEntryCenter(&work->sprites[0], 0xe, 0x22);
            pairSetSecondResetFirst(&work->sprites[2], 5);
            spriteStartAnimationByIndex(&work->sprites[2], 3);
            uiStoreTextureEntryCenter(&work->sprites[2], 0xe, 0x22);
        }
        spriteSetVisible(&work->sprites[0], 1);
        spriteSetVisible(&work->sprites[2], 1);
        pairSetFirstResetSecond(&work->sprites[1], 7);
        spriteStartAnimationByIndex(&work->sprites[1], 4);
        uiStoreTextureEntryCenter(&work->sprites[1], 0xe, 0x47);
        uiSpriteAdvanceAnimation(&work->sprites[0]);
        break;
    case 1:
        uiSpriteAdvanceAnimation(&work->sprites[0]);
        uiSpriteAdvanceAnimation(&work->sprites[2]);
        if (uiSpriteGetCompletionState(&work->sprites[0]) != 0) {
            work->setTransitionReady(true);
            work->owner.control.frame = 2;
        }
        break;
    case 2:
        uiSpriteAdvanceAnimation(&work->sprites[0]);
        uiSpriteAdvanceAnimation(&work->sprites[2]);
        uiSpriteAdvanceAnimation(&work->sprites[1]);
        break;
    case 3:
        uiSpriteAdvanceAnimation(&work->sprites[0]);
        uiSpriteAdvanceAnimation(&work->sprites[2]);
        if (uiSpriteGetCompletionState(&work->sprites[0]) != 0)
            work->owner.control.frame = 4;
        break;
    case 4:
        work->owner.control.flags &= ~0x30;
        break;
    }
    return 0;
}

} /* extern "C" */
