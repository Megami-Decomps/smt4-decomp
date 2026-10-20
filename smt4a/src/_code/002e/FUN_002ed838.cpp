#include "common.h"

extern "C" {

void FUN_002e74bc(u32 source);

typedef struct Stream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 error;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 source;
    /* 0x0C */ u32 position;
} Stream;

/* Resets the stream's source (FUN_002e74bc), clears `error` and rewinds. */
void FUN_002ed838(Stream *stream)
{
    FUN_002e74bc(stream->source);
    stream->error = 0;
    stream->position = 0;
}

} /* extern "C" */
