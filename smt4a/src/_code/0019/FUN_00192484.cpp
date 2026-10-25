/* NON_MATCHING: in the FUN_001a1fb4 path the address of the stack args is formed in r4 instead of lr. */
#include "common.h"

extern "C" {

typedef struct UnkA {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ u32 mode;
} UnkA;

typedef struct UnkFlag {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 dirty;
} UnkFlag;

typedef struct Skeleton {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ UnkA *info;
    /* 0x00C */ u8 unk00C[0x13C];
    /* 0x148 */ u8 mtx[0x60];     /* 3x4 matrix at 0x148, further data at 0x1a8 */
    /* 0x1A8 */ u8 data[0xB8];
    /* 0x260 */ UnkFlag *flag;
    /* 0x264 */ u8 unk264[0x30];
    /* 0x294 */ u32 unk294;
} Skeleton;

typedef struct Context {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ f32 *parameters;
} Context;

int mtx44Copy(void *dst, void *src);
void FUN_001a1fb4(f32 *parameters, void *a, void *b, void *c, void *d, void *e, void *f, int g, int h, f32 stereoParameter, f32 stereoScale);
int nn_math_ARMv6_MTX34CopyAsm(void *dst, void *src);

/* Copies the pose of `src` into `dst1` and `dst2`: by FUN_001a1fb4 normally, or by plain copies when src's mode is 2. */
void FUN_00192484(Context *ctx, Skeleton *dst1, Skeleton *dst2, Skeleton *src, f32 stereoParameter, f32 stereoScale)
{
    dst1->unk294 = src->unk294;
    dst2->unk294 = src->unk294;
    if ((src->info->mode & 0xff) == 2) {
        mtx44Copy(dst1->data, src->data);
        nn_math_ARMv6_MTX34CopyAsm(dst1->mtx, src->mtx);
        mtx44Copy(dst2->data, src->data);
        nn_math_ARMv6_MTX34CopyAsm(dst2->mtx, src->mtx);
        src->flag->dirty = 1;
        dst1->flag->dirty = 1;
        dst2->flag->dirty = 1;
    } else {
        FUN_001a1fb4(ctx->parameters, dst1->data, dst1->mtx, dst2->data, dst2->mtx, src->data, src->mtx, 0, 1, stereoParameter, stereoScale);
    }
}

} /* extern "C" */
