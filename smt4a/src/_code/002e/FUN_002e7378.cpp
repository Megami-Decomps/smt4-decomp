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

/* Moves the read position to `position` if it lies within the source; returns whether it did. */
u32 FUN_002e7378(Stream *stream, u32 position)
{
    if (stream->source->size < position) {
        return 0;
    }
    stream->position = position;
    return 1;
}

} /* extern "C" */
