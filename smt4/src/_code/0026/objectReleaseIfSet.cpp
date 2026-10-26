#include "common.h"
#include "code/Code0026_Smt4.h"

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
void objectReleaseIfSet(Object *object)
{
    if (object != NULL) {
        object->vtbl->method1(object);
    }
}

} /* extern "C" */
