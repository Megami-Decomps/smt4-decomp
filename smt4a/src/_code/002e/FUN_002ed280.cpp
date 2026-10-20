#include "common.h"

extern "C" {

void FUN_002e7378(void *stream, s32 position);

typedef struct Stream {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 position;
} Stream;

/* Moves the read position forward by `offset`. */
void FUN_002ed280(Stream *stream, s32 offset)
{
    FUN_002e7378(stream, stream->position + offset);
}

} /* extern "C" */
