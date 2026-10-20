#include "common.h"

extern "C" {

void streamReaderReadU64(void);

/* Forwards to streamReaderReadU64. */
void streamReadU64(void)
{
    streamReaderReadU64();
}

} /* extern "C" */
