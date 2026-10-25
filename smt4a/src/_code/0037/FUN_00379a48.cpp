/* NON_MATCHING: palette tail copies, cached-state registers and bounds/count global-address grouping differ. */
#include "shard/S1ListPanel.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <stddef.h>

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
void FUN_0016c4b8(RenderCtxA *, u32);
void FUN_00280a08(u32, u32, u32, u32,
                 f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void FUN_00379a48(f32 height)
{
    DebugBoundsPalette palette = DAT_00532240;
    if (DAT_00611874.count) {
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(5, 1));
        FUN_0016c4b8(g_renderCtx, 0);
        for (s32 index = 0; index < DAT_00611874.count; ++index) {
            const DebugSpatialBounds *bounds = &DAT_00611874.bounds[index];
            u32 color = palette.colors[index % 12] | 0x70;
            f32 elevation = height + 100.0f;
            FUN_00280a08(color, color, color, color,
                bounds->minimum.x, elevation, bounds->minimum.z,
                bounds->minimum.x, elevation, bounds->maximum.z,
                bounds->maximum.x, elevation, bounds->minimum.z,
                bounds->maximum.x, elevation, bounds->maximum.z);
        }
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
