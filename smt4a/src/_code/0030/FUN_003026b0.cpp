#include "common.h"

extern "C" {

void streamReaderReadU32(void);

/* Runs streamReaderReadU32 and returns `object`. */
void *FUN_003026b0(void *object)
{
    streamReaderReadU32();
    return object;
}

} /* extern "C" */
