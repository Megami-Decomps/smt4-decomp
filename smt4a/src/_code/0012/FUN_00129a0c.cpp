/* Destroys the object: sets its vtable, runs the base teardown, then destroys the members at +0x20
 * and +0x0c (each destructor returns its argument) and the base subobject. Returns the object. */
#include "common.h"
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

void FUN_0030ccc0(u8 *table, Obj00129a0c *obj);
void FUN_00129960(Obj00129a0c *obj);
u8 *FUN_0030cba8(u8 *member);
__weak Obj00129a0c *FUN_00129a0c_baseDtor(Obj00129a0c *obj);

Obj00129a0c *FUN_00129a0c(Obj00129a0c *obj)
{
    u8 *member;

    obj->vtable = DAT_0055998c;
    FUN_0030ccc0(DAT_00594b24, obj);
    FUN_00129960(obj);
    member = FUN_0030cba8(obj->member20);
    member = FUN_0030cba8(member - (offsetof(Obj00129a0c, member20) - offsetof(Obj00129a0c, member0c)));
    return FUN_00129a0c_baseDtor((Obj00129a0c *)(member - offsetof(Obj00129a0c, member0c)));
}

}
