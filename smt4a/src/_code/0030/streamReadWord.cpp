#include "common.h"

extern "C" {

void streamReaderReadU32(void);

/* Forwards to streamReaderReadU32. */
void streamReadWord(void)
{
    streamReaderReadU32();
}

} /* extern "C" */
