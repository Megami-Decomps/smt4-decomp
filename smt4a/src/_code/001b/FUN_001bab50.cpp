/* NON_MATCHING: sampler flag temporaries, command-header constant reuse, LOD VFP registers and paired stores differ. */
#include "shard/S2GrTexture.h"

static inline u32 textureEncodeLodBias(f32 value)
{
    union { f32 value; u32 bits; } bias;
    bias.value = value;
    if (value == 0.0f || ((bias.bits << 1) >> 24) == 255)
        return 0;
    f32 scaled = (value + 16.0f) * 256.0f;
    if (scaled < 0.0f)
        scaled = 0.0f;
    else if (scaled >= 8192.0f)
        scaled = 8191.0f;
    if (scaled >= 4096.0f)
        return (u32)(scaled - 4096.0f);
    return (u32)(scaled + 4096.0f);
}

extern "C" {
u32 *FUN_001ba5bc(void *source, u32 *commands, u32 unit);

// Emit texture unit two's border, dimensions, sampler/LOD, image address and format commands.
u32 *FUN_001bab50(const GrTextureUnit *texture, u32 *commands, u32 emitFunction)
{
    if (emitFunction)
        commands = FUN_001ba5bc(texture->funcSource, commands, 1);
    u32 rgb = *(const u32 *)texture->unk16;
    *commands++ = (rgb & 0xFFFFFF) | ((u32)texture->unk16[3] << 24);
    *commands++ = 0xF0099;
    *commands++ = (texture->borderColor >> 16) | (texture->borderColor << 16);
    *commands++ = 0xF009A;
    u32 mipmapped = texture->type == 3 || texture->type == 4 || texture->type == 5;
    u32 compressed = texture->format == 12 ? 2 : 0;
    *commands++ = ((u32)texture->minFilter << 1) | (mipmapped << 2) | (compressed << 4) |
        ((u32)texture->wrapS << 8) | ((u32)texture->wrapT << 12) |
        ((u32)(texture->type == 2 || texture->type == 5) << 24);
    *commands++ = 0xF009B;
    if (texture->type == 3 || texture->type == 0) {
        *commands++ = 0;
    } else {
        *commands++ = textureEncodeLodBias(texture->lodBias) |
            ((u32)texture->lodMax << 16) | ((u32)texture->lodMin << 24);
    }
    *commands++ = 0xF009C;
    *commands++ = texture->imageBits >> 3;
    *commands++ = 0xF009D;
    *commands++ = texture->format;
    *commands++ = 0xF009E;
    return commands;
}
}
