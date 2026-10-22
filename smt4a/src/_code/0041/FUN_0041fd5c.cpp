/* NON_MATCHING: Sprite flag load signedness and state-dispatch block placement differ. */
#include "common.h"
#include "ui/UiSpriteState.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 keyframe, s32 argument);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 keyframe, s32 argument);
void FUN_00420a2c(SaveLoadTransitionPrefixA *state);
extern SaveLoadUiSharedPrefixA g_saveLoadUIBase;

void FUN_0041fd5c(SaveLoadTransitionPrefixA *state)
{
    for (s32 i = 0; i < state->spriteCount; ++i) {
        UiSpriteState *sprite = reinterpret_cast<UiSpriteState *>(
            reinterpret_cast<u8 *>(state) + 0x500 + i * sizeof(UiSpriteState));
        uiSpriteSetKeyframe(sprite, 5, 0);
        uiSpriteSetImageKeyframe(sprite, 0, 0);
    }

    state->transitionValue0 = 0;
    state->transitionValue1 = 0;
    state->transitionProgress = 0.0f;
    state->transitionCounter = 0;
    state->previousState = state->currentState;
    state->currentState = 15;
    state->stateCounter = 0;
    FUN_00420a2c(state);

    // The tested byte precedes the indexed sprite; its owning record is unknown.
    if (*(reinterpret_cast<s8 *>(state) + 0x4FE + state->spriteCount * 0x8C) != 0) {
        u8 pendingState = state->pendingState;
        state->previousState = state->currentState;
        state->currentState = pendingState;
        state->stateCounter = 0;
        state->pendingState = 0;
        if (pendingState == 22) {
            g_saveLoadUIBase.selectedValue = state->selectedValue;
            state->completionFlag = 1;
        }
    }
}
}
