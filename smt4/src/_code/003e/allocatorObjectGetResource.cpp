#include "classes/Obj4214b4.h"

/* Return the resource retained by this allocator-owned object. */
extern "C" void *allocatorObjectGetResource(const Obj4214b4 *object)
{
    return object->getResource();
}
