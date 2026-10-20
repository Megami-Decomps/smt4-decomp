#include "common.h"

extern "C" {

void streamReaderReadBytes(void);

/* Forwards to streamReaderReadBytes. */
void streamReadBytes(void)
{
    streamReaderReadBytes();
}

} /* extern "C" */
