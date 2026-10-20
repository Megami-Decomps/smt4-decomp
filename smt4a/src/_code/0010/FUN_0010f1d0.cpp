/* Constructs the object: sets its vtable and runs the base constructor; returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_0010f1d0 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_005592d4[];
void FUN_002eed74(ObjFUN_0010f1d0 *obj);

ObjFUN_0010f1d0 *FUN_0010f1d0(ObjFUN_0010f1d0 *obj)
{
    obj->vtable = DAT_005592d4;
    FUN_002eed74(obj);
    return obj;
}

}
