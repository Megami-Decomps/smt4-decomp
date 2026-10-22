/* Constructs the object and returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_0030e6b8 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_0055ad48[];
ObjFUN_0030e6b8 *_ZN9Obj5590e4C1Eh(ObjFUN_0030e6b8 *obj, u32 flag);

ObjFUN_0030e6b8 *FUN_0030e6b8(ObjFUN_0030e6b8 *obj)
{
    obj = _ZN9Obj5590e4C1Eh(obj, 1);
    obj->vtable = DAT_0055ad48;
    return obj;
}

}
