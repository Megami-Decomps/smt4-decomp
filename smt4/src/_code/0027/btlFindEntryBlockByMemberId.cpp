#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Returns the data block of the first battle entry listing this member, or NULL. */
BtlUnitData *btlFindEntryBlockByMemberId(BtlMainState *state, s32 id)
{
    enum { ENTRY_COUNT = 109, MEMBER_ID_COUNT = 50 };
    BtlUnitData *result = NULL;
    for (s32 unit = 0; unit < ENTRY_COUNT; unit++) {
        for (s32 member = 0; member < MEMBER_ID_COUNT; member++) {
            if (state->entries[unit].ids[member] < 0) {
                break;
            }
            if (state->entries[unit].ids[member] == id) {
                result = &state->entries[unit].data;
                return result;
            }
        }
    }
    return result;
}

} /* extern "C" */
