#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_00224ce0(u32 id, s32 *firstOut, s32 *secondOut, s32 flag);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(void *vec);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
}

// The panel being drawn: an offset vector at 0xac and a mode word at 0x3048.
struct SpritePanel {
    u8 unk0000[0xac];
    u8 offset[0x34];   // 0x0ac vec2 object
    u8 unk00e0[0x2f68];
    s32 mode;          // 0x3048
};

static __inline void setTitleRenderState(RenderCtx *context, s32 state)
{
    RenderStateStack *stack = &context->stackB;
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
    FUN_00224ce0(id, &first, &second, shadow);
    if (shadow != 0) {
        s32 offsetX = 0;
        s32 offsetY = 0;
        if (panel->mode == 1) {
            offsetX = vec2GetXInt(panel->offset);
            offsetY = vec2GetYInt(panel->offset);
        }
        FUN_002bf288(2, 0x15, 0xde, x + offsetX, y + offsetY, 0x35);
        if (panel->mode == 1) {
            efctSetSpeed(vec2GetSpeed(panel->offset));
            setTitleRenderState(g_titleScene, packNibblesAndByte(6, 1, 0));
            FUN_002bf288(2, 0x15, 0xde, x + offsetX, y + offsetY, 0x36);
            setTitleRenderState(g_titleScene, packNibblesAndByte(6, 7, 0));
            efctSetSpeed(1.0f);
        }
        FUN_002bf288(2, 0x15, second, x, y, 0x37);
        FUN_002bf288(2, 0x15, first, x + offsetX, y + offsetY, 0x38);
        return;
    }
    FUN_002bf288(2, 0x15, 0xdd, x, y, 0x2c);
    FUN_002bf288(2, 0x15, second, x, y, 0x2d);
    FUN_002bf288(2, 0x15, first, x, y, 0x2e);
}
