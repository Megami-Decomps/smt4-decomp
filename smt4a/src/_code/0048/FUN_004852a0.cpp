#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match3_NameFormStateA.h"

extern "C" {

/* Advances the name form's opening animation and enters the input state when both sprites finish. */
void FUN_004852a0(NameFormStateA *form)
{
    uiSpriteSlideFromSide(&form->blinkSprite, 0);
    uiSpriteAdvanceAnimation(&form->animation, 1.0f);
    form->keyboard.sideOffset = vec2GetXInt(&form->blinkSprite);
    form->keyboard.backgroundOffset = form->keyboard.sideOffset;
    if (uiSpriteGetCompletionState(&form->blinkSprite) != 0 && uiSpriteGetCompletionState(&form->animation) != 0) {
        stateSetterEnterState(form, 2);
    }
}

} /* extern "C" */
