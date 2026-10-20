#include "common.h"

extern "C" {

extern u8 DAT_0042221c;

typedef struct Obj {
    /* 0x0 */ const void *vtbl;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Obj;

/* Constructor: installs the vtable at DAT_0042221c and clears the fields. */
void FUN_0038c030(Obj *obj)
{
    obj->unk4 = 0;
    obj->vtbl = &DAT_0042221c;
    obj->unk8 = 0;
}

} /* extern "C" */
