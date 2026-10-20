/* NON_MATCHING: same instruction mix; register allocation of the config/lod words and the float constant loads differ. */
#include "shard/S2GrTexture.h"

extern "C" {

extern u32 *nn_gr_CTR_Texture_MakeFuncCommand(...);

/* The texture unit's lod bias as the 13-bit fixed-point register field (1.4.8, offset binary). */
static __inline u32 lodBiasFixed(f32 bias)
{
    f32 scaled = (bias + 16.0f) * 256.0f;
    f32 clamped = 0.0f;

    if (scaled >= 0.0f) {
        if (scaled >= 8192.0f) {
            clamped = 8191.0f;
        } else {
            clamped = scaled;
        }
        if (clamped >= 4096.0f) {
            return (u32)(clamped - 4096.0f);
        }
    }
    return (u32)(clamped + 4096.0f);
}

/* Appends the texture unit's register writes (value, register id pairs) to `command`;
 * with `withFunc` set the function state goes first. Returns the new end of the list. */
u32 *FUN_003e0344(GrTextureUnit *unit, u32 *command, s32 withFunc)
{
    u32 lod;

    if (withFunc) {
        command = nn_gr_CTR_Texture_MakeFuncCommand(unit->funcSource, command, 1);
    }
    *command++ = (*(u32 *)&unit->unk16[0] & 0xffffff) | (unit->unk16[3] << 24);
    *command++ = 0xf0099;
    *command++ = (unit->borderColor >> 16) | (unit->borderColor << 16);
    *command++ = 0xf009a;

    *command++ = ((unit->type == 3 || unit->type == 4 || unit->type == 5) << 2) | (unit->minFilter << 1)
           | ((unit->format == 12 ? 2 : 0) << 4) | (unit->wrapS << 8) | (unit->wrapT << 12)
           | ((unit->type == 2 || unit->type == 5) << 24);
    *command++ = 0xf009b;

    lod = 0;
    if (!(unit->type == 3 || unit->type == 0)) {
        f32 bias = unit->lodBias;
        u32 fixed = 0;

        if (bias != 0.0f && ((*(u32 *)&bias << 1) >> 24) != 0xff) {
            fixed = lodBiasFixed(bias);
        }
        lod = fixed | (unit->lodMax << 16) | (unit->lodMin << 24);
    }
    *command++ = lod;
    *command++ = 0xf009c;
    *command++ = unit->imageBits >> 3;
    *command++ = 0xf009d;
    *command++ = unit->format;
    *command++ = 0xf009e;
    return command;
}

} /* extern "C" */
