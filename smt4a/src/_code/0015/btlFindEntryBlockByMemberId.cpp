/* NON_MATCHING: the outer fixed-capacity index and entry base now use retail's registers; the member-id lookup's scratch registers and loop condition differ. */
#include "battle/BtlGlobals.h"
#include "battle/BtlEntryA.h"

extern "C" {

/* Returns the data block of the first battle entry listing this member, or NULL. */
BtlUnitDataA *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 id)
{
    BtlUnitDataA *result = NULL;
    for (u32 unit = 0; unit < 109; unit++) {
        for (s32 i = 0; i < 50; i++) {
            s32 entry = state->entries[unit].ids[i];

            if (entry < 0) {
                break;
            }
            if (entry == id) {
                result = &state->entries[unit].data;
                return result;
            }
        }
    }
    return result;
}

} /* extern "C" */
