/* NON_MATCHING: retail uses native deleting-destructor pointer recovery and a pre-prologue vtable load; this wrapper retains the owner across member destruction. */
#include "common.h"
#include "classes/Obj55c920.h"

extern "C" void asdOperatorDelete(void *allocation);
extern "C" u8 _ZTV9Obj55c920[];

// Destroy the embedded touch selection before releasing the owner.
extern "C" void FUN_004a45b4(Obj55c920 *object)
{
    *reinterpret_cast<void **>(object) = _ZTV9Obj55c920 + 8;
    object->touchSelection.~Obj55ca08();
    asdOperatorDelete(object);
}
