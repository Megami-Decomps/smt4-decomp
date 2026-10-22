#include "classes/Obj420a2c.h"

// Read one word of the first output pair.
extern "C" u32 _ZNK9Obj420a2c13getOutputWordEj(Obj420a2c *self, u32 index)
{
    return self->outA[index];
}
