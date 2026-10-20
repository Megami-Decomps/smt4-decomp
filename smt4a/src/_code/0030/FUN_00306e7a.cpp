#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 byteCount;
} Source;

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Source *source;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s32 bitCount;
} Holder;

/* Records the size of the source in bits. */
void FUN_00306e7a(Holder *object)
{
    object->bitCount = object->source->byteCount << 3;
}

} /* extern "C" */
