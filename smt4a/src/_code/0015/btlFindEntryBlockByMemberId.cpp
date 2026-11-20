/* NON_MATCHING: the twin's search and return shape matches; the entry base, outer index and member-id addressing use different registers. */
#include "battle/BtlGlobals.h"
#include "battle/BtlEntryA.h"

extern "C" {

/* Returns the data block of the first battle entry listing this member, or NULL. */
BtlUnitDataA *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 id)
{
    BtlUnitDataA *result = NULL;
    for (s32 unit = 0; unit < 109; unit++) {
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
