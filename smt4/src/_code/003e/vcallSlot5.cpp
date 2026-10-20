/* Forwards the call to the object's vtable slot 5 (tail call), passing the object and one argument. */
#include "common.h"

extern "C" {

struct Object;

typedef struct {
    void *slots00[5];                         /* 0x00 */
    void (*method)(Object *self, u32 arg);    /* 0x14 */
} ObjectVtbl;

struct Object {
    const ObjectVtbl *vtbl; /* 0x00 */
};

void vcallSlot5(Object *self, u32 arg)
{
    self->vtbl->method(self, arg);
}

} /* extern "C" */
