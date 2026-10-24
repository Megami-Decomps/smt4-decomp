/* NON_MATCHING: retail uses native deleting-destructor pointer recovery (pre-prologue vtable load, pointer advanced by the member offset); this C form keeps the owner in r4. */
#include "classes/Obj4223f8.h"

extern "C" int asdMemFreeNonNull(void *block);
extern "C" u8 _ZTV9Obj42247c[];

/* Deleting destructor: installs the base vtable, destroys the embedded touch selection and releases the object. */
extern "C" void _ZN9Obj4223f8D0Ev(Obj4223f8 *object)
{
    *reinterpret_cast<void **>(object) = _ZTV9Obj42247c + 8;
    object->touchSelection.~Obj55ca08();
    asdMemFreeNonNull(object);
}
