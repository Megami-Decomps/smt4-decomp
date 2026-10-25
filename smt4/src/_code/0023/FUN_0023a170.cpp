#include "common.h"

extern "C" {

struct Object0023a170;

typedef struct Object0023a170Vtbl {
    /* 0x00 */ void *slots[12];
    /* 0x30 */ void (*run)(struct Object0023a170 *self);
} Object0023a170Vtbl;

typedef struct Object0023a170 {
    /* 0x0 */ const Object0023a170Vtbl *vtbl;
} Object0023a170;

/* Calls the object's virtual function at 0x30; returns 0, or the failure result 0xC8804465 for a NULL object. */
u32 FUN_0023a170(Object0023a170 *object)
{
    if (object != NULL) {
        object->vtbl->run(object);
        return 0;
    }
    return 0xC8804465;
}

} /* extern "C" */
