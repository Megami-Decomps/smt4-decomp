/* NON_MATCHING: 124 lines off (same shape as FUN_003cbb60): retail copies the three timing values with one vldmia into s0-s2, hoists the timing mode 12 into three registers (one per channel), and reaches the channel vectors through node + 0x58 */
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

namespace {
struct MaterialTextureValues { f32 first, second, third; };
struct MaterialTextureDescriptor { u8 unk00[0x34]; u32 format; };
struct MaterialTextureSource { u8 unk00[0xC]; MaterialTextureDescriptor *descriptor; };
struct MaterialTextureTransformInput {
    u8 unk00[8];
    MaterialTextureSource *source;
    u32 unk0C;
    MaterialTextureValues values;
};
struct MaterialTextureRouteOwner {
    u8 unk00[0x90];
    MaterialMergeModel *model;
    u8 unk94[0x19C];
    MaterialMergeRoute routes[64];
    s32 count;
};
typedef char MaterialTextureRouteOffsets[offsetof(MaterialTextureRouteOwner, routes) == 0x230 &&
    offsetof(MaterialTextureRouteOwner, count) == 0x330 ? 1 : -1];
}
extern "C" {
extern MaterialTextureRouteOwner *g_uniteEffectWork;
void FUN_00401a74(MaterialTextureTransformInput *input, TextureTransformVector2 *scale, TextureTransformVector2 *translation);

/* Copies the texture transform's scale and translation into every routed node channel and sets the channel's
 * timing value and clamp kind. */
void materialMergeApplyTextureTransform(MaterialTextureTransformInput *input)
{
    MaterialTextureRouteOwner *owner = g_uniteEffectWork;
    TextureTransformVector2 scale, translation;
    FUN_00401a74(input, &scale, &translation);
    scale.x = 1.0f;
    scale.y = 1.0f;
    MaterialTextureValues values = input->values;
    u8 format = input->source->descriptor->format;
    for (s32 index = 0; index < owner->count; ++index) {
        s32 channel = owner->routes[index].channel;
        MaterialMergeNode *node = &owner->model->resource->nodes[owner->routes[index].node];
        if (channel == 0)
            node->flags |= 0x1000;
        else if (channel == 1)
            node->flags |= 0x2000;
        else if (channel == 2)
            node->flags |= 0x4000;
        node->channels[channel].translation = translation;
        node->channels[channel].scale = scale;
        switch (channel) {
        case 0:
            materialMergeSetTiming(node, values.first, format == 12);
            break;
        case 1:
            materialMergeSetTiming(node, values.second, format == 12);
            break;
        case 2:
            materialMergeSetTiming(node, values.third, format == 12);
            break;
        }
    }
}
}
