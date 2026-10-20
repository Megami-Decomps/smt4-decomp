#include "common.h"

extern "C" {

void sharedRefHolderSet(void *object, u32 arg);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[8];
    /* 0x20 */ void (*reset)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

/* Resets the object through its vtable, then runs sharedRefHolderSet(object, arg). */
void FUN_002ee50c(Object *object, u32 arg)
{
    object->vtbl->reset(object);
    sharedRefHolderSet(object, arg);
}

} /* extern "C" */
