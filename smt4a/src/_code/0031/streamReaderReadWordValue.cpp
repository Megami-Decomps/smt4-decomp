#include "common.h"

extern "C" {
void *streamReaderAdvanceU32(void *reader, u32 *value);

// Read one unsigned word from the stream.
u32 streamReaderReadWordValue(void *reader)
{
    u32 value;
    streamReaderAdvanceU32(reader, &value);
    return value;
}
}
