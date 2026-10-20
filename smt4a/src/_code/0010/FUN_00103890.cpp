/* Copy constructor: sets the vtable, copies the id and the 0x20-byte payload from another object. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u32 id;           /* 0x04 */
    u8 payload[0x20]; /* 0x08 */
} PayloadObject;

extern u8 DAT_005584d0;

void *rt_memcpy(void *dst, const void *src, u32 size);

PayloadObject *FUN_00103890(PayloadObject *self, const PayloadObject *other)
{
    self->vtbl = &DAT_005584d0;
    self->id = other->id;
    rt_memcpy(self->payload, other->payload, sizeof(self->payload));
    return self;
}

} /* extern "C" */
