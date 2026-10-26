/* NON_MATCHING: material/camera selection now matches retail; the float24 depth-bias packing schedules its sign/exponent/fraction extraction after the zero test (retail extracts all three first and shifts the fraction in each arm). */
#include "gfx/ModelDepthBias.h"

struct ModelDrawMaterial {
    u8 unk000[0x294];
    f32 depthBias; // 0x294
};
struct ModelDrawSelection {
    u8 unk00[8];
    s32 materialIndex; // 0x08
};
struct ModelMaterialContext {
    u8 unk00[0xa4];
    ModelDrawMaterial *current; // 0xa4
    u8 unkA8[4];
    ModelDrawMaterial **materials; // 0xac
    u8 unkB0[8];
    s32 materialIndex; // 0xb8
};
// The recording state of one scene pass (0x18 bytes; the pass table is labelled g_asdLightCount).
struct ScenePassRecording {
    u8 unk00[0x10];
    u32 recorder; // 0x10
    u8 unk14[4];
};

extern "C" {
void FUN_002c35b0(u32 flags);
void asdGxCommandListStartRecord(u32 list);
extern u32 DAT_004720f0;
extern ScenePassRecording g_asdLightCount[2];

// Makes material `index` current and, when it changed, loads its negated depth bias in the GPU's float24 format.
static __inline void modelSelectMaterial(ModelMaterialContext *context, s32 index)
{
    ModelDrawMaterial *material = context->materials[index];
    context->materialIndex = index;
    if (context->current != material) {
        context->current = material;
        if (material->depthBias == 0.0f) {
            DAT_004720f0 = 0;
        } else {
            DAT_004720f0 = gpuEncodeDepthBias(-material->depthBias);
        }
    }
}

// Bind the selected material, then restart recording on the first pass's command list.
void FUN_0034914c(const ModelDrawSelection *selection, ModelMaterialContext *context)
{
    FUN_002c35b0(0);
    modelSelectMaterial(context, selection->materialIndex);
    asdGxCommandListStartRecord(g_asdLightCount[0].recorder);
}
}
