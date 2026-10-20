#include "common.h"

extern "C" {

void FUN_00227048(u32 handle, u8 *member);

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ u8 member24[0xEA];
    /* 0x10E */ u8 active;
} Object;

/* When the object `*ref` is active, passes its handle and its member at 0x24 to FUN_00227048; always returns 0. */
u32 FUN_002a27e8(Object **ref)
{
    Object *object;

    object = *ref;
    if (object->active != 0) {
        FUN_00227048(object->handle, object->member24);
    }
    return 0;
}

} /* extern "C" */
