#include "common.h"

/* An icon that slides into place along a tween. */
struct SlideIcon {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00c */ u8 unk00c[4];
    /* 0x010 */ u32 unk10_0 : 1;
    /* 0x010 */ u32 hidden : 1;
    /* 0x010 */ u32 unk10_2 : 22;
    /* 0x010 */ u32 animating : 1;
    /* 0x010 */ u32 unk10_25 : 7;
    /* 0x014 */ u8 unk014[0x4bc];
    /* 0x4d0 */ u8 position[0x14];
    /* 0x4e4 */ u8 sprites[0x20];
    /* 0x504 */ u8 tween[1];
};

extern "C" {
void uiSpriteBankApplyPreset(void *sprites, s32 preset);
s32 FUN_00163aa4(void *tween, f32 step);
s32 vec2GetXInt(void *tween);
s32 vec2GetYInt(void *tween);
void pointConvertToFloat(void *point, s32 x, s32 y);

/* Steps the icon's slide-in: show it, follow the tween until it finishes, then stop animating. */
void FUN_0048d11c(SlideIcon *icon)
{
    if (icon->state == 0) {
        uiSpriteBankApplyPreset(icon->sprites, 0);
        icon->hidden = 0;
        icon->animating = 1;
        icon->state = 1;
    } else if (icon->state == 1) {
        void *tween = icon->tween;
        if (FUN_00163aa4(tween, 1.0f) != 0) {
            icon->state = 2;
        }
        s32 y = vec2GetYInt(tween);
        pointConvertToFloat(icon->position, vec2GetXInt(tween), y);
    } else if (icon->state == 2) {
        icon->animating = 0;
    }
}
}
