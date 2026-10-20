/* NON_MATCHING: retail subtracts 12 from the returned pointer explicitly (subs r0, #12) and stores at +40/+36; the compiler folds the -12 into the offsets here. The 2-byte pool pad also differs in disassembly only. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 member[0x0C];     /* embedded sub-object */
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ u32 field28;
    /* 0x2C */ u32 field2C;
} Object;

extern u8 DAT_00559e44;

Object *FUN_002ea6e8(void);
u8 *FUN_002ec75c(void *member);

/* Constructs an Object: installs the vtable, constructs its member and stores two values into the enclosing object. */
void FUN_002ec6ec(u32 unused, u32 a, u32 b)
{
    Object *obj = FUN_002ea6e8();

    obj->vtbl = &DAT_00559e44;
    obj = (Object *)(FUN_002ec75c(obj->member) - 0xc);
    obj->field2C = b;
    obj->field28 = a;
}

} /* extern "C" */
