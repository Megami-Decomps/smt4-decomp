#include "shard/Shard0031.h"

extern "C" {

extern void FUN_002edb54(Vector *vector, u32 count, u32 fill);

/* Resizes the vector at +0xC to `count` elements (new ones zero) and returns its data pointer. */
u32 vectorOwnerResize(VectorOwner *owner, u32 count)
{
    FUN_002edb54(&owner->vector, count, 0);
    return owner->vector.begin;
}

} /* extern "C" */
