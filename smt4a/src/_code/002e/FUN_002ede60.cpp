/* Constructs the object: sets its vtable and runs the base constructor; returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_002ede60 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_005585d0[];
void FUN_002e9538(ObjFUN_002ede60 *obj);

ObjFUN_002ede60 *FUN_002ede60(ObjFUN_002ede60 *obj)
{
    obj->vtable = DAT_005585d0;
    FUN_002e9538(obj);
    return obj;
}

}
