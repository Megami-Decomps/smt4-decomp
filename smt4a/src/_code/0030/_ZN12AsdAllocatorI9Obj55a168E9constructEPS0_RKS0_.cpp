#include "common.h"

extern "C" {

extern u8 DAT_0055a170;
extern u8 DAT_0055a9b8;

/* Copyable object: vtable, a flag byte and three words. */
typedef struct {
    const void *vtbl;   /* 0x00 */
    u8 flag;            /* 0x04 */
    u8 unk05[3];
    u32 first;          /* 0x08 */
    u32 second;         /* 0x0c */
    u32 third;          /* 0x10 */
} Copyable;

/* Copy construction into `dest` (no-op for NULL): base vtable while copying, final vtable last. */
void _ZN12AsdAllocatorI9Obj55a168E9constructEPS0_RKS0_(u32 unused, Copyable *dest, const Copyable *source)
{
    if (dest != NULL) {
        dest->vtbl = &DAT_0055a9b8;
        dest->flag = source->flag;
        u32 first = source->first;

        dest->second = source->second;
        dest->first = first;
        dest->third = source->third;
        dest->vtbl = &DAT_0055a170;
    }
}

} /* extern "C" */
