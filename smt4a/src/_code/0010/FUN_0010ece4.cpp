#include "common.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

void FUN_002e7228(u32 pool);
void FUN_002e7232(u32 pool);
void FUN_002ea3d0(u32 pool, Object *object);

/* Releases `object` within `pool`: runs FUN_002ea3d0, destroys the object if non-NULL, then closes the pool. */
void FUN_0010ece4(u32 pool, Object *object)
{
    FUN_002e7228(pool);
    FUN_002ea3d0(pool, object);
    if (object != NULL) {
        object->vtbl->destroy(object);
    }
    FUN_002e7232(pool);
}

} /* extern "C" */
