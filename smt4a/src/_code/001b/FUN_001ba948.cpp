/* NON_MATCHING: configuration word registers, command constant synthesis and clamped LOD VFP scheduling differ. */
#include "shard/S2GrTexture.h"

/* Encode the signed 13-bit fixed-point LOD-bias field. */
static inline u32 textureLodBiasFixed(f32 bias)
{
    f32 scaled = (bias + 16.0f) * 256.0f;
    f32 clamped = 0.0f;
    if (scaled >= 0.0f) {
        if (scaled >= 8192.0f)
            clamped = 8191.0f;
        else
            clamped = scaled;
        if (clamped >= 4096.0f)
            return (u32)(clamped - 4096.0f);
    }
    return (u32)(clamped + 4096.0f);
}

extern "C" {
u32 *FUN_001ba5bc(void *, u32 *, u32);

/* Append unit zero's border, sampling, LOD, image-address and format register writes. */
u32 *FUN_001ba948(const GrTextureUnit *unit, u32 *command, s32 withFunction)
{
    if (withFunction)
        command = FUN_001ba5bc(unit->funcSource, command, 1);
    *command++ = (*(const u32 *)unit->unk16 & 0xFFFFFF) | (u32(unit->unk16[3]) << 24);
    *command++ = 0xF0091;
    *command++ = (unit->borderColor >> 16) | (unit->borderColor << 16);
    *command++ = 0xF0092;
    *command++ = (u32(unit->minFilter) << 1) |
        (u32(unit->type == 3 || unit->type == 4 || unit->type == 5) << 2) |
        (u32(unit->format == 12 ? 2 : 0) << 4) |
        (u32(unit->wrapS) << 8) | (u32(unit->wrapT) << 12) |
        (u32(unit->type == 2 || unit->type == 5) << 24);
    *command++ = 0xF0093;

    u32 lod = 0;
    if (unit->type != 3 && unit->type != 0) {
        union { f32 value; u32 bits; } bias;
        bias.value = unit->lodBias;
        u32 fixed = 0;
        if (bias.value != 0.0f && ((bias.bits << 1) >> 24) != 255)
            fixed = textureLodBiasFixed(bias.value);
        lod = fixed | (u32(unit->lodMax) << 16) | (u32(unit->lodMin) << 24);
    }
    *command++ = lod;
    *command++ = 0xF0094;
    *command++ = unit->imageBits >> 3;
    *command++ = 0xF0095;
    *command++ = unit->format;
    *command++ = 0xF0096;
    return command;
}
}
