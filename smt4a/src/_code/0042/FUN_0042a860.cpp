#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[9];
    /* 0x24 */ void (*method)(Target *target, u32 argument);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Forwarder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Target *target;
} Forwarder;

/* Forwards to the held target's virtual method at vtable offset 0x24. */
void FUN_0042a860(Forwarder *object, u32 argument)
{
    object->target->vtbl->method(object->target, argument);
}

} /* extern "C" */
