#include "common.h"

class ScreenEffect {
public:
    virtual ~ScreenEffect();
};

typedef struct Vec2f {
    f32 x;
    f32 y;
} Vec2f;

typedef struct ScreenFadeWork {
    /* 0x3000 */ u8 unk3000[0x28];
    /* 0x3028 */ u32 flags; // bits 12-14: active fade layers
    /* 0x302C */ u8 unk302C[0xE];
    /* 0x303A */ u16 unk303A;
    /* 0x303C */ u16 unk303C;
    /* 0x303E */ u16 unk303E;
    /* 0x3040 */ u8 unk3040;
    /* 0x3041 */ u8 unk3041;
    /* 0x3042 */ u16 unk3042;
    /* 0x3044 */ u16 unk3044;
    /* 0x3046 */ u16 unk3046;
    /* 0x3048 */ u8 unk3048[4];
    /* 0x304C */ ScreenEffect *effect;
    /* 0x3050 */ u32 unk3050;
    /* 0x3054 */ u32 unk3054;
    /* 0x3058 */ void *buffer58;
    /* 0x305C */ void *buffer5C;
    /* 0x3060 */ Vec2f offset;
    /* 0x3068 */ Vec2f scroll;
} ScreenFadeWork;

typedef struct ScreenOwner {
    /* 0x0000 */ u8 unk0000[0x3000];
    /* 0x3000 */ ScreenFadeWork fade;
} ScreenOwner;

extern "C" {

void asdMemoryFreeLockedAlt(void *block);

static void vec2Set(Vec2f *v, f32 x, f32 y)
{
    v->y = y;
    v->x = x;
}

/* Resets the screen fade state and releases its effect and buffers. */
void FUN_0022708c(ScreenOwner *owner)
{
    ScreenFadeWork *fade = &owner->fade;

    fade->unk303A = 0;
    fade->unk303C = 0;
    fade->unk303E = 0;
    fade->unk3040 = 0;
    fade->unk3041 = 0;
    fade->unk3046 = 0;
    fade->unk3042 = 0;
    fade->unk3044 = 0;
    fade->unk3050 = 0;
    fade->unk3054 = 0;
    vec2Set(&owner->fade.offset, 0.0f, 0.0f);
    vec2Set(&owner->fade.scroll, 0.0f, 0.0f);
    fade->flags &= ~0x7000;
    if (fade->effect != NULL) {
        delete fade->effect;
        fade->effect = NULL;
    }
    if (fade->buffer58 != NULL) {
        asdMemoryFreeLockedAlt(fade->buffer58);
        fade->buffer58 = NULL;
    }
    if (fade->buffer5C != NULL) {
        asdMemoryFreeLockedAlt(fade->buffer5C);
        fade->buffer5C = NULL;
    }
}

} /* extern "C" */
