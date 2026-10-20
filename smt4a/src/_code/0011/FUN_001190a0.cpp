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

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 mode;
} Holder;

/* Releases the object `*objectRef` when the holder's mode is 2, then destroys it if it exists. */
void FUN_001190a0(Holder *holder, Object **objectRef)
{
    Object *object = *objectRef;

    if (holder->mode == 2) {
        object->vtbl->release(object);
    }
    if (object != NULL) {
        object->vtbl->destroy(object);
    }
}

} /* extern "C" */
