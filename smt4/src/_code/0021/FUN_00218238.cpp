#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void gfxSelectStatusIconPair(u32 id, s32 *firstOut, s32 *secondOut, s32 flag);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
}

// The panel being drawn: an offset vector at 0xac and a mode word at 0x3048.
struct SpritePanel {
    u8 unk0000[0xac];
    UiSpriteState offset;   // 0x0ac vec2 object
    u8 unk00e0[0x2F10];
    s32 mode;          // 0x3048
};

static __inline void setTitleRenderState(RenderCtx *context, s32 state)
{
    RenderStateStack *stack = context->stacks + RENDER_STACK_B;
    s32 previous = stack->entries[stack->count];
    stack->entries[stack->count] = state;
    if (stack->dirty || previous != state) {
        stack->apply(state);
        stack->dirty = 0;
    }
}

// Draws the three sprites of a panel entry at (x, y); with `shadow` set, they are drawn at an animated offset with
// the title render state switched around the shadow sprite.
extern "C" void FUN_00218238(SpritePanel *panel, u32 id, s32 x, s32 y, s32 shadow)
{
    s32 first = 0;
    s32 second = 0;
    gfxSelectStatusIconPair(id, &first, &second, shadow);
    if (shadow != 0) {
        s32 offsetX = 0;
        s32 offsetY = 0;
        if (panel->mode == 1) {
            offsetX = vec2GetXInt(&panel->offset);
            offsetY = vec2GetYInt(&panel->offset);
        }
        texDrawTableEntryAtStoredOrigin(2, 0x15, 0xde, x + offsetX, y + offsetY, 0x35);
        if (panel->mode == 1) {
            efctSetSpeed(vec2GetSpeed(&panel->offset));
            setTitleRenderState(g_titleScene, packNibblesAndByte(6, 1, 0));
            texDrawTableEntryAtStoredOrigin(2, 0x15, 0xde, x + offsetX, y + offsetY, 0x36);
            setTitleRenderState(g_titleScene, packNibblesAndByte(6, 7, 0));
            efctSetSpeed(1.0f);
        }
        texDrawTableEntryAtStoredOrigin(2, 0x15, second, x, y, 0x37);
        texDrawTableEntryAtStoredOrigin(2, 0x15, first, x + offsetX, y + offsetY, 0x38);
        return;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x15, 0xdd, x, y, 0x2c);
    texDrawTableEntryAtStoredOrigin(2, 0x15, second, x, y, 0x2d);
    texDrawTableEntryAtStoredOrigin(2, 0x15, first, x, y, 0x2e);
}
