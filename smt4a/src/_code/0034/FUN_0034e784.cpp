/* NON_MATCHING: recovered signed panel flag, speed accessors and offset pair; clip-rectangle argument scheduling and cached-state scratch registers still differ. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "util/Vec2Fixed.h"
#include "util/Vec2Fixed.h"
#include "util/PackNibbles.h"

struct GaugePosition {
    u8 unk00[0x20];
    f32 speed;
};
struct GaugePanelView {
    u8 unk0000[0x598];
    GaugePosition firstPosition;
    u8 unk05BC[0x12B8 - 0x5BC];
    GaugePosition position;
    u8 unk12DC[0x3890 - 0x12DC];
    s32 slot;
    u8 unk3894[0x25];
    s8 hidden;
    u8 unk38BA[0x41A0 - 0x38BA];
    struct Offset { s32 x; s32 y; } offset;
};
struct GaugeRenderContext {
    RenderCtxA context;
    u8 unk12D8[0x40];
    RenderStateStack extraStack;
};
typedef char GaugePanelOffsets[
    offsetof(GaugePanelView, firstPosition) == 0x598 &&
    offsetof(GaugePanelView, position) == 0x12B8 &&
    offsetof(GaugePanelView, slot) == 0x3890 &&
    offsetof(GaugePanelView, hidden) == 0x38B9 &&
    offsetof(GaugePanelView, offset) == 0x41A0 &&
    sizeof(GaugePanelView) == 0x41A8 &&
    offsetof(GaugeRenderContext, extraStack) == 0x1318 ? 1 : -1];

/* The render context's extra cached state stack (beyond RenderCtxA's known size). */
static __inline RenderStateStack *renderCtxStackE(RenderCtxA *context)
{
    return &reinterpret_cast<GaugeRenderContext *>(context)->extraStack;
}

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
void FUN_0035ae58(s32 x, s32 y, s32 width, s32 height, s32 flag);
s32 vec2GetYInt(void *vector);
f32 vec2GetSpeed(const void *vector);
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
    GaugePanelView *view = reinterpret_cast<GaugePanelView *>(panel);
    if (view->hidden != 0)
        return;
    s32 shrink = rows * 8;
    if (shrink > 40)
        shrink = 40;
    if (view->slot > 3)
        return;
    s32 x = vec2GetXInt(&view->position);
    s32 y = vec2GetYInt(&view->position);
    f32 scale = vec2GetSpeed(&view->position);
    GaugePanelView::Offset offset = view->offset;
    x += offset.x;
    y += offset.y;
    efctSetSpeed(vec2GetSpeed(&view->firstPosition) * scale);
    GaugeSprite *sprite = FUN_001834a4(13, view->slot + 0x52);
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
