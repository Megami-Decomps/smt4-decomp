/* Copy-constructs the object from `src`: installs the vtable, clears the flag and counters and copies the owner word. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 owner;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} Object;

extern u8 DAT_00558620;

void FUN_00104710(Object *obj, const Object *src)
{
    u32 owner;

    obj->vtbl = &DAT_00558620;
    obj->flag = 0;
    owner = src->owner;
    obj->unk0C = 0;
    obj->unk10 = 0;
    obj->owner = owner;
}

}
