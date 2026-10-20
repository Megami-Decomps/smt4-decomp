/* NON_MATCHING: Thumb register choice and store order only: retail loads the vtable first (r1) and stores it last */
/* Constructs the object and returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_003054a4 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x3c];
    /* 0x40 */ u32 unk40;
};

extern const u8 DAT_00558d28[];
ObjFUN_003054a4 *FUN_002f4f3c(ObjFUN_003054a4 *obj);

ObjFUN_003054a4 *FUN_003054a4(ObjFUN_003054a4 *obj)
{
    obj = FUN_002f4f3c(obj);
    obj->vtable = DAT_00558d28;
    obj->unk40 = 0;
    return obj;
}

}
