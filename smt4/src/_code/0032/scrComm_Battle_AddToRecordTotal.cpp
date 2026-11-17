#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);

/* Adds entry 1 to the accumulator of the record selected by entry 0; always reports success. */
u32 scrComm_Battle_AddToRecordTotal(void)
{
    u32 id = scrGetArg(0);
    u32 amount = scrGetArg(1);
    BtlEntry *record = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (record != NULL) {
        record->data.total += amount;
    }
    return 1;
}

} /* extern "C" */
