/* NON_MATCHING: dialog transitions cross-jump differently, and retail keeps the button-pose variant in r6. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UnlockLog.h"
#include "ui/UiControl_Smt4a.h"

extern "C" {
void unlockLogMenuInitializeReadyResources(UnlockLogWork *work);
void FUN_003f5ed8(UnlockLogWork *work);
void unlockLogHandleSelectionInput(UnlockLogWork *work);
void scrScriptProcessStartEntry(void *script, u32 entry);
s32 scrRunOpcodesStub(void *script);
void *textureGetIndexedResource(u32 group);
void unlockLogLoadCurrentMessage(UnlockLogWork *work);
void scrollListAdvancePage(UnlockLogWork *work, u32 state);
}

/* Waits for the log's owner, resource and both texture nodes, then opens the log (state 10). State 9's body:
 * retail runs it with the work pointer copied to r5 and the loop index in r4, as an inlined function. */
static void unlockLogMenuOpenWhenReady(UnlockLogWork *work)
{
    if (work->owner == 0 || work->resource == NULL || textureGetIndexedResource(0x31) == NULL)
        return;
    for (s32 index = 0; index < 2; ++index) {
        if (!asdTMTexTableNodeIsLoaded(0x31, index))
            return;
    }
    unlockLogLoadCurrentMessage(work);
    uiSpriteSetKeyframe(&work->first, 1, 0);
    uiSpriteSetImageKeyframe(&work->first, 0, 0);
    dialogEnterState((Dialog *)work, 10, 0);
}

/* Advance the unlock-log animations, script, and resource-ready transitions. */
extern "C" s32 unlockLogMenuUpdate(UnlockLogWork *work)
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
        u32 secondDone = uiSpriteAdvanceAnimation(&work->listSprite, 1.0f);
        if (firstDone & secondDone)
            dialogEnterState((Dialog *)work, work->nextState, 0);
        break;
    }
    case 5: {
        uiSpriteAdvanceAnimation(&work->titleSprite, 1.0f);
        u32 firstDone = uiSpriteAdvanceAnimation(&work->listSprite, 1.0f);
        u32 secondDone = uiSpriteAdvanceAnimation(&work->backSprite, 1.0f);
        if (firstDone & secondDone) {
            if (uiSpriteGetMode(&work->backSprite) != 1)
                dialogEnterState((Dialog *)work, 7, 0);
            else
                dialogEnterState((Dialog *)work, work->nextState, 0);
        }
        break;
    }
    case 6:
        if (uiSpriteAdvanceAnimation(&work->buttonSprite, 1.0f)) {
            if (uiSpriteGetMode(&work->buttonSprite) != 1) {
                dialogEnterState((Dialog *)work, 7, 0);
                work->firstPressed = 0;
                work->secondPressed = 0;
            } else {
                unlockLogPoseButton(work, uiSpriteGetOperationMode(&work->buttonSprite) == 3 ? 0 : 1);
                if (++work->counter >= 2)
                    work->counter = 0;
            }
        }
        break;
    case 4:
        dialogEnterState((Dialog *)work, 5, 0);
        break;
    case 7:
        unlockLogHandleSelectionInput(work);
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
            dialogEnterState((Dialog *)work, 3, 0);
            break;
        }
        break;
    case 9:
        unlockLogMenuOpenWhenReady(work);
        break;
    case 10:
        if (uiSpriteAdvanceAnimation(&work->first, 1.0f)) {
            work->visible = 0;
            dialogEnterState((Dialog *)work, 11, 0);
        }
        break;
    case 11:
        scrollListAdvancePage(work, 8);
        break;
    }
    return 0;
}
