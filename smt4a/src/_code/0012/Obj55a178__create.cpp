#include "classes/Obj55a178.h"

extern "C" Obj55a178 *FUN_00311780(Obj55a178 *, s32);
extern "C" void *_Znwj(u32);

Obj55a178 *Obj55a178::create()
{
    Obj55a178 *object = (Obj55a178 *)_Znwj(0x44);
    if (object != NULL) {
        object = FUN_00311780(object, 0);
    }
    return object;
}
