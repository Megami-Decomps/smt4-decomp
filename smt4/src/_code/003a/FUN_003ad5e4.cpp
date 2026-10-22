/* NON_MATCHING: retail uses native deleting-destructor pointer recovery and a pre-prologue vtable load; this wrapper retains the owner across member destruction. */
#include "common.h"
#include "classes/Obj42247c.h"

extern "C" void asdMemFreeNonNull(void *allocation);
extern "C" u8 _ZTV9Obj42247c[];

// Destroy the embedded touch selection before releasing the owner.
extern "C" void FUN_003ad5e4(Obj42247c *object)
{
    *reinterpret_cast<void **>(object) = _ZTV9Obj42247c + 8;
    object->touchSelection.~Obj55ca08();
    asdMemFreeNonNull(object);
}
