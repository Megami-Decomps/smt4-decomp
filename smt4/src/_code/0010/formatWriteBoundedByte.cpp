#include "common.h"

struct FormatBoundedOutput {
    u8 *cursor;
    u8 *end;
};

/* Appends a byte to a bounded output buffer, dropping it once the buffer is full. */
extern "C" void formatWriteBoundedByte(u8 value, FormatBoundedOutput *output)
{
    if (output->cursor < output->end)
        *output->cursor++ = value;
}
