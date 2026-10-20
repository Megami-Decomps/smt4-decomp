#include "common.h"

extern "C" {

void streamReaderSeek(void);

/* Forwards to streamReaderSeek. */
void streamSeek(void)
{
    streamReaderSeek();
}

} /* extern "C" */
