/* NON_MATCHING: global count and box base are materialized separately; stack-push, height addition and vertex/palette load scheduling differ. */
#include "camp/RenderCtx.h"
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
extern DebugMapBoxes DAT_00613178;
extern const DebugMapBoxPalette DAT_00532240;
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32 kind, u32 enabled);
void FUN_0016c4b8(RenderCtxA *context, u32 mode);
void FUN_00280a08(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor,
    f32 firstX, f32 firstY, f32 firstZ, f32 secondX, f32 secondY, f32 secondZ,
    f32 thirdX, f32 thirdY, f32 thirdZ, f32 fourthX, f32 fourthY, f32 fourthZ);

// Draw the queued map bounds in cycling colors on a plane above the supplied height.
void FUN_003578a0(f32 height)
{
    u32 colors[12];
    memcpy(colors, DAT_00532240.colors, sizeof(colors));
    if (DAT_00613178.count != 0) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(5, 1);
        renderStackPush(&context->stackA, state);
        FUN_0016c4b8(g_renderCtx, 0);
        f32 planeHeight = height + 100.0f;
        for (s32 index = 0; index < DAT_00613178.count; ++index) {
            const DebugMapBox *box = &DAT_00613178.boxes[index];
            u32 color = colors[index % 12] | 0x70;
            FUN_00280a08(color, color, color, color,
                box->minimumX, planeHeight, box->minimumZ,
                box->minimumX, planeHeight, box->maximumZ,
                box->maximumX, planeHeight, box->minimumZ,
                box->maximumX, planeHeight, box->maximumZ);
        }
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
