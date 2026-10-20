#include "common.h"

extern "C" {

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*method1)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

/* Calls virtual method 1 when the object exists. */
void FUN_001ab998(Object *object)
{
    if (object != NULL) {
        object->vtbl->method1(object);
    }
}

} /* extern "C" */
