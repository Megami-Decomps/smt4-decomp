#include "common.h"

extern "C" {

int FUN_002bd420(void *src, void *dst, int size);
int FUN_002c3940(void *buffer, int size);

typedef struct Source {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u8 unk36;
} Source;

typedef struct Dest {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u8 unk4C[0x12];
    /* 0x5E */ u8 unk5E[0x18];
    /* 0x76 */ u8 unk76;
} Dest;

/* Builds a 0x8C-byte record from the source: 0xE bytes to +0, the next 0x12 bytes to +0x4C, and the byte at +0x36 to +0x76. */
void FUN_0030a858(Source *src, Dest *dst)
{
    FUN_002c3940(dst, 0x8c);
    FUN_002bd420(src, dst, 0xe);
    FUN_002bd420((u8 *)src + 0xe, dst->unk4C, 0x12);
    dst->unk76 = src->unk36;
}

} /* extern "C" */
