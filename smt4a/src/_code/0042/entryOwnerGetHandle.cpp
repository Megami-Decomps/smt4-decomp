#include "classes/Obj420a2c.h"

/* Return the requested built-entry handle. */
extern "C" u32 entryOwnerGetHandle(const Obj420a2c *object, u32 index)
{
    return object->handles[index];
}
