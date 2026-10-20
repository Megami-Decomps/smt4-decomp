/* NON_MATCHING: register allocation only: retail keeps the vtable address in r1 and the zero in r2, passing it with `mov r1, r2`; built reuses r1 for the zero. */
#include "common.h"

extern "C" {

typedef struct Member Member;

typedef struct Object {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[0xB];
    /* 0x10 */ u8 member[1];
} Object;

extern u8 DAT_0055a9e8;
extern u8 DAT_0055ad7c;

u8 *FUN_003038fc(u8 *member, s32 arg);

/* Constructs the object: base vtable, cleared flag, the member at 0x10, then the final vtable. */
void FUN_0030ca9c(Object *object)
{
    Object *self;

    object->vtable = &DAT_0055ad7c;
    object->flag = 0;
    self = (Object *)(FUN_003038fc(object->member, 0) - 0x10);
    self->vtable = &DAT_0055a9e8;
}

} /* extern "C" */
