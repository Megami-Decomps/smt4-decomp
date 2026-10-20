#include "common.h"

extern "C" {

typedef struct Object Object;

/* Virtual table: slot 2 (0x8) is the forwarded method. */
typedef struct {
    void *slots[2];
    void (*method)(Object *self);   /* 0x08 */
} ObjectVtbl;

struct Object {
    const ObjectVtbl *vtbl;
};

/* Virtual thunk: calls slot 2 of the object's vtable on the same object. */
void FUN_00110494(Object *object)
{
    object->vtbl->method(object);
}

} /* extern "C" */
