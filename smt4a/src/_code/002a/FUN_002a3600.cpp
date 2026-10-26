/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 62 diff lines remain, scheduling/register allocation only. */
#include "camp/CommonBg.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match7_QuadVectors.h"
#include "Model/MoriModelShadowMap.h"
#include "util/skinObjectUpdateMatrices.h"

extern "C" {
extern CommonBgGlobals g_commonBg;
s32 FUN_001692ac(s32 enabled, s32 mode);
void FUN_00164b5c(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags);
void quadSetOrderedVectors(const QuadVector *first, const QuadVector *second,
    const QuadVector *third, const QuadVector *fourth, s32 mode, s32 enabled);
void renderCtxResetColorScale(RenderCtxA *context);

s32 FUN_002a3600()
{
    // These flags extend beyond the shared one-word owner prefix.
    struct OwnerView { CommonBgOwner prefix; u32 unk04; u32 enabled; s32 mode; };
    const OwnerView *owner = reinterpret_cast<const OwnerView *>(g_commonBg.owner);
    if (owner != NULL && owner->enabled != 0) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        if (owner->mode != 1) {
            QuadVector corners[4];
            for (s32 index = 0; index < 4; ++index) {
                corners[index].xyz.x = 1.0f;
                corners[index].xyz.y = 1.0f;
                corners[index].xyz.z = 1.0f;
                corners[index].w = 1.0f;
            }
            quadSetOrderedVectors(&corners[0], &corners[1], &corners[2], &corners[3], 0, 1);
            FUN_001835b4(2, 9, 0, 0, 0, 1);
        } else {
            FUN_00164b5c(2, 9, 0, 0, 0, 1);
        }
        renderStackPop(&g_renderCtx->stackA);
        skinObjectUpdateMatrices(reinterpret_cast<SkinObject *>(g_renderCtx));
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}
