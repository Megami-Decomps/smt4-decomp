#include "common.h"
#include "battle/BtlEntryLookup.h"

// Set bit 0x10 in the selected target flag bank unless either owner disables it.
extern "C" void btlTargetSetFlag10(BtlMainState* owner, s32 targetId, s32 primary)
{
    if ((owner->battleFlags & 0x40000) == 0) {
        BtlUnitData* target = btlFindEntryBlockByMemberId(owner, targetId);
        if ((target->flags & 8) == 0 && target != NULL) {
            u16 flags = primary ? target->primaryFlags : target->alternateFlags;
            flags |= 0x10;
            if (primary) {
                target->primaryFlags = flags;
            } else {
                target->alternateFlags = flags;
            }
        }
    }
}
