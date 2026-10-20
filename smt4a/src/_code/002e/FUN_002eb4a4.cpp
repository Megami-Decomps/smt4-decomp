#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 value;
    /* 0x10 */ u8 flag;
} Object;

extern u8 DAT_0055a284;

Object *FUN_002eb994(Object *self);
int FUN_002f5940(void);

/* Constructor: runs the base constructor, installs the vtable and initialises the fields (`value` from the third argument). */
Object *FUN_002eb4a4(Object *self, u32 unused, u32 value)
{
    Object *obj = FUN_002eb994(self);

    obj->vtbl = &DAT_0055a284;
    FUN_002f5940();
    obj->value = value;
    obj->unk08 = 0;
    obj->flag = 0;
    return obj;
}

} /* extern "C" */
