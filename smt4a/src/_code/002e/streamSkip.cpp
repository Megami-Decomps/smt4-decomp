#include "common.h"

extern "C" {

void streamReaderSeek(void *stream, s32 position);

typedef struct Stream {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 position;
} Stream;

/* Moves the read position forward by `offset`. */
void streamSkip(Stream *stream, s32 offset)
{
    streamReaderSeek(stream, stream->position + offset);
}

} /* extern "C" */
