// Finish the map-scene animation, then wait for its script before advancing.
#include "ui/UiSpriteApi.h"
#include "classes/Obj536044.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include <stddef.h>

extern "C" {
void *lmapSceneGetScript();
void FUN_003e5858(void *script);
s32 fourPtrsAllNull(void *script);
void uiSpriteBankApplyPreset(SpritePresetBank *, s32 preset);
void buttonHelpSetText(s32 channel, u32 color);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
}

// The animation fields lie beyond the documented class prefix.
struct SceneAnimationView {
    u8 unk000[0x3a4];
    f32 position[2]; // 0x3a4
    u8 unk3ac[0x20];
    SpritePresetBank bank; // 0x3cc
};
typedef char SceneAnimationViewOffsetCheck[offsetof(SceneAnimationView, bank) == 0x3cc && offsetof(SceneAnimationView, position) == 0x3a4 ? 1 : -1];


void Obj536044::FUN_00495584()
{
    SceneAnimationView *state = reinterpret_cast<SceneAnimationView *>(this);
    if (lmapSceneGetScript())
        FUN_003e5858(lmapSceneGetScript());
    if (substate == 0) {
        uiSpriteBankApplyPreset(&state->bank, 1);
        substate = 1;
        buttonHelpSetText(0, 0x323232ff);
        return;
    }
    if (substate != 1) {
        if (substate != 2)
            return;
    } else {
        UiSpriteState *sprite = &state->bank.sprites[1];
        uiSpriteAdvanceAnimation(sprite, 1.0f);
        s32 y = vec2GetYInt(sprite);
        s32 x = vec2GetXInt(sprite);
        pointConvertToFloat(state->position, x, y);
        if (!uiSpriteGetCompletionState(sprite))
            return;
        flags &= ~0xe00;
        if (!lmapSceneGetScript()) {
            changeState(0x14);
            return;
        }
        substate = 2;
    }
    if (!fourPtrsAllNull(lmapSceneGetScript()))
        return;
    changeState(0x14);
}
