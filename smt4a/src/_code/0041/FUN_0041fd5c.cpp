/* NON_MATCHING: transition reset stores and completion-field address scheduling differ. */
#include "common.h"
#include "ui/UiSpriteState.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 keyframe, s32 argument);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 keyframe, s32 argument);
void FUN_00420a2c(SaveLoadTransitionPrefixA *state);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);
extern SaveLoadUiSharedPrefixA g_saveLoadUIBase;

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

// Make `next` the current state, remembering the one it replaces.
static void transitionEnterState(SaveLoadTransitionPrefixA *state, u32 next)
{
    state->previousState = state->currentState;
    state->currentState = next;
    state->stateCounter = 0;
}

void FUN_0041fd5c(SaveLoadTransitionPrefixA *state)
{
    // Sprite storage overlaps the known transition prefix.
    struct SpriteView {
        u8 prefix[0x500];
        UiSpriteState additional[1];
    };
    SpriteView *sprites = (SpriteView *)state;
    for (s32 i = 0; i < state->spriteCount; ++i) {
        spriteRestart(&sprites->additional[i]);
    }

    transitionValuesSet(&state->transition, 0, 0, 0.0f);
    state->transitionCounter = 0;
    transitionEnterState(state, 15);
    FUN_00420a2c(state);

    if (uiSpriteGetCompletionState(&sprites->additional[state->spriteCount - 1])) {
        u8 pendingState = state->pendingState;
        transitionEnterState(state, pendingState);
        state->pendingState = 0;
        if (pendingState == 22) {
            g_saveLoadUIBase.selectedValue = state->selectedValue;
            state->completionFlag = 1;
        }
    }
}
}
