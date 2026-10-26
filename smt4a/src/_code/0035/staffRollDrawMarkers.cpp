#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "StaffRoll/StaffRollMain.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
void efctSetSpeed(f32 speed);
void FUN_00183bb0();
s32 FUN_001692ac(u32 kind, u32 flags);
extern StaffRollWork *g_staffRoll;

// Draw all twelve staff-roll markers under a temporary render state.
u32 staffRollDrawMarkers()
{
    // Apocalypse's x/y pairs straddle the IV prefix's byte padding; do not realign that layout.
    struct Point { f32 x, y; };
    struct PointView { u8 prefix[8]; Point points[12]; };
    const PointView *roll = reinterpret_cast<const PointView *>(g_staffRoll);
    FUN_00183bb0();
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushACountedDirect(context, FUN_001692ac(1, 0));
    for (u32 index = 0; index < 12; ++index) {
        Point point = roll->points[index];
        s32 x = static_cast<s32>(point.x);
        s32 y = static_cast<s32>(point.y);
        FUN_001835b4(2, 0x29, index * 1000, x, y, 2);
    }
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
