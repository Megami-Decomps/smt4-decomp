/* NON_MATCHING: vtable literal loading and receiver/prologue scheduling differ from retail. */
#include "classes/Obj4209cc.h"

extern "C" const u32 _ZTV9Obj4209cc[];
extern "C" void FUN_00421130(Obj4209ccCallbackView *object);
extern "C" void asdOperatorDelete(void *block);

/* Reset the derived vtable before destroying the owned resources and allocation. */
extern "C" void FUN_00421944(Obj4209ccCallbackView *object)
{
    object->vtable = _ZTV9Obj4209cc + 2;
    FUN_00421130(object);
    asdOperatorDelete(object);
}
