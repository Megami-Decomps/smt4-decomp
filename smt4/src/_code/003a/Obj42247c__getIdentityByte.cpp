#include "classes/Obj42247c.h"

// Read the signed identity byte stored in the view's common prefix.
extern "C" s32 _ZNK9Obj42247c15getIdentityByteEv(Obj42247c *self)
{
    return (s8)self->unk004[12];
}
