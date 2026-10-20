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

/* Reads a byte at the read position into `*out` and advances; stores 0 and returns 0 when it does not fit. */
u32 FUN_002e752e(Stream *stream, u8 *out)
{
    s32 base;
    s32 result;

    result = FUN_002e7328(stream, 1);
    if (result != 0) {
        base = FUN_002e76b6(stream->source);
        s32 offset = stream->position;
        u8 *value = (u8 *)(base + offset);
        *out = *value;
        stream->position = stream->position + 1;
        return 1;
    }
    *out = 0;
    return 0;
}

} /* extern "C" */
