/* NON_MATCHING: material texture-transform copy and channel branch scheduling differ. */
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

namespace {
struct MaterialTextureVector2 { f32 x, y; };
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
extern MaterialTextureRouteOwner *DAT_0057f2c4;
void FUN_00401a74(MaterialTextureTransformInput *input, MaterialTextureVector2 *scale, MaterialTextureVector2 *translation);

void FUN_001fc348(MaterialTextureTransformInput *input)
{
    MaterialTextureRouteOwner *owner = DAT_0057f2c4;
    MaterialTextureVector2 scale, translation;
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
        node->channels[channel].second[1] = translation.x;
        node->channels[channel].second[2] = translation.y;
        node->channels[channel].first[1] = scale.x;
        node->channels[channel].first[2] = scale.y;
        if (channel == 0) {
            node->timing[0].first = values.first;
            node->timing[0].mode = 12;
            materialMergeSetKind(node, 1, format == 12);
        } else if (channel == 1) {
            node->timing[0].first = values.second;
            node->timing[0].mode = 12;
            materialMergeSetKind(node, 1, format == 12);
        } else if (channel == 2) {
            node->timing[0].first = values.third;
            node->timing[0].mode = 12;
            materialMergeSetKind(node, 1, format == 12);
        }
    }
}
}
