/* NON_MATCHING: register allocation and spill: retail keeps x/y in fp/r5, spills the offset x to [sp+8] and has a 0x24-byte frame (icon id slots at sp+12/sp+20); here x/y live in sl/r6 with no spill. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "util/PackNibbles.h"

/* A status icon panel's position vector (0x24 bytes); the scale sits at 0x20. */
struct IconPanelPosition {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 scale;
};

struct IconPanel {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ IconPanelPosition position;
    /* 0x00D0 */ u8 unk00D0[0x37AC];
    /* 0x387C */ s32 styled;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
void gfxSelectStatusIconPair(u32 kind, u32 *foreground, u32 *background, s32 alternate);
void efctSetSpeed(f32 speed);
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);

// Draw a status icon (frame, glow and the two icon sprites) in the plain or the alternate style.
void FUN_002fa1b0(IconPanel *panel, u32 kind, s32 x, s32 y, f32 speed, s32 alternate)
{
    u32 foreground = 0;
    u32 background = 0;
    gfxSelectStatusIconPair(kind, &foreground, &background, alternate);
    efctSetSpeed(speed);
    if (alternate != 0) {
        s32 offsetX = 0;
        s32 offsetY = 0;
        if (panel->styled == 1) {
            offsetX = vec2GetXInt(&panel->position);
            offsetY = vec2GetYInt(&panel->position);
        }
        offsetX += x;
        offsetY += y;
        FUN_001835b4(2, 13, 170, offsetX, offsetY, 52);
        FUN_001835b4(2, 13, 171, offsetX, offsetY, 52);
        FUN_001835b4(2, 13, 222, offsetX, offsetY, 53);
        if (panel->styled == 1) {
            efctSetSpeed(panel->position.scale * speed);
            RenderCtxA *render = g_renderCtx;
            u32 blend = packNibblesAndByte(6, 1, 0);
            renderCtxSetB(render, blend);
            FUN_001835b4(2, 13, 222, offsetX, offsetY, 54);
            render = g_renderCtx;
            blend = packNibblesAndByte(6, 7, 0);
            renderCtxSetB(render, blend);
            efctSetSpeed(speed);
        }
        FUN_001835b4(2, 13, background, x, y, 55);
        FUN_001835b4(2, 13, foreground, offsetX, offsetY, 56);
    } else {
        FUN_001835b4(2, 13, 221, x, y, 44);
        FUN_001835b4(2, 13, background, x, y, 45);
        FUN_001835b4(2, 13, foreground, x, y, 46);
    }
    efctSetSpeed(1.0f);
}
}
