/* NON_MATCHING: recovered signed panel flag, speed accessors and offset pair; clip-rectangle argument scheduling and cached-state scratch registers still differ. */
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct GaugePanelView {
    u8 unk0000[0x598];
    UiSpriteState firstPosition;
    u8 unk0624[0x12B8 - 0x624];
    UiSpriteState position;
    u8 unk1344[0x3890 - 0x1344];
    s32 slot;
    u8 unk3894[0x25];
    s8 hidden;
    u8 unk38BA[0x41A0 - 0x38BA];
    struct Offset { s32 x; s32 y; } offset;
};
typedef char GaugePanelOffsets[
    offsetof(GaugePanelView, firstPosition) == 0x598 &&
    offsetof(GaugePanelView, position) == 0x12B8 &&
    offsetof(GaugePanelView, slot) == 0x3890 &&
    offsetof(GaugePanelView, hidden) == 0x38B9 &&
    offsetof(GaugePanelView, offset) == 0x41A0 &&
    sizeof(GaugePanelView) == 0x41A8 ? 1 : -1];

extern "C" {
void efctSetSpeed(f32 speed);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 flag);
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
    s32 x = vec2GetXInt((&view->position));
    s32 y = vec2GetYInt((&view->position));
    f32 scale = vec2GetSpeed((&view->position));
    GaugePanelView::Offset offset = view->offset;
    x += offset.x;
    y += offset.y;
    efctSetSpeed(vec2GetSpeed((&view->firstPosition)) * scale);
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(13, view->slot + 0x52);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, 13, 0x4F, sprite->x + x, sprite->y + y, 0x2E);
    texDrawTableEntryAtStoredOrigin(2, 13, 0x4E, sprite->x + x, sprite->y + y - shrink, 0x2E);
    renderStackSet(&g_renderCtx->scissor, 3);
    gxSetMirroredClippedScissor(sprite->x + x, sprite->y + y, sprite->placement->width, sprite->placement->height - shrink, 1);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, 13, 0x50, sprite->x + x, sprite->y + y, 0x2E);
    texDrawTableEntryAtStoredOrigin(2, 13, 0x51, sprite->x + x, sprite->y + y, 0x2E);
    renderStackSet(&g_renderCtx->scissor, 0);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}
