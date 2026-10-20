/* NON_MATCHING: operand order only: retail computes `adds r0,r0,r1` (data + pos), built `adds r0,r1,r0` */
/* Reads the next byte of the stream into *out (0 if the stream is exhausted) and advances the position. */
#include "common.h"

extern "C" {

typedef struct Stream {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 source;
    /* 0x0C */ s32 pos;
} Stream;

extern s32 streamReaderHasBytes(Stream *stream, u32 count);
extern u8 *onlineBufferGetData(u32 source);

void FUN_00103e62(Stream *stream, u8 *out)
{
    if (streamReaderHasBytes(stream, 1) != 0) {
        u8 *data = onlineBufferGetData(stream->source);
        u8 *byte = data + stream->pos;

        *out = *byte;
        stream->pos++;
        return;
    }
    *out = 0;
}

}
