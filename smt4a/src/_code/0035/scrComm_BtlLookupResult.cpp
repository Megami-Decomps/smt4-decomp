#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {


extern u32 scrGetArg(u32 index);
extern int scrSetResult(u32 value);

/* Script command: looks up the entry for argument 0 and pushes its result word. */
u32 scrComm_BtlLookupResult(void)
{
    u32 index = scrGetArg(0);
    scrSetResult(btlFindEntryBlockByMemberId(btlGetMainState(), index)->id);
    return 1;
}

} /* extern "C" */
