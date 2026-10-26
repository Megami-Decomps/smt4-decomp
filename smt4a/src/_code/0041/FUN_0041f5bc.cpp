/* NON_MATCHING: transition reset stores and completion-field address scheduling differ. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "ui/UiSpriteState.h"
extern "C" {
extern SaveLoadUiSharedPrefixA g_saveLoadUIBase;
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 animation, s32 frame);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 frame, s32 flags);
void FUN_00420a2c(SaveLoadTransitionPrefixA *work);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);
static void transitionValuesSet(SaveLoadTransitionValues *transition, u32 value0, u32 value1, f32 progress)
{
    transition->value0 = value0;
    transition->value1 = value1;
    transition->progress = progress;
}

// Restart a sprite's animation from its first keyframe and image.
static __inline void spriteRestart(UiSpriteState *sprite)
{
    uiSpriteSetKeyframe(sprite, 5, 0);
    uiSpriteSetImageKeyframe(sprite, 0, 0);
}

// Reset all transition sprites and resume the pending state once the last completes.
void FUN_0041f5bc(SaveLoadTransitionPrefixA *work)
{
    // Sprite storage overlaps the known transition prefix.
    struct SpriteView {
        u8 prefix[0x474];
        UiSpriteState first;
        UiSpriteState additional[1];
    };
    typedef char SpriteViewOffsets[offsetof(SpriteView, additional) == 0x500 ? 1 : -1];
    SpriteView *sprites = (SpriteView *)work;
    spriteRestart(&sprites->first);
    for (s32 index = 0; index < work->spriteCount; ++index) {
        spriteRestart(&sprites->additional[index]);
    }
    transitionValuesSet(&work->transition, 0, 0, 0.0f);
    work->transitionCounter = 0;
    work->previousState = work->currentState;
    work->currentState = 15;
    work->stateCounter = 0;
    FUN_00420a2c(work);
    if (uiSpriteGetCompletionState(&sprites->additional[work->spriteCount - 1])) {
        s8 nextState = work->pendingState;
        work->previousState = work->currentState;
        work->currentState = nextState;
        work->stateCounter = 0;
        work->pendingState = 0;
        if (nextState == 22) {
            g_saveLoadUIBase.selectedValue = work->selectedValue;
            work->completionFlag = 1;
        }
    }
}
}
