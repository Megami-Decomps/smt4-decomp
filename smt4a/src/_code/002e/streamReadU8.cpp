#include "common.h"

extern "C" {

void streamReaderReadU8(void);

/* Forwards to streamReaderReadU8. */
void streamReadU8(void)
{
    streamReaderReadU8();
}

} /* extern "C" */
