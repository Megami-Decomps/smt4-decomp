/* NON_MATCHING: record-prefix addressing and uniform-array offsets are hoisted differently; shared float20 encoding retains explicit zero-exponent initialization. */
#include "gfx/ShaderUniformUploads.h"
#include "gfx/ViewportEncoding.h"

namespace {
struct ShaderUniformBindingSource {
    u8 unk00[0x28];
    u8 type;
    u8 enabled;
    u8 flags;
    u8 binding;
    u8 unk2C[4];
    u32 values[4];
    u8 unk40[0xC];
    ShaderUniformData *geometry;
    ShaderUniformData *vertex;
    f32 minimum;
    f32 maximum;
};
typedef char ShaderUniformBindingSourceLayoutCheck[
    offsetof(ShaderUniformBindingSource, enabled) == 0x29 &&
    offsetof(ShaderUniformBindingSource, values) == 0x30 &&
    offsetof(ShaderUniformBindingSource, minimum) == 0x54 ? 1 : -1];
}

extern "C" void FUN_001940b0(const ShaderUniformBindingSource *source, ShaderUniformRecord **records,
    u32 index, s32 slot)
{
    index &= 0xFFFF;
    ShaderUniformBindingState *binding = &(*records)[index].binding;
    if (source->enabled == 0) {
        binding->enabled[slot] = 0;
        return;
    }
    binding->enabled[slot] = 1;
    if (source->type != 11) {
        binding->vertexEnabled[slot] = 0;
        (*records)[index].vertex[slot] = NULL;
    } else {
        binding->vertexEnabled[slot] = 1;
        (*records)[index].vertex[slot] = source->vertex;
        binding->firstBinding = source->binding & 0xF;
        binding->secondBinding = source->binding >> 4;
        binding->bindingFlags = *reinterpret_cast<const u8 *>(source->vertex) & 1;
    }
    if ((source->flags & 2) != 0) {
        binding->geometryEnabled[slot] = 1;
        const f32 scale = 1.0f / (source->maximum - source->minimum);
        const f32 bias = -(source->minimum * scale);
        binding->slots[slot].scale = gpuViewportEncode<12>(scale);
        binding->slots[slot].bias = gpuViewportEncode<12>(bias);
        (*records)[index].geometry[slot] = source->geometry;
    } else {
        binding->geometryEnabled[slot] = 0;
        (*records)[index].geometry[slot] = NULL;
    }
    if ((source->flags & 1) != 0) {
        binding->slots[slot].enabled = 1;
    } else {
        binding->slots[slot].enabled = 0;
    }
    (*records)[index].binding.values[slot][0] = source->values[0];
    (*records)[index].binding.values[slot][1] = source->values[1];
    (*records)[index].binding.values[slot][2] = source->values[2];
    (*records)[index].binding.values[slot][3] = source->values[3];
}
