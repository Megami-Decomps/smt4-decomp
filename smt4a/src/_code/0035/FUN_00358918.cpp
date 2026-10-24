/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 32 diff lines remain, scheduling/register allocation only. */
#include "camp/RenderCtx.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {
void FUN_00157558(RenderCtxA *context);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 order);
void FUN_00183bb0();
s32 FUN_001692ac(u32 kind, u32 flags);
extern RenderCtxA *g_renderCtx;
extern StaffRollWork *g_staffRoll;

// Draw all twelve staff-roll markers under a temporary render state.
u32 FUN_00358918()
{
    // Apocalypse's x/y pairs straddle the IV prefix's byte padding; do not realign that layout.
    struct Point { f32 x, y; };
    struct PointView { u8 prefix[8]; Point points[12]; };
    const PointView *roll = reinterpret_cast<const PointView *>(g_staffRoll);
    FUN_00183bb0();
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    for (u32 index = 0; index < 12; ++index) {
        FUN_001835b4(2, 0x29, index * 1000, static_cast<s32>(roll->points[index].x),
                     static_cast<s32>(roll->points[index].y), 2);
    }
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
