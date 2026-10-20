/* Constructs the object: runs the (removed) base constructor, then sets its vtable. */
#include "common.h"

extern "C" {

struct Obj002e5684 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_0064c010[];
__weak Obj002e5684 *FUN_002e5684_baseCtor(Obj002e5684 *obj);

Obj002e5684 *FUN_002e5684(Obj002e5684 *obj)
{
    obj = FUN_002e5684_baseCtor(obj);
    obj->vtable = DAT_0064c010;
    return obj;
}

}
