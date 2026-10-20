/* NON_MATCHING: register allocation only: the zero is built directly in r6; retail builds it in r0, copies it to r6 and stores the flag byte from r0. */
#include "common.h"

extern "C" {

typedef struct FrameTex {
    /* 0x0000 */ u8 unk0000[0xFA4];
    /* 0x0FA4 */ u8 loaded;
    /* 0x0FA5 */ u8 unk0FA5[0x4EB];
    /* 0x1490 */ void *texA;
    /* 0x1494 */ u8 unk1494[4];
    /* 0x1498 */ void *texC;
    /* 0x149C */ void *texB;
} FrameTex;

extern FrameTex *g_frameTex;

int asdTextureRelease(void *texture);

/* Releases the frame textures (A, B, C) and clears the loaded flag. */
void FUN_002c2358(void)
{
    FrameTex *tex = g_frameTex;

    tex->loaded = 0;
    if (tex->texA != NULL) {
        asdTextureRelease(tex->texA);
        tex->texA = NULL;
    }
    if (tex->texB != NULL) {
        asdTextureRelease(tex->texB);
        tex->texB = NULL;
    }
    if (tex->texC != NULL) {
        asdTextureRelease(tex->texC);
        tex->texC = NULL;
    }
}

} /* extern "C" */
