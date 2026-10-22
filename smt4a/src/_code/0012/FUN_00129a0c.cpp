/* Destroys the object: sets its vtable, runs the base teardown, then destroys the members at +0x20
 * and +0x0c (each destructor returns its argument) and the base subobject. Returns the object. */
#include "common.h"

/* Retail consumes the destructor's returned owner; a native call adds save/restores. */
extern "C" u8 *_ZN9Obj55ad40D1Ev(u8 *member);
#include "classes/Obj55ad40.h"
#include <stddef.h>

extern "C" {

struct Obj00129a0c {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u8 member0c[0x14];
    /* 0x20 */ u8 member20[4];
};

extern const u8 DAT_0055998c[];
extern u8 DAT_00594b24[];

void onlineObjectListRemove(u8 *table, Obj00129a0c *obj);
void FUN_00129960(Obj00129a0c *obj);
__weak Obj00129a0c *FUN_00129a0c_baseDtor(Obj00129a0c *obj);

Obj00129a0c *FUN_00129a0c(Obj00129a0c *obj)
{
    u8 *member;

    obj->vtable = DAT_0055998c;
    onlineObjectListRemove(DAT_00594b24, obj);
    FUN_00129960(obj);
    member = _ZN9Obj55ad40D1Ev(obj->member20);
    member = _ZN9Obj55ad40D1Ev(member - (offsetof(Obj00129a0c, member20) - offsetof(Obj00129a0c, member0c)));
    return FUN_00129a0c_baseDtor((Obj00129a0c *)(member - offsetof(Obj00129a0c, member0c)));
}

}
