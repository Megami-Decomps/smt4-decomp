/* NON_MATCHING: the request branch keeps the zero constant in a saved register (r5) across the callback; retail rematerializes it. */
#include "common.h"

struct TitleScissorOwner {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ f32 offset[2];
};

struct TitleSceneRequests {
    /* 0x00 */ s32 index;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 pending[4];
    /* 0x18 */ u8 forced;
    /* 0x19 */ u8 unk19[3];
    /* 0x1c */ void (*callback)(void);
};

struct TitleScene {
    /* 0x0000 */ u8 unk0000[0x130c];
    /* 0x130c */ TitleSceneRequests requests;
};

extern "C" {
extern TitleScene *g_titleScene;

void FUN_00231434(s32 kind, u32 size, s32 *x, s32 *y, s32 *width, s32 *height);
void pairCopy(const f32 *source, f32 *destination);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);

/* With `clip`, sets the bottom-screen scissor offset by the owner's position; else runs the title scene's pending request callback. */
void FUN_00232554(TitleScissorOwner *owner, s32 clip)
{
    if (clip) {
        s32 x, y, width, height;
        f32 offset[2];

        FUN_00231434(0x1c, 0xfa4, &x, &y, &width, &height);
        pairCopy(owner->offset, offset);
        x = offset[0] + x;
        y = offset[1] + y;
        gxSetClippedBottomScreenScissor(x, y, width, height);
    } else {
        TitleSceneRequests *requests = &g_titleScene->requests;
        u32 pending = requests->pending[requests->index];
        requests->pending[requests->index] = 0;
        if (requests->forced || pending) {
            requests->callback();
            requests->forced = 0;
        }
    }
}

} /* extern "C" */
