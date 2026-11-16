#include "common.h"

extern "C" {

typedef struct Stream {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 pos;
} Stream;

typedef struct Writer {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Stream *stream;
} Writer;

int streamWriterWriteU32(Writer *writer, s32 *value);
int streamWriterSetLengthIfFits(Writer *writer, s32 pos);

/* Back-patches the leading size word: seeks to the start (0), writes (current position - 4) there, then seeks back to the end. */
void streamWriterPatchSizePrefix(Writer *writer)
{
    s32 end = writer->stream->pos;
    s32 size;

    streamWriterSetLengthIfFits(writer, 0);
    size = end - 4;
    streamWriterWriteU32(writer, &size);
    streamWriterSetLengthIfFits(writer, end);
}

} /* extern "C" */
