/* NON_MATCHING: calls retail's integer remove_copy and clears the node when the range shrinks; the register allocation and final removed-flag test still differ. */
#include <algorithm>
#include "common.h"

namespace std {
/* The integer specialization is emitted out of line in this release. */
template <>
s32 *remove_copy<s32 *, s32 *, s32>(s32 *, s32 *, s32 *, const s32 &);
}

#include "AsdSDK/Source/Gfx/Model/AsdModelSlot.h"

/* Removes a slot from the registration list and detaches it if it was registered. */
extern "C" bool FUN_00197eb0(ModelSlotVectorA *slots, s32 handle)
{
    bool removed = asdModelSlotErase(slots, handle);
    if (removed) {
        ((ModelSlot *)handle)->attached = 0;
    }
    return removed;
}
