#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);

/* Script command: records argument 1 in the history ring of the battle entry with listed id argument 0. */
u32 btlEntryHistoryRecord(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    s32 *cursor;

    if (entry != NULL) {
        cursor = &entry->data.cursor;
        entry->data.history[*cursor] = value;
        *cursor = *cursor + 1;
        if (*cursor > 5) {
            *cursor = 0;
        }
    }
    return 1;
}

} /* extern "C" */
