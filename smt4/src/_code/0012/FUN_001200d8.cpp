#include "common.h"

extern "C" {

typedef struct Interface {
    void (**vtable)(struct Interface *self);
} Interface;

typedef struct Owner {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Interface *object;
} Owner;

/* Calls virtual method 4 of the owned object. */
void FUN_001200d8(Owner *owner)
{
    owner->object->vtable[4](owner->object);
}

} /* extern "C" */
