#include "common.h"

extern "C" {

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x1CF8];
    /* 0x1CF8 */ Object *child;
} Obj;

void FUN_003da0bc(Obj *obj)
{
    Object *child = obj->child;

    if (child != NULL) {
        child->vtbl->destroy(child);
        obj->child = NULL;
    }
}

} /* extern "C" */
