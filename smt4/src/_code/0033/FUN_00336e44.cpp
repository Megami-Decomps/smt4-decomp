/* NON_MATCHING: Retail push {r4, r5, r6, r7, lr} differs from recovered push {r4, r5, r6, r7, r8, lr}. */
#include "common.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"

// Search eligible slots 4 through 53 for a lookup containing the requested value.
extern "C" u32 FUN_00336e44(BtlMainState* context, u32 value)
{
    for (s32 slotIndex = 4; slotIndex < 54; ++slotIndex) {
        const BtlEntry* slot = &context->entries[slotIndex];
        if ((slot->flags & 1) == 0 || (slot->flags & 0x40) != 0) {
            continue;
        }

        const BtlUnitData* lookup = btlFindEntryBlockByMemberId(context, slot->ids[0]);
        if (lookup != 0) {
            for (s32 valueIndex = 0; valueIndex < 50; ++valueIndex) {
                if (lookup->parts[valueIndex] == value) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
