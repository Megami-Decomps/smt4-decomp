#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0xc */ void (*method)(Target *target);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Forwarder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Target *target;
} Forwarder;

/* Forwards to the held target's virtual method at vtable offset 0xc. */
void FUN_00508568(Forwarder *object)
{
    object->target->vtbl->method(object->target);
}

} /* extern "C" */
