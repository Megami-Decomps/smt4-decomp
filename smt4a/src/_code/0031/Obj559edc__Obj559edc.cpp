/* NON_MATCHING: Thumb register choice and store order only: retail loads the vtable first (r1) and stores it last */
/* Constructs the object and returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_00311490 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
};

extern const u8 DAT_00559514[];
ObjFUN_00311490 *FUN_00117b3c(ObjFUN_00311490 *obj);

ObjFUN_00311490 *_ZN9Obj559edcC1Ev(ObjFUN_00311490 *obj)
{
    obj = FUN_00117b3c(obj);
    obj->vtable = DAT_00559514;
    obj->unk08 = 0;
    obj->unk0c = 0;
    return obj;
}

}
