/* Sets the object's vtable, registers it (FUN_0030ccc0), runs the base setup and returns it. */
#include "common.h"

extern "C" {

struct Obj00129690 {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_005598fc[];
extern u8 DAT_00594b24[];

void FUN_0030ccc0(u8 *table, Obj00129690 *obj);
void FUN_001295e4(Obj00129690 *obj);
__weak Obj00129690 *FUN_00129690_baseInit(Obj00129690 *obj);

Obj00129690 *FUN_00129690(Obj00129690 *obj)
{
    obj->vtable = DAT_005598fc;
    FUN_0030ccc0(DAT_00594b24, obj);
    FUN_001295e4(obj);
    return FUN_00129690_baseInit(obj);
}

}
