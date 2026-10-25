/* NON_MATCHING: linker-inlined signed completion getter recovered; next-state constant lifetime and stores differ. */
#include "classes/Obj536044.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include <stddef.h>

extern "C" {
void *lmapSceneGetScript();
void FUN_003e5858(void *script);
s32 fourPtrsAllNull(void *script);
void uiSpriteBankApplyPreset(SpritePresetBank *, s32 preset);
void FUN_0019de98(s32 channel, u32 color);
void FUN_00163aa4(UiAnimatedSprite *, f32 speed);
s32 vec2GetXInt(const UiAnimatedSprite *);
s32 vec2GetYInt(const UiAnimatedSprite *);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
s8 uiSpriteGetCompletionState(const UiAnimatedSprite *sprite);

// Finish the map-scene animation, then wait for its script before advancing.
void FUN_00495584(Obj536044 *scene)
{
    // These animation fields extend beyond the documented class prefix.
    struct SceneTransitionView {
        u32 flags;
        s32 state;
        u32 substate;
        u32 unk0c;
        s32 previousState;
        u8 unk14[0x390];
        f32 position[2]; // 0x3a4
        u8 unk3ac[0x20];
        SpritePresetBank bank; // 0x3cc
    };
    typedef char SceneTransitionViewOffsetCheck[offsetof(SceneTransitionView, bank) == 0x3cc && offsetof(SceneTransitionView, position) == 0x3a4 ? 1 : -1];
    SceneTransitionView *state = reinterpret_cast<SceneTransitionView *>(scene);
    if (lmapSceneGetScript())
        FUN_003e5858(lmapSceneGetScript());
    if (state->substate == 0) {
        uiSpriteBankApplyPreset(&state->bank, 1);
        state->substate = 1;
        FUN_0019de98(0, 0x323232ff);
        return;
    }
    if (state->substate != 1) {
        if (state->substate != 2)
            return;
    } else {
        UiAnimatedSprite *sprite = &state->bank.sprites[1];
        FUN_00163aa4(sprite, 1.0f);
        s32 y = vec2GetYInt(sprite);
        s32 x = vec2GetXInt(sprite);
        pointConvertToFloat(state->position, x, y);
        if (!uiSpriteGetCompletionState(sprite))
            return;
        state->flags &= ~0xe00;
        if (!lmapSceneGetScript()) {
            state->previousState = state->state;
            state->state = 0x14;
            state->substate = 0;
            return;
        }
        state->substate = 2;
    }
    if (!fourPtrsAllNull(lmapSceneGetScript()))
        return;
    state->previousState = state->state;
    state->state = 0x14;
    state->substate = 0;
}
}
