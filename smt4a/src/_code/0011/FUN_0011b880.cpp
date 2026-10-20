#include "common.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
    /* 0x08 */ void (*release)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

/* Releases the object `*objectRef`, then destroys it if it exists (the first argument is unused). */
void FUN_0011b880(u32 unused, Object **objectRef)
{
    Object *object = *objectRef;

    object->vtbl->release(object);
    if (object != NULL) {
        object->vtbl->destroy(object);
    }
}

} /* extern "C" */
