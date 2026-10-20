#include "common.h"

extern "C" {

void streamReaderReadArray(void *dest, const void *source, s32 size, s32 flag);

/* Copies 4 bytes from `source` to `dest` through streamReaderReadArray and returns `dest`. */
void *FUN_003031e4(void *dest, const void *source)
{
    streamReaderReadArray(dest, source, 4, 1);
    return dest;
}

} /* extern "C" */
