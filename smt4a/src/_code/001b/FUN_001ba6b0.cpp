/* NON_MATCHING: SDK texture-unit command writer; the LOD-bias fixed-point clamp and the flag packing schedule differently from retail (float clamp compares integer bits there) */
#include "common.h"
#include "shard/S2GrTexture.h"

/* GPUREG_TEXUNIT0_* command headers (consecutive-register write of one word each). */
#define TEXUNIT0_BORDER_COLOR 0x000F0081
#define TEXUNIT0_DIM 0x000F0082
#define TEXUNIT0_PARAM 0x000F0083
#define TEXUNIT0_LOD 0x000F0084
#define TEXUNIT0_ADDR1 0x000F0085
#define TEXUNIT0_ADDR2 0x000F0086
#define TEXUNIT0_ADDR3 0x000F0087
#define TEXUNIT0_ADDR4 0x000F0088
#define TEXUNIT0_ADDR5 0x000F0089
#define TEXUNIT0_ADDR6 0x000F008A
#define TEXUNIT0_TYPE 0x000F008E

#define TEXTURE_FACE_CUBE_BIT 1
#define TEXTURE_ADDR_SHIFT 3
#define TEXTURE_ADDR_MASK 0xE03FFFFF

struct TextureDescriptor {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 dimensions; /* width/height halves, swapped for the register */
    /* 0x08 */ u8 format;
    /* 0x09 */ u8 wrapS;
    /* 0x0A */ u8 wrapT;
    /* 0x0B */ u8 magFilter;
    /* 0x0C */ u8 minFilter;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ f32 lodBias;
    /* 0x14 */ u8 lodMax;
    /* 0x15 */ u8 lodMin;
    /* 0x16 */ __packed u32 borderColor; /* RGB in the low 24 bits, alpha in byte 0x19 */
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ u8 target;
    /* 0x1D */ u8 unk1D[3];
    /* 0x20 */ u32 faceAddress[6];
    /* 0x38 */ u32 commandBuffer;
};

extern "C" {
u32 *FUN_001ba5bc(const GrTexture *texture, u32 *command, u32 addPadding);

/* Writes the texture unit's border colour, dimensions, sampler parameters, LOD and address
 * registers into the command buffer; returns the end of the written commands. */
u32 *FUN_001ba6b0(TextureDescriptor *tex, u32 *cmd, s32 reserve)
{
    if (reserve != 0)
        cmd = FUN_001ba5bc((const GrTexture *)tex->commandBuffer, cmd, 1);

    *cmd++ = (tex->borderColor & 0xFFFFFF) | ((u32)((u8 *)tex)[0x19] << 24);
    *cmd++ = TEXUNIT0_BORDER_COLOR;
    *cmd++ = (tex->dimensions >> 16) | (tex->dimensions << 16);
    *cmd++ = TEXUNIT0_DIM;

    u32 target = tex->target;
    u32 min = tex->minFilter;
    u32 mipmapped = (min == 3 || min == 4 || min == 5) ? 1 : 0;
    u32 clamped = (tex->format == 12) ? 2 : 0;
    *cmd++ = (tex->magFilter << 1) | (mipmapped << 2) | (clamped << 4) | (tex->wrapS << 8) |
             (tex->wrapT << 12) | ((u32)(target == 2 || target == 4) << 20) |
             ((u32)(min == 2 || min == 5) << 24) | (target << 28);
    *cmd++ = TEXUNIT0_PARAM;

    u32 lod = 0;
    if (tex->minFilter != 3 && tex->minFilter != 0) {
        /* LOD bias as a 13-bit signed fixed-point value, stored offset-binary then flipped. */
        f32 bias = tex->lodBias;
        if (bias != 0.0f && ((*(u32 *)&bias << 1) >> 24) != 0xFF) {
            f32 scaled = (bias + 16.0f) * 256.0f;
            if (scaled >= 0.0f) {
                if (scaled >= 8192.0f)
                    scaled = 8191.0f;
                lod = (scaled >= 4096.0f) ? (u32)(scaled - 4096.0f) : (u32)(scaled + 4096.0f);
            } else {
                lod = (u32)(0.0f + 4096.0f);
            }
        }
        lod |= ((u32)tex->lodMin << 16) | ((u32)tex->lodMax << 24);
    }
    *cmd++ = lod;
    *cmd++ = TEXUNIT0_LOD;

    if (target == 0 || target == 3 || target == 2) {
        *cmd++ = tex->address >> TEXTURE_ADDR_SHIFT;
        *cmd++ = TEXUNIT0_ADDR1;
    } else if (target == 1 || target == 4) {
        static const u32 header[6] = {TEXUNIT0_ADDR1, TEXUNIT0_ADDR2, TEXUNIT0_ADDR3,
                                       TEXUNIT0_ADDR4, TEXUNIT0_ADDR5, TEXUNIT0_ADDR6};
        *cmd++ = tex->faceAddress[0] >> TEXTURE_ADDR_SHIFT;
        *cmd++ = header[0];
        for (s32 i = 1; i < 6; i++) {
            *cmd++ = (tex->faceAddress[i] >> TEXTURE_ADDR_SHIFT) & TEXTURE_ADDR_MASK;
            *cmd++ = header[i];
        }
    }
    *cmd++ = tex->format;
    *cmd++ = TEXUNIT0_TYPE;
    return cmd;
}

} /* extern "C" */
