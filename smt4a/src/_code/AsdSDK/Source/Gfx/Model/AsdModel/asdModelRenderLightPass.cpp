/* NON_MATCHING: the debug hook's test is written as the call (sceneQueryFalse, the mov r0,#0 stub armlink inlined; the
 * smt4 twin FUN_00117604 calls it); the rest of the pass schedules and allocates differently (107 lines). */
#include "shard/S1GfxModel.h"
#include "gfx/GfxSettings.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "camp/RenderCtxA.h"
#include "gfx/GfxSettings.h"

namespace {
struct ModelLightVisitorView {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 parameters[1];
};
struct ModelLightPassOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void* renderContext;
};
struct ModelLightPassState {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 visitEnabled;
    /* 0x05 */ u8 visitSuppressed;
    /* 0x06 */ u8 unk06[0xE];
    /* 0x14 */ u8 skipPass;
};
}

extern "C" {
extern ModelLightPassState g_asdLightCount;
void FUN_0017712c(void*, void*, u32, u32);
void FUN_00197eb0(void*, u32);
void sceneTraverserVisit(void*, void*);
void FUN_00176800(void*, void*, u32);
void nw_gfx_SceneNode_AttachChild(void*, u32);
void FUN_00176e84(void*, u32, u32, u32);
void FUN_0017721c(void*, u32, u32, u32);
void nw_gfx_RenderContext_ResetState_2B7478(void*);
void renderCtxResetFrameState(RenderCtxA *);
s32 sceneQueryFalse(void);
void registerBlockRequestGroups(u32 groups);

/* Slot 0's pass owner (its render context at +4) and transform builder (its visit parameters at +0x10). */
static inline ModelLightPassOwner* passOwner(const GfxSettings* settings)
{
    return reinterpret_cast<ModelLightPassOwner*>(settings->owner[0]);
}
static inline ModelLightVisitorView* passVisitor(const GfxSettings* settings)
{
    return static_cast<ModelLightVisitorView*>(settings->transformBuilder[0]);
}
/* Render the model lighting pass, visiting the optional transform builder around it. */
void asdModelRenderLightPass(void)
{
    GfxSettings* settings = &g_gfxSettings;
    if (!settings->lightingEnabled || (g_asdLightCount.count <= 0 && !(settings->slotFlags[0] & 1))) {
        return;
    }
    void* savedContext = passOwner(settings)->renderContext;
    FUN_0017712c(passOwner(settings), settings->attachInfo[0], settings->node0, settings->slotState[0]);
    if (g_asdLightCount.visitEnabled && !g_asdLightCount.visitSuppressed) {
        FUN_00197eb0(passVisitor(settings)->parameters, settings->sceneGroupRoot[0]);
        sceneTraverserVisit(settings->attachInfo[0], passVisitor(settings));
    }
    if (!g_asdLightCount.skipPass) {
        FUN_00176800(passOwner(settings), settings->attachInfo[0], settings->slotState[0]);
    }
    if (g_asdLightCount.visitEnabled && !g_asdLightCount.visitSuppressed) {
        nw_gfx_SceneNode_AttachChild(passVisitor(settings), settings->sceneGroupRoot[0]);
        sceneTraverserVisit(settings->attachInfo[0], passVisitor(settings));
    }
    if (!(gxIsStereoscopic3dEnabled() != 1)) {
        FUN_0017721c(passOwner(settings), settings->unk24, settings->unk28, 0);
        nw_gfx_RenderContext_ResetState_2B7478(savedContext);
    } else {
        FUN_00176e84(passOwner(settings), settings->node0, 1, 0);
    }
    if (sceneQueryFalse() != 0) {
        registerBlockRequestGroups(0x3fff);
    }
    renderCtxResetFrameState(g_renderCtx);
    settings->pendingPass = 0;
}
} // extern "C"
