#include "common.h"

extern "C" {

void streamWriterWriteArray(void *dest, const void *source, s32 size, s32 flag);

/* Copies 4 bytes from `source` to `dest` through streamWriterWriteArray and returns `dest`. */
void *streamWriterWriteWord(void *dest, const void *source)
{
    streamWriterWriteArray(dest, source, 4, 1);
    return dest;
}

} /* extern "C" */
