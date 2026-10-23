#ifndef GFX_MATERIAL_COLOR_COMMAND_H
#define GFX_MATERIAL_COLOR_COMMAND_H
#include "common.h"
#include <stddef.h>

struct MaterialColorResource {
    u8 unk00[0x18];
    u32 flags;
    u8 unk1C[0x98];
    f32 color[4];
    s32 commandsOffset;
};
struct MaterialColorBinding {
    u8 unk00[8];
    MaterialColorResource *resource;
};
struct MaterialColorOwner {
    u8 unk00[0xA0];
    MaterialColorBinding *material;
};
union MaterialPackedColor {
    u32 value;
    struct { u32 red : 8; u32 green : 8; u32 blue : 8; u32 alpha : 8; } channels;
};
static __inline u32 materialColorChannel(f32 value)
{
    if (value > 1.0f)
        value = 1.0f;
    else if (value < 0.0f)
        value = 0.0f;
    return static_cast<u32>(value * 255.0f + 0.5f);
}
static __inline MaterialPackedColor materialPackColor(const f32 *color)
{
    MaterialPackedColor packed;
    packed.channels.red = materialColorChannel(color[0]);
    packed.channels.green = materialColorChannel(color[1]);
    packed.channels.blue = materialColorChannel(color[2]);
    packed.channels.alpha = materialColorChannel(color[3]);
    return packed;
}
typedef char MaterialColorOffsets[offsetof(MaterialColorResource, color) == 0xB4 &&
    offsetof(MaterialColorResource, commandsOffset) == 0xC4 &&
    offsetof(MaterialColorOwner, material) == 0xA0 ? 1 : -1];
#endif
