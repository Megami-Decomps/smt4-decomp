#include "common.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[15];
    /* 0x3C */ void (*update)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

s32 FUN_0030161c(Object *object);

/* Runs the object's update method and returns 1 when FUN_0030161c then reports 0x4. */
u32 FUN_00115b68(Object *object)
{
    object->vtbl->update(object);
    if (FUN_0030161c(object) != 0x4) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
