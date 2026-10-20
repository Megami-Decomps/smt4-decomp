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

/* Returns 1 when `count` more bytes can be read; otherwise sets `error` and returns 0. */
u32 streamReaderHasBytes(Stream *stream, u32 count)
{
    if (count <= (u32)(stream->source->size - stream->position)) {
        return 1;
    }
    stream->error = 1;
    return 0;
}

} /* extern "C" */
