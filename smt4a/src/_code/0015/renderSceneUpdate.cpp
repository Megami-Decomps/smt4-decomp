/* NON_MATCHING: retail uses a separate model-slot address point; the fixed-zero debug-dispatch test is the call to the
 * mov r0,#0 stub sceneQueryFalse armlink inlined (the smt4 twin FUN_0011891c calls it). */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "camp/RenderCtxA.h"
#include "gfx/GfxSettings.h"

struct RenderSceneOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *context;
};
struct RenderSceneBuilder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 state[1];
};
struct RenderSceneLightState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 count;
    /* 0x1C */ u8 visit;
    /* 0x1D */ u8 skipVisit;
    /* 0x1E */ u8 unk1e[0xe];
    /* 0x2C */ u8 skipOwner;
};

extern "C" {
extern RenderSceneLightState g_asdLightCount;
void FUN_0017712c(ModelOwner *owner, void *traverser, u32 mask, s32 enabled);
void FUN_00197eb0(void *builderState, u32 tree);
void FUN_00176800(ModelOwner *owner, void *traverser, s32 enabled);
void nw_gfx_SceneNode_AttachChild(void *builder, u32 tree);
void FUN_00176e84(ModelOwner *owner, u32 mask, s32 mode, s32 flags);
void nw_gfx_RenderContext_ResetState_2B7478(void *context);
void renderCtxResetFrameState(RenderCtxA *context);
s32 sceneQueryFalse(void);
void registerBlockRequestGroups(u32 groups);
}

/* Traverse the active model scene and reset the render context after submission. */
extern "C" void renderSceneUpdate(void)
{
    if (!g_gfxSettings.lightingEnabled || (g_asdLightCount.count <= 0 && !(g_gfxSettings.slotFlags[1] & 1)))
        return;
    // The scene owner keeps its render context at +4.
    void *context = reinterpret_cast<RenderSceneOwner *>(g_gfxSettings.owner[1])->context;
    FUN_0017712c(g_gfxSettings.owner[1], g_gfxSettings.attachInfo[1], g_gfxSettings.node1, 1);
    if (g_asdLightCount.visit && !g_asdLightCount.skipVisit) {
        FUN_00197eb0(static_cast<RenderSceneBuilder *>(g_gfxSettings.transformBuilder[1])->state, g_gfxSettings.sceneGroupRoot[1]);
        sceneTraverserVisit(g_gfxSettings.attachInfo[1], g_gfxSettings.transformBuilder[1]);
    }
    if (!g_asdLightCount.skipOwner)
        FUN_00176800(g_gfxSettings.owner[1], g_gfxSettings.attachInfo[1], 1);
    if (g_asdLightCount.visit && !g_asdLightCount.skipVisit) {
        nw_gfx_SceneNode_AttachChild(g_gfxSettings.transformBuilder[1], g_gfxSettings.sceneGroupRoot[1]);
        sceneTraverserVisit(g_gfxSettings.attachInfo[1], g_gfxSettings.transformBuilder[1]);
    }
    FUN_00176e84(g_gfxSettings.owner[1], g_gfxSettings.node1, 2, 0);
    nw_gfx_RenderContext_ResetState_2B7478(context);
    if (sceneQueryFalse() != 0)
        registerBlockRequestGroups(0x3fff);
    renderCtxResetFrameState(g_renderCtx);
    g_gfxSettings.pending = 0;
}
