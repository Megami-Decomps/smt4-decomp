/* NON_MATCHING: retail uses a separate model-slot address point and retains a fixed-zero debug-dispatch test whose original hook is unknown. */
#include "common.h"
#include "util/SceneTraverserVisit.h"

struct RenderSceneOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *context;
};
struct RenderSceneBuilder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 state[1];
};
struct RenderSceneSettings {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[0x17];
    /* 0x18 */ u32 pending;
    /* 0x1C */ u8 unk1c[0x10];
    /* 0x2C */ u32 mask;
    /* 0x30 */ u8 unk30[0x58];
    /* 0x88 */ u32 flags;
    /* 0x8C */ u32 unk8c;
    /* 0x90 */ void *traverser;
    /* 0x94 */ u32 unk94;
    /* 0x98 */ RenderSceneBuilder *builder;
    /* 0x9C */ u32 unk9c;
    /* 0xA0 */ void *tree;
    /* 0xA4 */ u8 unka4[0x20];
    /* 0xC4 */ u32 ownerCount;
    /* 0xC8 */ RenderSceneOwner *owner;
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
extern RenderSceneSettings g_gfxSettings;
extern RenderSceneLightState g_asdLightCount;
extern void *g_renderCtx;
void FUN_0017712c(RenderSceneOwner *owner, void *traverser, u32 mask, s32 enabled);
void FUN_00197eb0(void *builderState, void *tree);
void FUN_00176800(RenderSceneOwner *owner, void *traverser, s32 enabled);
void FUN_0018e9d8(void *builder, void *tree);
void FUN_00176e84(RenderSceneOwner *owner, u32 mask, s32 mode, s32 flags);
void nw_gfx_RenderContext_ResetState_2B7478(void *context);
void FUN_001575cc(void *context);
}

/* Traverse the active model scene and reset the render context after submission. */
extern "C" void renderSceneUpdate(void)
{
    if (!g_gfxSettings.enabled || (g_asdLightCount.count <= 0 && !(g_gfxSettings.flags & 1)))
        return;
    void *context = g_gfxSettings.owner->context;
    FUN_0017712c(g_gfxSettings.owner, g_gfxSettings.traverser, g_gfxSettings.mask, 1);
    if (g_asdLightCount.visit && !g_asdLightCount.skipVisit) {
        FUN_00197eb0(g_gfxSettings.builder->state, g_gfxSettings.tree);
        sceneTraverserVisit(g_gfxSettings.traverser, g_gfxSettings.builder);
    }
    if (!g_asdLightCount.skipOwner)
        FUN_00176800(g_gfxSettings.owner, g_gfxSettings.traverser, 1);
    if (g_asdLightCount.visit && !g_asdLightCount.skipVisit) {
        FUN_0018e9d8(g_gfxSettings.builder, g_gfxSettings.tree);
        sceneTraverserVisit(g_gfxSettings.traverser, g_gfxSettings.builder);
    }
    FUN_00176e84(g_gfxSettings.owner, g_gfxSettings.mask, 2, 0);
    nw_gfx_RenderContext_ResetState_2B7478(context);
    FUN_001575cc(g_renderCtx);
    g_gfxSettings.pending = 0;
}
