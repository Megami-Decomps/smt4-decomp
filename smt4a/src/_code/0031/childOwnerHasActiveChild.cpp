#include "shard/Shard0031.h"

extern "C" {

/* True when the owner has a child that is not in mode 5. */
u32 childOwnerHasActiveChild(ChildOwner *owner)
{
    if (owner->child != NULL && owner->child->mode != 5) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
