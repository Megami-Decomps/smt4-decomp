#include "classes/Obj55a178.h"

// Forward this hook to virtual slot 0x38.
extern "C" s32 FUN_0010edb6(Obj55a178TableView *object)
{
    return object->vtable->invoke38(object);
}
