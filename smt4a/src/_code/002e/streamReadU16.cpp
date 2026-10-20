#include "common.h"

extern "C" {

void streamReaderReadU16(void);

/* Forwards to streamReaderReadU16. */
void streamReadU16(void)
{
    streamReaderReadU16();
}

} /* extern "C" */
