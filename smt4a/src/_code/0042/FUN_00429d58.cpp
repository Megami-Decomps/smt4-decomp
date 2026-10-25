#include "common.h"

extern "C" {

struct Object00429d58;

typedef struct Object00429d58Vtbl {
    /* 0x00 */ void *slots[12];
    /* 0x30 */ void (*run)(struct Object00429d58 *self);
} Object00429d58Vtbl;

typedef struct Object00429d58 {
    /* 0x0 */ const Object00429d58Vtbl *vtbl;
} Object00429d58;

/* Calls the object's virtual function at 0x30; returns 0, or the failure result 0xC8804465 for a NULL object. */
u32 FUN_00429d58(Object00429d58 *object)
{
    if (object != NULL) {
        object->vtbl->run(object);
        return 0;
    }
    return 0xC8804465;
}

} /* extern "C" */
