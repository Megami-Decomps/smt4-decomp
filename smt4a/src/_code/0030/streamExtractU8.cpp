#include "common.h"

extern "C" {

void streamReaderExtractU8(void);

/* Forwards to streamReaderExtractU8. */
void streamExtractU8(void)
{
    streamReaderExtractU8();
}

} /* extern "C" */
