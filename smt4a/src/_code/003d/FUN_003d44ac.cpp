/* NON_MATCHING: register choice only: retail stores the three floats through the incoming r0 and loads the tail-called FUN_00387240's base/constant in r0/r1 (here r4 and r1/r0) */
#include "common.h"
#include <stddef.h>
#include "sys/RuntimeObjects.h"

/* One UI sprite instance, 0x8C bytes. */
struct LayoutSprite {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u8 visible;
    /* 0x3D */ u8 unk3D[0x8C - 0x3D];
};

struct LayoutState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04;
};

/* A five-sprite layout: the first sprites show the entry, the rest depend on its kind. */
struct SpriteLayout {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ LayoutSprite sprites[5];
    /* 0x2DC */ LayoutState state;
    /* 0x2E4 */ u8 unk2E4[0x2F0 - 0x2E4];
    /* 0x2F0 */ u32 kind;
    /* 0x2F4 */ u32 unk2F4;
    /* 0x2F8 */ s32 baseId;     /* ids of the layout's sprite animations are baseId * 1000 + n */
    /* 0x2FC */ f32 scaleX;
    /* 0x300 */ f32 scaleY;
    /* 0x304 */ f32 offset;
};

typedef char SpriteLayoutOffsets[offsetof(SpriteLayout, sprites) == 0x20 &&
    offsetof(SpriteLayout, state) == 0x2DC &&
    offsetof(SpriteLayout, kind) == 0x2F0 &&
    offsetof(SpriteLayout, baseId) == 0x2F8 &&
    offsetof(SpriteLayout, offset) == 0x304 ? 1 : -1];

extern "C" {

void FUN_0014e188(LayoutSprite *sprite, s32 group, s32 image, void *owner, s32 flags, f32 scale);
void uiSpriteSelectAnim(LayoutSprite *sprite, s32 anim);
void FUN_00387240(LayoutSprite *sprite, s32 group, s32 value);
void uiGetLayoutPointDifference(LayoutSprite *sprite, s32 group, s32 first, s32 second);
void FUN_0036b63c(LayoutSprite *sprite, u8 value);

/* The animation id of the layout's n-th sprite state. */
static __inline s32 layoutId(const SpriteLayout *layout, s32 n)
{
    return layout->baseId * 1000 + n;
}

/* Sets up the layout's five sprites for its kind. */
void FUN_003d44ac(SpriteLayout *layout)
{
    s32 i;

    layout->scaleX = 1.0f;
    layout->scaleY = 1.0f;
    layout->offset = 0.0f;
    LayoutState *state = &layout->state;

    state->unk00 = 0;
    state->unk04 = 0;
    for (i = 0; i < 5; i++) {
        FUN_0014e188(&layout->sprites[i], 16, -1, layout, 0x97, 1.0f);
    }
    pairSetFirstResetSecond(&layout->sprites[0], layout->baseId * 1000);
    uiSpriteSelectAnim(&layout->sprites[0], 0);
    switch (layout->kind) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 14:
    case 15:
    case 18:
        return;
    case 2:
    case 0x11:
        pairSetFirstResetSecond(&layout->sprites[1], layoutId(layout, 1));
        uiSpriteSelectAnim(&layout->sprites[1], 0);
        FUN_00387240(&layout->sprites[1], 16, layout->baseId * 1000 + 2);
        return;
    case 3:
        FUN_00387240(&layout->sprites[0], 16, layout->baseId * 1000);
        FUN_0036b63c(&layout->sprites[0], 1);
        pairSetFirstResetSecond(&layout->sprites[1], layout->baseId * 1000);
        uiSpriteSelectAnim(&layout->sprites[1], 0);
        FUN_00387240(&layout->sprites[1], 16, layout->baseId * 1000);
        FUN_0036b63c(&layout->sprites[1], 1);
        return;
    case 8:
        pairSetFirstResetSecond(&layout->sprites[0], 0x13881);
        uiGetLayoutPointDifference(&layout->sprites[0], 16, 80000, 0x13881);
        return;
    case 0xd:
        pairSetFirstResetSecond(&layout->sprites[1], layoutId(layout, 1));
        return;
    case 0xc:
    case 0x10:
        pairSetFirstResetSecond(&layout->sprites[1], layoutId(layout, 1));
        pairSetFirstResetSecond(&layout->sprites[2], layoutId(layout, 2));
        uiSpriteSelectAnim(&layout->sprites[1], 0);
        uiSpriteSelectAnim(&layout->sprites[2], 0);
        return;
    case 0x13:
        pairSetFirstResetSecond(&layout->sprites[0], layout->baseId * 1000);
        pairSetFirstResetSecond(&layout->sprites[1], layoutId(layout, 1));
        return;
    }
}

} /* extern "C" */
