/* Destroys the object: sets its vtable, runs the base teardown, then destroys the members at +0x20
 * and +0x0c (each destructor returns its argument) and the base subobject. Returns the object. */
#include "common.h"
#include <stddef.h>

extern "C" {

struct Obj00129db4 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u8 member0c[0x14];
    /* 0x20 */ u8 member20[4];
};

extern const u8 DAT_00559a1c[];
extern u8 DAT_00594b24[];

void onlineObjectListRemove(u8 *table, Obj00129db4 *obj);
void FUN_00129d08(Obj00129db4 *obj);
u8 *FUN_0030cb88(u8 *member);
__weak Obj00129db4 *FUN_00129db4_baseDtor(Obj00129db4 *obj);

Obj00129db4 *FUN_00129db4(Obj00129db4 *obj)
{
    u8 *member;

    obj->vtable = DAT_00559a1c;
    onlineObjectListRemove(DAT_00594b24, obj);
    FUN_00129d08(obj);
    member = FUN_0030cb88(obj->member20);
    member = FUN_0030cb88(member - (offsetof(Obj00129db4, member20) - offsetof(Obj00129db4, member0c)));
    return FUN_00129db4_baseDtor((Obj00129db4 *)(member - offsetof(Obj00129db4, member0c)));
}

}
