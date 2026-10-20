#include "common.h"

extern "C" {

typedef struct Writer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 begin;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 cursor;
} Writer;

/* Returns the number of 16-bit units written (cursor - begin, halved). */
s32 wideBufferLength(Writer *writer)
{
    return (writer->cursor - writer->begin) >> 1;
}

} /* extern "C" */
