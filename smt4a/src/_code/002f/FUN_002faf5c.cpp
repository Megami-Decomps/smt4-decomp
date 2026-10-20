/* Thunk: calls the object's virtual method at slot 2 with the object and the caller's argument. */
#include "common.h"

extern "C" {

struct Object;

typedef struct ObjectVtbl {
    /* 0x00 */ void *slots[2];
    /* 0x08 */ void (*method2)(struct Object *obj, u32 arg);
} ObjectVtbl;

typedef struct Object {
    /* 0x00 */ ObjectVtbl *vtbl;
} Object;

void FUN_002faf5c(Object *obj, u32 arg)
{
    obj->vtbl->method2(obj, arg);
}

}
