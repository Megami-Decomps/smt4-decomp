/* NON_MATCHING: close transition and label arrival match; textRight scroll uses swapped width/position registers. */
#include "shard/W4_Match3_InfoWindow.h"
#include "shard/TextureDrawCall.h"
#include "util/Vec2Fixed.h"
#include "util/Vec2Fixed.h"

extern "C" {

s32 FUN_00163aa4(void *sprite, f32 step);
void FUN_00167458(void *sprite, s32 arg);
void uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 arg);
void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg);

static inline void infoWindowBeginClose()
{
    InfoWindow *window = g_infoWin;
    if (window->state != 0) {
        window->state = 5;
        window->timer = 30;
        uiSpriteSetKeyframe(&window->sprites.background, 1, 0);
        uiSpriteSetImageKeyframe(&window->sprites.background, 1, 0);
        if (window->active == 2) {
            uiSpriteSetKeyframe(&window->sprites.content, 4, 0);
        }
    }
}

// Per-frame update of the info window: fades the frame in, scrolls a wide label, waits out its timer and fades out.
s32 FUN_00156478(void)
{
    InfoWindow *window = g_infoWin;

    switch (window->state) {
    case 1:
        if (window->active == 2) {
            FUN_00163aa4(&window->sprites.content, 1.0f);
        }
        if (FUN_00163aa4(&window->sprites.background, 1.0f) != 0) {
            if (window->style != 0) {
                window->state = 4;
            } else {
                window->state = 2;
                uiSpriteSetKeyframe(&window->labelAnimation, 2, 0);
            }
            window->frame = 0;
        }
        break;
    case 2:
        FUN_00167458(&window->labelAnimation, 0);
        window->labelX = vec2GetXInt(&window->labelAnimation);
        if (window->labelX <= 0) {
            window->labelX = 0;
            window->state = 3;
            window->frame = 0;
        }
        window->textRight = window->labelX + window->textWidth + 42;
        break;
    case 3:
        if (window->frame > 30 && window->wideText != 0) {
            window->labelX--;
            if (-window->textWidth > window->labelX) {
                window->labelX = window->textWidth + window->textRight + 42;
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
            FUN_00163aa4(&window->sprites.content, 1.0f);
        }
        if (FUN_00163aa4(&window->sprites.background, 1.0f) != 0) {
            window->style = 0;
            window->state = 0;
            window->frame = 0;
            window->initialization.resetState = 0;
        }
        break;
    }
    window->frame++;
    return 0;
}

}
