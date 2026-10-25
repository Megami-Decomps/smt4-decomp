/* Assignment: copies the 0x1c-byte payload (after the 4-byte header) from another object and returns self. */
#include "common.h"

extern "C" {

typedef struct {
    u32 header;       /* 0x00 */
    u8 payload[0x1c]; /* 0x04 */
} PayloadBlock;

void __aeabi_memcpy4(void *dst, const void *src, u32 size);

PayloadBlock *onlineSockAddrCopy(PayloadBlock *self, const PayloadBlock *other)
{
    __aeabi_memcpy4(self->payload, other->payload, sizeof(self->payload));
    return self;
}

} /* extern "C" */
