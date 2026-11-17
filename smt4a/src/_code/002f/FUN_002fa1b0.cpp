/* NON_MATCHING: register allocation and spill: retail keeps x/y in fp/r5, spills the offset x to [sp+8] and has a 0x24-byte frame (icon id slots at sp+12/sp+20); here x/y live in sl/r6 with no spill. */
#include "ui/UiSpriteApi.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"

/* A status icon panel's position vector (0x24 bytes); the scale sits at 0x20. */
struct IconPanel {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ UiSpriteState position;
    /* 0x00D0 */ u8 unk00D0[0x3744];
    /* 0x387C */ s32 styled;
};

extern "C" {
void gfxSelectStatusIconPair(u32 kind, u32 *foreground, u32 *background, s32 alternate);
void efctSetSpeed(f32 speed);

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
            offsetX = vec2GetXInt((&panel->position));
            offsetY = vec2GetYInt((&panel->position));
        }
        offsetX += x;
        offsetY += y;
        texDrawTableEntryAtStoredOrigin(2, 13, 170, offsetX, offsetY, 52);
        texDrawTableEntryAtStoredOrigin(2, 13, 171, offsetX, offsetY, 52);
        texDrawTableEntryAtStoredOrigin(2, 13, 222, offsetX, offsetY, 53);
        if (panel->styled == 1) {
            efctSetSpeed(panel->position.alpha * speed);
            RenderCtxA *render = g_renderCtx;
            u32 blend = packNibblesAndByte(6, 1, 0);
            renderCtxSetB(render, blend);
            texDrawTableEntryAtStoredOrigin(2, 13, 222, offsetX, offsetY, 54);
            render = g_renderCtx;
            blend = packNibblesAndByte(6, 7, 0);
            renderCtxSetB(render, blend);
            efctSetSpeed(speed);
        }
        texDrawTableEntryAtStoredOrigin(2, 13, background, x, y, 55);
        texDrawTableEntryAtStoredOrigin(2, 13, foreground, offsetX, offsetY, 56);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 13, 221, x, y, 44);
        texDrawTableEntryAtStoredOrigin(2, 13, background, x, y, 45);
        texDrawTableEntryAtStoredOrigin(2, 13, foreground, x, y, 46);
    }
    efctSetSpeed(1.0f);
}
}
