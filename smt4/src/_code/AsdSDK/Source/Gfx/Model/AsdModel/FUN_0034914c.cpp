/* NON_MATCHING: retail packs the depth bias using different integer temporaries and accesses merged graphics globals through their owning bases. */
#include "shard/W6_W6Match8_GpuDepth.h"

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
extern "C" {
void FUN_002c35b0(u32 flags);
void asdGxCommandListStartRecord(u32 list);
extern u32 DAT_004720f0;
extern u32 DAT_004dad90;

// Bind a material and encode its negated depth bias into the GPU's float24 format.
void FUN_0034914c(const ModelDrawSelection *selection, ModelMaterialContext *context)
{
    FUN_002c35b0(0);
    ModelDrawMaterial *material = context->materials[selection->materialIndex];
    context->materialIndex = selection->materialIndex;
    if (context->current != material) {
        context->current = material;
        if (material->depthBias == 0.0f) {
            DAT_004720f0 = 0;
        } else {
            GpuFloatEncoding encoding;
            encoding.value = -material->depthBias;
            u32 sign = encoding.bits & 0x80000000 ? 0x800000 : 0;
            DAT_004720f0 = sign;
            u32 magnitude = encoding.bits & 0x7fffffff;
            u32 exponent = 0;
            if (magnitude) {
                exponent = (magnitude >> 23) - 64;
                if (exponent < 0) {
                    asdGxCommandListStartRecord(DAT_004dad90);
                    return;
                }
                if (exponent >= 128) {
                    DAT_004720f0 = 0x7f0000;
                    asdGxCommandListStartRecord(DAT_004dad90);
                    return;
                }
            }
            DAT_004720f0 = ((encoding.bits & 0x7fffff) >> 7) | sign | ((exponent & 0x7f) << 16);
        }
    }
    asdGxCommandListStartRecord(DAT_004dad90);
}
}
