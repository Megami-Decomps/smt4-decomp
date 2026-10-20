#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*run)(Target *target);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Target *target;
} Holder;

/* Runs the held target's run method. */
void FUN_0015d434(Holder *object)
{
    object->target->vtbl->run(object->target);
}

} /* extern "C" */
