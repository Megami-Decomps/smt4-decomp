/* NON_MATCHING: retail contains a provably unreachable registerBlockRequestGroups branch after MOV r0,#0; dead source code is not reproduced. */
#include "shard/S1GfxModel.h"

namespace {
struct ModelLightVisitorView {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 parameters[1];
};
struct ModelLightPassOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void* renderContext;
};
struct ModelLightPassSettings {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ u32 pendingPass;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ u32 node;
    /* 0x24 */ u32 modeFirst;
    /* 0x28 */ u32 modeSecond;
    /* 0x2C */ u8 unk2C[0x58];
    /* 0x84 */ u32 slotFlags;
    /* 0x88 */ u8 unk88[4];
    /* 0x8C */ u32 light;
    /* 0x90 */ u8 unk90[4];
    /* 0x94 */ ModelLightVisitorView* visitor;
    /* 0x98 */ u8 unk98[4];
    /* 0x9C */ u32 visitorState;
    /* 0xA0 */ u8 unkA0[0x24];
    /* 0xC4 */ ModelLightPassOwner* owner;
    /* 0xC8 */ u8 unkC8[4];
    /* 0xCC */ u32 slotState;
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
extern GfxModelState g_gfxSettings;
extern ModelLightPassState g_asdLightCount;
extern void* g_renderCtx;
void FUN_0017712c(void*, u32, u32, u32);
void FUN_00197eb0(void*, u32);
void sceneTraverserVisit(u32, void*);
void FUN_00176800(void*, u32, u32);
void FUN_0018e9d8(void*, u32);
s32 FUN_001696f4(void);
void FUN_00176e84(void*, u32, u32, u32);
void FUN_0017721c(void*, u32, u32, u32);
void nw_gfx_RenderContext_ResetState_2B7478(void*);
void FUN_001575cc(void*);

/* Render the model lighting pass, visiting the optional transform builder around it. */
void asdModelRenderLightPass(void)
{
    ModelLightPassSettings* settings = reinterpret_cast<ModelLightPassSettings*>(&g_gfxSettings);
    if (!settings->enabled || (g_asdLightCount.count <= 0 && !(settings->slotFlags & 1))) {
        return;
    }
    void* savedContext = settings->owner->renderContext;
    FUN_0017712c(settings->owner, settings->light, settings->node, settings->slotState);
    if (g_asdLightCount.visitEnabled && !g_asdLightCount.visitSuppressed) {
        FUN_00197eb0(settings->visitor->parameters, settings->visitorState);
        sceneTraverserVisit(settings->light, settings->visitor);
    }
    if (!g_asdLightCount.skipPass) {
        FUN_00176800(settings->owner, settings->light, settings->slotState);
    }
    if (g_asdLightCount.visitEnabled && !g_asdLightCount.visitSuppressed) {
        FUN_0018e9d8(settings->visitor, settings->visitorState);
        sceneTraverserVisit(settings->light, settings->visitor);
    }
    if (FUN_001696f4() != 1) {
        FUN_00176e84(settings->owner, settings->node, 1, 0);
    } else {
        FUN_0017721c(settings->owner, settings->modeFirst, settings->modeSecond, 0);
        nw_gfx_RenderContext_ResetState_2B7478(savedContext);
    }
    FUN_001575cc(g_renderCtx);
    settings->pendingPass = 0;
}
} // extern "C"
