/* NON_MATCHING: Thumb register choice and store order only: retail loads the vtable first (r1) and stores it last */
/* Constructs the object and returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_002f5928 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2c */ u8 unk2c;
};

extern const u8 DAT_00559bf8[];
ObjFUN_002f5928 *FUN_002e7168(ObjFUN_002f5928 *obj);

ObjFUN_002f5928 *FUN_002f5928(ObjFUN_002f5928 *obj)
{
    obj = FUN_002e7168(obj);
    obj->unk2c = 2;
    obj->vtable = DAT_00559bf8;
    return obj;
}

}
