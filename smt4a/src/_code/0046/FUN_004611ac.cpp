/* NON_MATCHING: register allocation only: retail loads the vtable address into r2 and the offset 0x208 into r3 (swapped here) */
/* Resets the object: installs its vtable and clears the link and the 0x208 state fields. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u32 link;
    /* 0x008 */ u8 unk008[0x200];
    /* 0x208 */ u16 state;
    /* 0x20A */ u8 flag;
} Object;

extern u8 DAT_0055c11c;

void FUN_004611ac(Object *obj)
{
    obj->link = 0;
    obj->vtbl = &DAT_0055c11c;
    obj->state = 0;
    obj->flag = 0;
}

}
