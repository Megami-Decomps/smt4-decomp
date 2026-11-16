#include "shard/S1ListPanel.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <stddef.h>
#include <string.h>

struct DebugSpatialBounds {
    BattleVector3 minimum;
    BattleVector3 maximum;
    u8 unk18[8];
};
struct DebugSpatialBoundsQueue {
    DebugSpatialBounds bounds[200];
    s32 count;
};
struct DebugBoundsPalette { u32 colors[12]; };
typedef char DebugSpatialBoundsOffsets[sizeof(DebugSpatialBounds) == 0x20 &&
    offsetof(DebugSpatialBoundsQueue, count) == 0x1900 ? 1 : -1];
extern "C" {
extern RenderCtxA *g_renderCtx;
extern DebugSpatialBoundsQueue DAT_00611874;
extern const DebugBoundsPalette DAT_00532240;
u32 FUN_001692ac(u32, u32);
void FUN_00280a08(u32, u32, u32, u32,
                 f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

// Draw the queued spatial bounds in cycling colors on a plane above the supplied height.
void FUN_00379a48(f32 height)
{
    u32 colors[12];
    memcpy(colors, DAT_00532240.colors, sizeof(colors));
    DebugSpatialBoundsQueue *queue = &DAT_00611874;
    if (queue->count != 0) {
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(5, 1));
        renderCtxSelectTexture(g_renderCtx, 0);
        s32 index = 0;
        if (queue->count > 0) {
            height += 100.0f;
            for (; index < queue->count; ++index) {
                const DebugSpatialBounds *bounds = &queue->bounds[index];
                f32 minimumX = bounds->minimum.x;
                f32 minimumZ = bounds->minimum.z;
                f32 maximumZ = bounds->maximum.z;
                f32 maximumX = bounds->maximum.x;
                u32 color = colors[index % 12] | 0x70;
                FUN_00280a08(color, color, color, color,
                    minimumX, height, minimumZ,
                    minimumX, height, maximumZ,
                    maximumX, height, minimumZ,
                    maximumX, height, maximumZ);
            }
        }
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
