#include "shard/Shard0044.h"

extern "C" {

/* Calls slot 3 of the owner's interface for every element of the other object's range (+0x164..+0x168). */
void ifaceOwnerForEach544(IfaceOwner8 *owner, RangeOwner *range)
{
    u32 *p;
    u32 *end;

    if (owner->iface != NULL) {
        end = range->end;
        for (p = range->begin; p != end; p++) {
            owner->iface->vtbl->slot3(owner->iface, *p);
        }
    }
}

} /* extern "C" */
