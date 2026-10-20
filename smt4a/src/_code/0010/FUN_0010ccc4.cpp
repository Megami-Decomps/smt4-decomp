/* NON_MATCHING: the two words of `range` are copied through r2/r3 in retail (r2/r0 here). */
#include "common.h"

extern "C" {

typedef struct Pair {
    u32 first;
    u32 second;
} Pair;

typedef struct Descriptor {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ Pair range;
    /* 0x18 */ u16 width;
    /* 0x1A */ u16 height;
} Descriptor;

int FUN_002e7194(void *dst, void *src);

/* Copy-assigns a Descriptor and returns the destination. */
Descriptor *FUN_0010ccc4(Descriptor *dst, Descriptor *src)
{
    dst->type = src->type;
    dst->unk08 = src->unk08;
    dst->range = src->range;
    dst->width = src->width;
    dst->height = src->height;
    FUN_002e7194(dst + 1, src + 1);
    return dst;
}

} /* extern "C" */
