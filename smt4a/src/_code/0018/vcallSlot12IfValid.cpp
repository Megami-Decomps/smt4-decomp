/* Calls the object's vtable slot 12 (tail call) when the object exists. */
#include "common.h"

extern "C" {

struct Object;

typedef struct {
    void *slots00[12];              /* 0x00 */
    void (*method)(Object *self);   /* 0x30 */
} ObjectVtbl;

struct Object {
    const ObjectVtbl *vtbl; /* 0x00 */
};

void vcallSlot12IfValid(Object *self)
{
    if (self != NULL) {
        self->vtbl->method(self);
    }
}

} /* extern "C" */
