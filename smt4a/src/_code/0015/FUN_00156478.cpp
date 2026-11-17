#include "font/InfoWinA.h"
#include "shard/TextureDrawCall.h"
#include "util/MathFunctions.h"

extern "C" {

s32 uiSpriteAdvanceAnimation(void *sprite, f32 step);
void FUN_00167458(void *sprite, s32 arg);
void uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 arg);
void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg);

static inline void infoWindowBeginClose()
{
    InfoWindowA *window = g_infoWin;
    if (window->state != 0) {
        window->state = 5;
        window->timer = 30;
        uiSpriteSetKeyframe(&window->background, 1, 0);
        uiSpriteSetImageKeyframe(&window->background, 1, 0);
        if (window->active == 2) {
            uiSpriteSetKeyframe(&window->content, 4, 0);
        }
    }
}

// Per-frame update of the info window: fades the frame in, scrolls a wide label, waits out its timer and fades out.
s32 FUN_00156478(void)
{
    InfoWindowA *window = g_infoWin;

    switch (window->state) {
    case 1:
        if (window->active == 2) {
            uiSpriteAdvanceAnimation(&window->content, 1.0f);
        }
        if (uiSpriteAdvanceAnimation(&window->background, 1.0f) != 0) {
            if (window->style != 0) {
                window->state = 4;
            } else {
                window->state = 2;
                uiSpriteSetKeyframe(&window->label, 2, 0);
            }
            window->frame = 0;
        }
        break;
    case 2:
        FUN_00167458(&window->label, 0);
        window->labelX = vec2GetXInt(&window->label);
        if (window->labelX <= 0) {
            window->labelX = 0;
            window->state = 3;
            window->frame = 0;
        }
        window->textRight = window->labelX + window->textWidth + 42;
        break;
    case 3:
        if (window->frame > 30 && window->wideText != 0) {
            s32 textWidth = window->textWidth;
            window->labelX--;
            if (-textWidth > window->labelX) {
                window->labelX = textWidth + window->textRight;
                window->labelX += 42;
            }
            window->textRight--;
            if (window->textRight < -window->textWidth) {
                window->textRight = window->textWidth + window->labelX + 42;
            }
        }
        break;
    case 4:
        if ((s32)window->timer >= 0 && window->frame > (s32)window->timer) {
            infoWindowBeginClose();
        }
        break;
    case 5:
        if (window->active == 2) {
            uiSpriteAdvanceAnimation(&window->content, 1.0f);
        }
        if (uiSpriteAdvanceAnimation(&window->background, 1.0f) != 0) {
            window->style = 0;
            window->state = 0;
            window->frame = 0;
            window->resetState = 0;
        }
        break;
    }
    window->frame++;
    return 0;
}

}
