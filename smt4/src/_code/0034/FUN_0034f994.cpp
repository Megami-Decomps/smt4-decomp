#include "common.h"

extern "C" {

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void (*destroy)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

struct Owner;
typedef struct OwnerVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*release)(struct Owner *owner, Object *object);
} OwnerVtbl;

typedef struct Owner {
    /* 0x0 */ OwnerVtbl *vtbl;
} Owner;

/* Destroys the object, then has the owner release it. */
void FUN_0034f994(u32 unused, Owner *owner, Object *object)
{
    object->vtbl->destroy(object);
    owner->vtbl->release(owner, object);
}

} /* extern "C" */
