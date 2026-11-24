#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include <string.h>

namespace {
struct DebugMapBox {
    f32 minimumX, minimumY, minimumZ;
    f32 maximumX, maximumY, maximumZ;
    u32 flags;
};
struct DebugMapBoxes {
    DebugMapBox boxes[256];
    s32 count;
};
struct DebugMapBoxPalette {
    u8 unk00[0x30];
    u32 colors[12];
};
typedef char DebugMapBoxesLayoutCheck[sizeof(DebugMapBox) == 0x1C &&
    offsetof(DebugMapBoxes, count) == 0x1C00 ? 1 : -1];
}

extern "C" {
extern DebugMapBoxes g_regionTable;
extern const DebugMapBoxPalette DAT_00532240;
void gxEmitColoredQuad(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor,
    f32 firstX, f32 firstY, f32 firstZ, f32 secondX, f32 secondY, f32 secondZ,
    f32 thirdX, f32 thirdY, f32 thirdZ, f32 fourthX, f32 fourthY, f32 fourthZ);

// Draw the queued map bounds in cycling colors on a plane above the supplied height.
void FUN_003578a0(f32 height)
{
    u32 colors[12];
    memcpy(colors, DAT_00532240.colors, sizeof(colors));
    DebugMapBoxes *map = &g_regionTable;
    if (map->count != 0) {
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, renderCtxPackPassFlags(5, 1));
        renderCtxSelectTexture(g_renderCtx, 0);
        s32 index = 0;
        if (map->count > 0) {
            height += 100.0f;
            for (; index < map->count; ++index) {
                const DebugMapBox *box = &map->boxes[index];
                f32 minimumX = box->minimumX;
                f32 minimumZ = box->minimumZ;
                f32 maximumZ = box->maximumZ;
                f32 maximumX = box->maximumX;
                u32 color = colors[index % 12] | 0x70;
                gxEmitColoredQuad(color, color, color, color,
                    minimumX, height, minimumZ,
                    minimumX, height, maximumZ,
                    maximumX, height, minimumZ,
                    maximumX, height, maximumZ);
            }
        }
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    }
}
}
