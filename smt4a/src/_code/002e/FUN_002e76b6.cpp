#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 base;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 offset;
} Source;

/* Returns base + offset. */
s32 FUN_002e76b6(Source *source)
{
    return source->base + source->offset;
}

} /* extern "C" */
