/* Constructs the object: sets its vtable and runs the base constructor; returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_002ede60 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_005585d0[];
void onlineSockAddrCopy(ObjFUN_002ede60 *obj);

ObjFUN_002ede60 *onlineSockAddrConstruct2(ObjFUN_002ede60 *obj)
{
    obj->vtable = DAT_005585d0;
    onlineSockAddrCopy(obj);
    return obj;
}

}
