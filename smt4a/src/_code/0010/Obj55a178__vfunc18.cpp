#include "classes/Obj55a178.h"

// Forward this hook to virtual slot 0x38.
extern "C" s32 _ZN9Obj55a1787vfunc18Ev(Obj55a178TableView *object)
{
    return object->vtable->invoke38(object);
}
