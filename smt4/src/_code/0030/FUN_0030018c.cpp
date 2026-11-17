#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
int scrSetResult(int value);

/* Looks up the record for entry 0 and passes its value (0 when missing) to scrSetResult. */
u32 FUN_0030018c(void)
{
    u32 id = scrGetArg(0);
    int value = 0;
    BtlEntry *record = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (record != NULL) {
        value = record->data.maxHp;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
