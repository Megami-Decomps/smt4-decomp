#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 size;
} Source;

typedef struct Stream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 error;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Source *source;
    /* 0x0C */ u32 position;
} Stream;

u32 FUN_002e7328(Stream *stream, u32 count);
s32 FUN_002e76b6(Source *source);

/* Reads a 32-bit word (assembled from a 3-byte part and a final byte) at the read position into `*out` and advances; stores 0 and returns 0 when it does not fit. */
u32 FUN_002e75c2(Stream *stream, u32 *out)
{
    s32 result;
    s32 base;
    s32 offset;
    u32 *word;

    result = FUN_002e7328(stream, 4);
    if (result != 0) {
        base = FUN_002e76b6(stream->source);
        offset = stream->position;
        word = (u32 *)(base + offset);
        *out = (*word & 0xFFFFFF) | ((u32)*(u8 *)((s32)word + 3) << 0x18);
        stream->position = stream->position + 4;
        return 1;
    }
    *out = 0;
    return 0;
}

} /* extern "C" */
