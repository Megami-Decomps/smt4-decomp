#include "common.h"

extern "C" {

/* Fixed buffer that remembers how many bytes were stored (length at 0x10). */
typedef struct {
    u8 data[0x10];
    u32 length;         /* 0x10 */
} Buffer;

void *rt_memcpy(void *dest, const void *source, u32 length);

/* Copies `length` bytes into the buffer and records the length. */
void FUN_002ea6ae(Buffer *buffer, const void *source, u32 length)
{
    rt_memcpy(buffer, source, length);
    buffer->length = length;
}

} /* extern "C" */
