#ifndef ASDSDK_GFX_EFFECT_EFFECTTRANSFORMCOPY_H
#define ASDSDK_GFX_EFFECT_EFFECTTRANSFORMCOPY_H
#include "common.h"
#include <stddef.h>

struct EffectTransformCopyKey {
    f32 position[3]; // 0x00
    f32 rotation[3]; // 0x0c
    f32 scale[3]; // 0x18
    u8 color[4]; // 0x24
    u32 flags; // 0x28
    u16 frame; // 0x2c
    u16 unk2E;
    u32 texture, animation; // 0x30
    u16 width, height, mode; // 0x38
    u16 unk3E;
    u32 resource; // 0x40
};
struct EffectTransformCopyState {
    f32 current;
    u32 metadata[3];
    EffectTransformCopyKey keys[4]; // 0x10
    u8 unk120[0x10];
    u8 flags; // 0x130
};
typedef char EffectTransformCopyOffsets[
    sizeof(EffectTransformCopyKey) == 0x44 &&
    offsetof(EffectTransformCopyKey, color) == 0x24 &&
    offsetof(EffectTransformCopyKey, resource) == 0x40 &&
    offsetof(EffectTransformCopyState, keys) == 0x10 &&
    offsetof(EffectTransformCopyState, flags) == 0x130 ? 1 : -1];

static inline void effectCopyTransformKeys(EffectTransformCopyState *destination,
                                           const EffectTransformCopyState *source)
{
    for (s32 index = 0; index < 4; ++index) {
        destination->keys[index].position[0] = source->keys[index].position[0];
        destination->keys[index].position[1] = source->keys[index].position[1];
        destination->keys[index].position[2] = source->keys[index].position[2];
        destination->keys[index].rotation[1] = source->keys[index].rotation[1];
        destination->keys[index].rotation[2] = source->keys[index].rotation[2];
        destination->keys[index].rotation[0] = source->keys[index].rotation[0];
        destination->keys[index].scale[0] = source->keys[index].scale[0];
        destination->keys[index].scale[1] = source->keys[index].scale[1];
        destination->keys[index].scale[2] = source->keys[index].scale[2];
        destination->keys[index].color[0] = source->keys[index].color[0];
        destination->keys[index].color[1] = source->keys[index].color[1];
        destination->keys[index].color[2] = source->keys[index].color[2];
        destination->keys[index].color[3] = source->keys[index].color[3];
        destination->keys[index].flags = source->keys[index].flags;
        destination->keys[index].texture = source->keys[index].texture;
        destination->keys[index].animation = source->keys[index].animation;
        destination->keys[index].frame = source->keys[index].frame;
        destination->keys[index].width = source->keys[index].width;
        destination->keys[index].height = source->keys[index].height;
        destination->keys[index].mode = source->keys[index].mode;
        destination->keys[index].resource = source->keys[index].resource;
    }
    destination->flags = (destination->flags & ~1) | (source->flags & 1);
    destination->flags = (destination->flags & ~6) | (source->flags & 6);
    destination->metadata[0] = source->metadata[0];
    destination->metadata[1] = source->metadata[1];
    destination->metadata[2] = source->metadata[2];
    destination->current = destination->keys[3].position[0];
}
#endif
