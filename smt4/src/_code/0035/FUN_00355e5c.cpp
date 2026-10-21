#include "common.h"

extern "C" {

int FUN_002ad958(int a);

struct Target;
typedef struct TargetVtbl {
    /* 0x0 */ void (*run)(struct Target *target, u32 a, u32 b, u32 c);
} TargetVtbl;

typedef struct Target {
    /* 0x0 */ TargetVtbl *vtbl;
} Target;

void FUN_00355e5c(u32 a, Target *target, u32 b, u32 c)
{
    FUN_002ad958(1);
    target->vtbl->run(target, a, b, c);
}

} /* extern "C" */
