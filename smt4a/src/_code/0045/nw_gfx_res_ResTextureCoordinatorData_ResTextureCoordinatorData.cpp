#include "shard/Shard0045.h"

extern "C" {

typedef struct WordPair2 {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
} WordPair2;

typedef struct TexCoordData {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u32 w2;
    /* 0x0C */ u32 w3;
    /* 0x10 */ WordPair2 scale;
    /* 0x18 */ u32 w6;
    /* 0x1C */ WordPair2 translate;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25;
    /* 0x26 */ u16 unk26;
    /* 0x28 */ u32 matrix[12];
} TexCoordData;

extern void nn_math_ARMv6_MTX34CopyAsm(u32 *dst, const u32 *src);

/* Copy constructor. */
TexCoordData *nw_gfx_res_ResTextureCoordinatorData_ResTextureCoordinatorData(TexCoordData *dst, const TexCoordData *src)
{
    dst->w0 = src->w0;
    dst->w1 = src->w1;
    dst->w2 = src->w2;
    dst->w3 = src->w3;
    dst->scale = src->scale;
    dst->w6 = src->w6;
    dst->translate = src->translate;
    dst->unk24 = src->unk24;
    dst->unk25 = src->unk25;
    dst->unk26 = src->unk26;
    nn_math_ARMv6_MTX34CopyAsm(dst->matrix, src->matrix);
    return dst;
}

} /* extern "C" */
