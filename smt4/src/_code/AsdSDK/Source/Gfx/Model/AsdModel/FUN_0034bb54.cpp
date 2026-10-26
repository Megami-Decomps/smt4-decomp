/* NON_MATCHING: camera selection now matches retail; the float24 depth-bias packing schedules its sign/exponent/fraction extraction after the zero test (retail extracts all three first and shifts the fraction in each arm), and the render flags are loaded into r1 where retail uses r0. */
#include "AsdSDK/Source/Gfx/Model/AsdModelRender.h"
#include "shard/S1ListPanel.h"
#include "gfx/ModelDepthBias.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {
void nw_gfx_RenderContext_ResetState_2B7478(RenderCtx *context);
void FUN_00364e28(RenderCtx *context, void *target);
void grRenderTargetClear(RenderCtx *context, u32 mask, const ShaderLightVector4 *color);
void FUN_002ab92c(RenderCtx *context, void *camera, s32 mode);
void FUN_002a4908(RenderCtx *context, s32 mode);
extern u32 DAT_004720f0;
}

/* The depth field lies beyond the existing shared camera prefixes. */
struct CameraDepthView {
    /* 0x000 */ u8 unk000[0x294];
    /* 0x294 */ f32 depthOffset;
};
typedef char CameraDepthOffsetCheck[offsetof(CameraDepthView, depthOffset) == 0x294 ? 1 : -1];
struct ModelPassContextView {
    u8 unk00[0x14];
    u32 state;
    u8 unk18[8];
    u32 flags;
    u8 unk24[0x80];
    void *camera;
    u8 unkA8[4];
    void **cameras;
    u8 unkB0[8];
    s32 cameraIndex;
};
typedef char ModelPassContextOffsets[
    offsetof(ModelPassContextView, state) == 0x14 &&
    offsetof(ModelPassContextView, flags) == 0x20 &&
    offsetof(ModelPassContextView, camera) == 0xA4 &&
    offsetof(ModelPassContextView, cameras) == 0xAC &&
    offsetof(ModelPassContextView, cameraIndex) == 0xB8 ? 1 : -1];

/* Makes camera `index` current and, when it changed, loads its depth offset. */
static __inline void selectCamera(ModelPassContextView *modelPass, s32 index)
{
    void *camera = modelPass->cameras[index];
    modelPass->cameraIndex = index;
    if (modelPass->camera != camera) {
        modelPass->camera = camera;
        f32 depth = ((CameraDepthView *)camera)->depthOffset;
        if (depth == 0.0f) {
            DAT_004720f0 = 0;
        } else {
            DAT_004720f0 = gpuEncodeDepthBias(-depth);
        }
    }
}

extern "C" {
/* Resets the pass target, clears it, and installs the selected camera and render flags. */
void FUN_0034bb54(AsdModelRenderPass *pass, RenderCtx *context)
{
    ModelPassContextView *modelPass = reinterpret_cast<ModelPassContextView *>(context);
    nw_gfx_RenderContext_ResetState_2B7478(context);
    FUN_00364e28(context, pass->target);
    ShaderLightVector4 clearColor(1.0f, 1.0f, 1.0f, 1.0f);
    grRenderTargetClear(context, 0x4000, &clearColor);
    selectCamera(modelPass, pass->cameraIndex);
    modelPass->flags = pass->flags;
    FUN_002ab92c(context, modelPass->camera, 0);
    FUN_002a4908(context, 0);
    modelPass->state = 3;
}
}
