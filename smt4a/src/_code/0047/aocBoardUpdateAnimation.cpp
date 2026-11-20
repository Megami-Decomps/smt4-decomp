#include "addon/AocBoard.h"
#include "ui/UiSpriteApi.h"
#include <stddef.h>
#include "shard/JobWork.h"

extern "C" {
void uiStoreTextureEntryCenter(UiSpriteState *sprite, s32 mode, s32 id);

/* Advances the three-sprite banner: builds the sprites, plays them until the first one finishes, then ends. */
s32 aocBoardUpdateAnimation(u32 job)
{
    AocBoardWork *work = (AocBoardWork *)jobGetWork(job);
    work->owner.unk418 = (work->owner.unk418 + 1) % 40;
    switch (work->owner.control.frame) {
    case 0:
        work->setTransitionReady(false);
        work->owner.control.frame = 1;
        uiSpriteStateInitFromSource(&work->sprites[0], 8, -1, &work->owner.parameters, 11, 1.0f);
        uiSpriteStateInitFromSource(&work->sprites[1], 8, -1, &work->owner.parameters, 11, 1.0f);
        uiSpriteStateInitFromSource(&work->sprites[2], 8, -1, &work->owner.parameters, 11, 1.0f);
        if (static_cast<s32>(work->owner.control.resource) <= 4) {
            pairSetSecondResetFirst(&work->sprites[0], 6);
            uiSpriteSelectAnim(&work->sprites[0], 3);
            uiStoreTextureEntryCenter(&work->sprites[0], 8, 54);
            pairSetSecondResetFirst(&work->sprites[2], 7);
            uiSpriteSelectAnim(&work->sprites[2], 3);
            uiStoreTextureEntryCenter(&work->sprites[2], 8, 54);
        } else {
            pairSetSecondResetFirst(&work->sprites[0], 4);
            uiSpriteSelectAnim(&work->sprites[0], 3);
            uiStoreTextureEntryCenter(&work->sprites[0], 8, 34);
            pairSetSecondResetFirst(&work->sprites[2], 5);
            uiSpriteSelectAnim(&work->sprites[2], 3);
            uiStoreTextureEntryCenter(&work->sprites[2], 8, 34);
        }
        spriteSetVisible(&work->sprites[0], 1);
        spriteSetVisible(&work->sprites[2], 1);
        pairSetFirstResetSecond(&work->sprites[1], 7);
        uiSpriteSelectAnim(&work->sprites[1], 4);
        uiStoreTextureEntryCenter(&work->sprites[1], 8, 71);
        uiSpriteAdvanceAnimation(&work->sprites[0], 1.0f);
        break;
    case 1:
        uiSpriteAdvanceAnimation(&work->sprites[0], 1.0f);
        uiSpriteAdvanceAnimation(&work->sprites[2], 1.0f);
        if (uiSpriteGetCompletionState(&work->sprites[0]) != 0) {
            work->setTransitionReady(true);
            work->owner.control.frame = 2;
        }
        break;
    case 2:
        uiSpriteAdvanceAnimation(&work->sprites[0], 1.0f);
        uiSpriteAdvanceAnimation(&work->sprites[2], 1.0f);
        uiSpriteAdvanceAnimation(&work->sprites[1], 1.0f);
        break;
    case 3:
        uiSpriteAdvanceAnimation(&work->sprites[0], 1.0f);
        uiSpriteAdvanceAnimation(&work->sprites[2], 1.0f);
        if (uiSpriteGetCompletionState(&work->sprites[0]) != 0)
            work->owner.control.frame = 4;
        break;
    case 4:
        work->owner.control.flags &= ~0x30u;
        break;
    }
    return 0;
}

} /* extern "C" */
