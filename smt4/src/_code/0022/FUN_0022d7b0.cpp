#include "common.h"

extern "C" {

int FUN_002332e8(void *target, u32 a, u32 b);
extern u32 FUN_00240d5c(void *block);
extern u32 FUN_0029e924(void *block);

struct Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*method4)(struct Target *target, u32 arg);
} TargetVtbl;

typedef struct Target {
    /* 0x0 */ TargetVtbl *vtbl;
} Target;

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 block[0x570];
    /* 0x590 */ Target *target;
} Obj;

void FUN_0022d7b0(Obj *obj, u32 arg)
{
    u32 a = FUN_00240d5c(obj->block);
    u32 b = FUN_0029e924(obj->block);

    FUN_002332e8(obj->target, b, a);
    obj->target->vtbl->method4(obj->target, arg);
}

} /* extern "C" */
