/* nn::gr::CTR::Texture: the parts the command builders read. */
#ifndef S2_GR_TEXTURE_H
#define S2_GR_TEXTURE_H

#include "common.h"

typedef struct GrTextureUnit GrTextureUnit;
typedef struct GrTexture GrTexture;

/* Per-unit texture state, laid out as the command builder reads it (offsets relative to the unit). */
struct GrTextureUnit {
    /* 0x00 */ u32 imageBits;      /* image size in bits; the command carries it in bytes */
    /* 0x04 */ u32 borderColor;    /* sent with its halves swapped */
    /* 0x08 */ u8 format;          /* 12 sets bit 5 of the config word */
    /* 0x09 */ u8 wrapS;
    /* 0x0a */ u8 wrapT;
    /* 0x0b */ u8 minFilter;
    /* 0x0c */ u8 type;            /* 0..5; 2 and 5 set bit 24, 3..5 set bit 2 */
    /* 0x0d */ u8 unk0d[3];
    /* 0x10 */ f32 lodBias;
    /* 0x14 */ u8 lodMin;
    /* 0x15 */ u8 lodMax;
    /* 0x16 */ u8 unk16[4];        /* low 24 bits of the first command word (unaligned) */
    /* 0x1a */ u8 unk1a[6];
    /* 0x20 */ void *funcSource;   /* what nn_gr_CTR_Texture_MakeFuncCommand emits from */
};

struct GrTexture {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u8 unit3c[0x24];
    /* 0x60 */ GrTextureUnit unit;
};

#endif
