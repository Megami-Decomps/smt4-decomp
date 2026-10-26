#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[17];
    /* 0x44 */ void (*method)(Target *target, u32 argument);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Forwarder {
    /* 0x00 */ u8 unk00[4];
    /* 0x4 */ Target *target;
} Forwarder;

/* Forwards to the held target's virtual method at vtable offset 0x44. */
void FUN_0042a894(Forwarder *object, u32 argument)
{
    object->target->vtbl->method(object->target, argument);
}

} /* extern "C" */
