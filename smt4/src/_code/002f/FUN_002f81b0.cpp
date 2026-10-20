#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct Inner *inner;
} Source;

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} Inner;

typedef struct Dest {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ Inner *inner;
} Dest;

void FUN_002f81b0(Source *source, Dest *dest)
{
    Inner *inner = source->inner;

    dest->inner = inner;
    if (inner != NULL) {
        dest->unk0 = inner->unk14;
        dest->unk4 = inner->unk18;
    }
}

} /* extern "C" */
