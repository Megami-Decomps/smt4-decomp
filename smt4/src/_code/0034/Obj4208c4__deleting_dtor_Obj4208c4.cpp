/* NON_MATCHING: C-form vtable restoration loads the address after the push and adds a move; retail's deleting destructor loads its vtable before saving registers. */
#include "shard/VObject.h"

extern "C" {
extern const u32 _ZTV9Obj4208c4[];
void objectPoolDestroy(VObject *object);
int asdMemFreeNonNull(void *block);
}

/* Restore the pool's vtable, destroy its lists, and release the allocation. */
extern "C" void _ZN9Obj4208c4D0Ev(VObject *object)
{
    object->vtbl = _ZTV9Obj4208c4 + 2;
    objectPoolDestroy(object);
    asdMemFreeNonNull(object);
}
