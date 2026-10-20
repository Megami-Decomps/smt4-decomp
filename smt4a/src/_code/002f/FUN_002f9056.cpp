#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[10];
    /* 0x28 */ void (*handle)(Target *target, s32 arg);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Target *target;
} Holder;

/* Forwards `arg` to the held target's handle method (slot 10). */
void FUN_002f9056(Holder *object, s32 arg)
{
    object->target->vtbl->handle(object->target, arg);
}

} /* extern "C" */
