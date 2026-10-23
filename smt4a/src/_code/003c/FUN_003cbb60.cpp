/* NON_MATCHING: reciprocal negation, three-value capture, channel-base addressing and inlined timing-helper registers/tail merging differ. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include "gfx/ModelDummyBindings.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"
#include "shard/W6_W6Match7_TextureTransform.h"
#include "status/StatusCamera.h"

namespace {
struct BoundsMaterialParameters {
    u32 unk00;
    EffectBoundsImageBinding *binding;
    EffectBoundsCustomBinding *custom;
    u32 unk0C;
    Vec3 values;
};
// The format field lies beyond the shared custom-size prefix.
struct BoundsCustomSizeView {
    EffectBoundsCustomSize size;
    u8 unk1C[0x18];
    u32 format;
};
typedef char BoundsMaterialParameterLayoutCheck[offsetof(BoundsMaterialParameters, values) == 0x10 &&
    offsetof(BoundsCustomSizeView, format) == 0x34 ? 1 : -1];

inline void setBoundsTiming(MaterialMergeNode *node, f32 value, bool clamp)
{
    node->timing[0].first = value;
    node->timing[0].mode = 12;
    if (clamp) {
        node->kinds |= 1;
    } else {
        node->kinds &= ~1;
    }
}
}

extern "C" void FUN_00401a74(EffectBoundsSource *source, TextureTransformVector2 *scale,
    TextureTransformVector2 *offset);

extern "C" void FUN_003cbb60(MaterialMergeResource *model, EffectBoundsSource *source,
    ModelDummyBindings *bindings)
{
    TextureTransformVector2 scale;
    TextureTransformVector2 offset;
    FUN_00401a74(source, &scale, &offset);
    offset.x = -(offset.x * (1.0f / scale.x));
    const BoundsMaterialParameters *parameters = reinterpret_cast<const BoundsMaterialParameters *>(source);
    const Vec3 values = parameters->values;
    const u8 format = static_cast<u8>(reinterpret_cast<BoundsCustomSizeView *>(parameters->custom->size)->format);
    for (s32 i = 0; i < bindings->count; ++i) {
        const s32 channel = bindings->bindings[i].part;
        MaterialMergeNode *node = &model->nodes[bindings->bindings[i].node];
        if (channel == 0) {
            node->flags |= 0x1000;
        } else if (channel == 1) {
            node->flags |= 0x2000;
        } else if (channel == 2) {
            node->flags |= 0x4000;
        }
        *reinterpret_cast<TextureTransformVector2 *>(&node->channels[channel].second[1]) = offset;
        *reinterpret_cast<TextureTransformVector2 *>(&node->channels[channel].first[1]) = scale;
        switch (channel) {
        case 0:
            setBoundsTiming(node, values.x, format == 12);
            break;
        case 1:
            setBoundsTiming(node, values.y, format == 12);
            break;
        case 2:
            setBoundsTiming(node, values.z, format == 12);
            break;
        }
    }
}
