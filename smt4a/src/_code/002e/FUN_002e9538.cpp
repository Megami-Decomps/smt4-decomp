/* Assignment: copies the 0x1c-byte payload (after the 4-byte header) from another object and returns self. */
#include "common.h"

extern "C" {

typedef struct {
    u32 header;       /* 0x00 */
    u8 payload[0x1c]; /* 0x04 */
} PayloadBlock;

void rt_memcpy_w(void *dst, const void *src, u32 size);

PayloadBlock *FUN_002e9538(PayloadBlock *self, const PayloadBlock *other)
{
    rt_memcpy_w(self->payload, other->payload, sizeof(self->payload));
    return self;
}

} /* extern "C" */
