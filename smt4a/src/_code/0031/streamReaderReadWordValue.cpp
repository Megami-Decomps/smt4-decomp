#include "common.h"

extern "C" {
void *FUN_003026b0(void *reader, u32 *value);

// Read one unsigned word from the stream.
u32 streamReaderReadWordValue(void *reader)
{
    u32 value;
    FUN_003026b0(reader, &value);
    return value;
}
}
