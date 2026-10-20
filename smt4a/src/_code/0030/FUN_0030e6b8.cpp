/* Constructs the object and returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_0030e6b8 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_0055ad48[];
ObjFUN_0030e6b8 *FUN_003024c4(ObjFUN_0030e6b8 *obj, u32 flag);

ObjFUN_0030e6b8 *FUN_0030e6b8(ObjFUN_0030e6b8 *obj)
{
    obj = FUN_003024c4(obj, 1);
    obj->vtable = DAT_0055ad48;
    return obj;
}

}
