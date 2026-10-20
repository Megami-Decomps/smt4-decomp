#include "common.h"

extern "C" {

void onlineBufferReset(u32 source);

typedef struct Stream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 error;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 source;
    /* 0x0C */ u32 position;
} Stream;

/* Resets the stream's source (onlineBufferReset), clears `error` and rewinds. */
void streamReset(Stream *stream)
{
    onlineBufferReset(stream->source);
    stream->error = 0;
    stream->position = 0;
}

} /* extern "C" */
