/* NON_MATCHING: register allocation only: retail keeps obj/arg in r5/r4 and the method pointer in r2 (built r4/r5, r3) */
/* Calls FUN_002ec8a8 on `arg`, then invokes the object's virtual method at slot 5 with it; returns 0. */
#include "common.h"

extern "C" {

struct Object;

typedef struct ObjectVtbl {
    /* 0x00 */ void *slots0to4[5];
    /* 0x14 */ void (*method5)(struct Object *obj, u32 arg);
} ObjectVtbl;

typedef struct Object {
    /* 0x00 */ ObjectVtbl *vtbl;
} Object;

extern s32 FUN_002ec8a8(u32 arg);

u32 FUN_002fdfa6(Object *obj, u32 unused, u32 arg)
{
    FUN_002ec8a8(arg);
    obj->vtbl->method5(obj, arg);
    return 0;
}

}
