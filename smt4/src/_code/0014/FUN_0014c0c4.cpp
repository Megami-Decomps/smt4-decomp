#include "common.h"

extern "C" {

extern u8 DAT_00421adc;

typedef struct Obj {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
} Obj;

/* Constructor: installs the vtable at DAT_00421adc and clears the fields. */
void FUN_0014c0c4(Obj *obj)
{
    obj->unk04 = 0;
    obj->vtbl = &DAT_00421adc;
    obj->unk08 = 0;
    obj->unk0C = 0;
    obj->unk10 = 0;
    obj->unk14 = 0;
    obj->unk18 = 0;
    obj->unk1C = 0;
}

} /* extern "C" */
