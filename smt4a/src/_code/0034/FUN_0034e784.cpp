/* NON_MATCHING: retail keeps the scale factor in s16 across the vec2 getters and addresses the panel flag through panel+0x3800; register allocation and loop-free block order differ. */
#include "camp/RenderCtx.h"

#define PANEL_AT(panel, type, offset) (*reinterpret_cast<type *>(reinterpret_cast<u8 *>(panel) + (offset)))

/* The render context's extra cached state stack (beyond RenderCtxA's known size). */
static __inline RenderStateStack *renderCtxStackE(RenderCtxA *context)
{
    return reinterpret_cast<RenderStateStack *>(reinterpret_cast<u8 *>(context) + 0x1318);
}

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
void FUN_001835b4(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
void FUN_0035ae58(s32 x, s32 y, s32 width, s32 height, s32 flag);
s32 vec2GetXInt(void *vector);
s32 vec2GetYInt(void *vector);
u32 packNibblesAndByte(u32 high, u32 low, u32 byte);
struct GaugeSprite {
    u8 unk00[8];
    s16 x;
    s16 y;
    s16 *size;
};
GaugeSprite *FUN_001834a4(u32 table, s32 frame);
}

/* Draw the two-part gauge frame at the slot position, with the lower part shortened by `shrink` rows. */
extern "C" void FUN_0034e784(u8 *panel, s32 rows)
{
    if (PANEL_AT(panel, u8, 0x38B9) != 0)
        return;
    s32 shrink = rows * 8;
    if (shrink > 40)
        shrink = 40;
    if (PANEL_AT(panel, s32, 0x3890) >= 4)
        return;
    void *position = panel + 0x12B8;
    s32 x = vec2GetXInt(position);
    s32 y = vec2GetYInt(position);
    f32 scale = PANEL_AT(panel, f32, 0x12B8 + 0x20);
    x += PANEL_AT(panel, s32, 0x41A0);
    y += PANEL_AT(panel, s32, 0x41A4);
    efctSetSpeed(PANEL_AT(panel, f32, 0x598 + 0x20) * scale);
    GaugeSprite *sprite = FUN_001834a4(13, PANEL_AT(panel, s32, 0x3890) + 0x52);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    FUN_001835b4(2, 13, 0x4F, sprite->x + x, sprite->y + y, 0x2E);
    FUN_001835b4(2, 13, 0x4E, sprite->x + x, sprite->y + y - shrink, 0x2E);
    renderStackSet(renderCtxStackE(g_renderCtx), 3);
    FUN_0035ae58(sprite->x + x, sprite->y + y, sprite->size[0], sprite->size[1] - shrink, 1);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    FUN_001835b4(2, 13, 0x50, sprite->x + x, sprite->y + y, 0x2E);
    FUN_001835b4(2, 13, 0x51, sprite->x + x, sprite->y + y, 0x2E);
    renderStackSet(renderCtxStackE(g_renderCtx), 0);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}
