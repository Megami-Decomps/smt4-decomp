#include "common.h"

extern "C" {

void FUN_00303038(u32 dest, void *source);

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 byteCount;
} Source;

typedef struct Reader {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Source *source;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s32 bitCount;
} Reader;

/* Attaches the reader's source to `dest` (FUN_00303038) and records its size in bits; returns `dest`. */
u32 FUN_00122692(u32 dest, Reader *reader)
{
    Source *source;

    FUN_00303038(dest, reader->source);
    source = reader->source;
    reader->bitCount = source->byteCount * 8;
    return dest;
}

} /* extern "C" */
