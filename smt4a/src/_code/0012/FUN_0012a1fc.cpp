/* Sets the object's vtable, registers it (onlineObjectListRemove), runs the base setup and returns it. */
#include "common.h"

extern "C" {

struct Obj0012a1fc {
    /* 0x00 */ const void *vtable;
};

extern const u8 DAT_00559b18[];
extern u8 DAT_00594b24[];

void onlineObjectListRemove(u8 *table, Obj0012a1fc *obj);
void FUN_0012a190(Obj0012a1fc *obj);
__weak Obj0012a1fc *FUN_0012a1fc_baseInit(Obj0012a1fc *obj);

Obj0012a1fc *FUN_0012a1fc(Obj0012a1fc *obj)
{
    obj->vtable = DAT_00559b18;
    onlineObjectListRemove(DAT_00594b24, obj);
    FUN_0012a190(obj);
    return FUN_0012a1fc_baseInit(obj);
}

}
