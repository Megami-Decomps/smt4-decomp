#include "classes/Obj55859c.h"

extern "C" {
u32 FUN_002e9af4(Obj55859c *object);
void FUN_001140e8(u32 owner, u32 resource);
}

/* Hands the resource back to its owner and clears the field. */
void Obj55859c::freeResource()
{
    FUN_001140e8(FUN_002e9af4(this), resource);
    resource = 0;
}
