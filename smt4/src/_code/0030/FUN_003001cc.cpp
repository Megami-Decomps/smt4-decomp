#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

extern "C" {
u32 scrGetArg(u32);
void scrSetResult(s32);

u32 FUN_003001cc(void)
{
    u32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (entry != NULL && index >= 0 && index < 9)
        scrSetResult(entry->modifiers[index]);
    else
        scrSetResult(0);
    return 1;
}
}
