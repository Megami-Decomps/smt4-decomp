#include "common.h"

extern "C" {

void streamReaderReadU32(void);

/* Runs streamReaderReadU32 and returns `object`. */
void *streamReaderAdvanceU32(void *object)
{
    streamReaderReadU32();
    return object;
}

} /* extern "C" */
