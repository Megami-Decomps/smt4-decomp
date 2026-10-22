#include "classes/Obj420a2c.h"

/* Retrieve one value from the first output pair. */
extern "C" u32 _ZNK9Obj420a2c9getOutputEj(const Obj420a2c *object, u32 index)
{
    return object->outA[index];
}
