#include "battle/BtlGlobals.h"
#include "battle/BtlEntryA.h"

extern "C" {

/* Returns the data block of the first battle entry listing this member, or NULL. */
BtlUnitDataA *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 id)
{
    enum { ENTRY_COUNT = 109, MEMBER_ID_COUNT = 50 };
    BtlUnitDataA *result = NULL;
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
