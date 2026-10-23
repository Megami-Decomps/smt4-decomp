/* NON_MATCHING: Camera-array load scheduling and float24 sign/exponent registers differ from retail. */
#include "AsdSDK/Source/Gfx/Model/AsdModelRender.h"
#include "shard/S1ListPanel.h"
#include "shard/W6_W6Match8_GpuDepth.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {
void nw_gfx_RenderContext_ResetState_2B7478(RenderCtx *context);
void FUN_00364e28(RenderCtx *context, void *target);
void grRenderTargetClear(RenderCtx *context, u32 mask, const ShaderLightVector4 *color);
void FUN_002ab92c(RenderCtx *context, void *camera, s32 mode);
void FUN_002a4908(RenderCtx *context, s32 mode);
extern u32 DAT_004720f0;
}

/* Encodes the camera's signed depth offset in the GPU's float24 format. */
static __inline u32 encodeCameraDepth(f32 depth)
{
    GpuFloatEncoding encoding;
    encoding.value = depth;
    u32 sign = (encoding.bits & 0x80000000) != 0 ? 0x800000 : 0;
    s32 exponent = encoding.bits & 0x7FFFFFFF;
    if (exponent != 0) {
        exponent = encoding.ieee.exponent - 64;
        if (exponent < 0) {
            return sign;
        }
        if (exponent > 127) {
            return 0x7F0000;
        }
    }
    return (encoding.ieee.fraction >> 7) | sign | ((exponent & 127) << 16);
}

extern "C" {
/* Resets the pass target, clears it, and installs the selected camera and render flags. */
void FUN_0034bb54(AsdModelRenderPass *pass, RenderCtx *context)
{
    /* The depth field lies beyond the existing shared camera prefixes. */
    struct CameraDepthView {
        /* 0x000 */ u8 unk000[0x294];
        /* 0x294 */ f32 depthOffset;
    };
    typedef char CameraDepthOffsetCheck[offsetof(CameraDepthView, depthOffset) == 0x294 ? 1 : -1];
    nw_gfx_RenderContext_ResetState_2B7478(context);
    FUN_00364e28(context, pass->target);
    ShaderLightVector4 clearColor(1.0f, 1.0f, 1.0f, 1.0f);
    grRenderTargetClear(context, 0x4000, &clearColor);
    void *camera = context->modelPass.cameras[pass->cameraIndex];
    context->modelPass.cameraIndex = pass->cameraIndex;
    if (context->modelPass.camera != camera) {
        context->modelPass.camera = camera;
        f32 depth = ((CameraDepthView *)camera)->depthOffset;
        DAT_004720f0 = depth == 0.0f ? 0 : encodeCameraDepth(-depth);
    }
    context->modelPass.flags = pass->flags;
    FUN_002ab92c(context, context->modelPass.camera, 0);
    FUN_002a4908(context, 0);
    context->modelPass.state = 3;
}
}
