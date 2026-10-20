#include "common.h"

extern "C" {

void streamReaderReadU8(void);

/* Forwards to streamReaderReadU8. */
void streamReadByte(void)
{
    streamReaderReadU8();
}

} /* extern "C" */
