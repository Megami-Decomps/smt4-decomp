#include "common.h"

extern "C" {

void streamWriterWriteBits(u32 dest, u32 src, int size);

void streamWriterWriteArray(u32 dest, u32 src, int count, int unitSize)
{
    streamWriterWriteBits(dest, src, count * unitSize * 8);
}

} /* extern "C" */
