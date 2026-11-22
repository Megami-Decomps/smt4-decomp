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
/* The material buffer colour's channel conversion: clamped to [0, 1] through a clamp taking its
 * bounds as values (retail compares against the bounds in VFP registers), scaled and rounded. */
static __inline f32 materialClamp(f32 value, f32 low, f32 high)
{
    if (value > high)
        return high;
    if (value < low)
        return low;
    return value;
}
static __inline u8 materialChannelToByte(f32 value)
{
    return static_cast<u8>(materialClamp(value, 0.0f, 1.0f) * 255.0f + 0.5f);
}
static __inline MaterialPackedColor materialPackColor(const f32 *color)
{
    u8 red = materialChannelToByte(color[0]);
    u8 green = materialChannelToByte(color[1]);
    u8 blue = materialChannelToByte(color[2]);
    u8 alpha = materialChannelToByte(color[3]);
    MaterialPackedColor packed;
    packed.channels.red = red;
    packed.channels.green = green;
    packed.channels.blue = blue;
    packed.channels.alpha = alpha;
    return packed;
}
typedef char MaterialColorOffsets[offsetof(MaterialColorResource, color) == 0xB4 &&
    offsetof(MaterialColorResource, commandsOffset) == 0xC4 &&
    offsetof(MaterialColorOwner, material) == 0xA0 ? 1 : -1];
#endif
