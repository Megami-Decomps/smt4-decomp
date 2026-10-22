#include "classes/Obj4209cc.h"

// Release a block through the same allocator used by the object.
extern "C" void _ZN9Obj4209ccdlEPv(void *block)
{
    asdMemFreeNonNull(block);
}
