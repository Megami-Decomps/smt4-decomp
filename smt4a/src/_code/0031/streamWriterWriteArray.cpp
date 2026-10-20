#include "common.h"

extern "C" {

void FUN_0030fb34(u32 dest, u32 src, int size);

void streamWriterWriteArray(u32 dest, u32 src, int count, int unitSize)
{
    FUN_0030fb34(dest, src, count * unitSize * 8);
}

} /* extern "C" */
