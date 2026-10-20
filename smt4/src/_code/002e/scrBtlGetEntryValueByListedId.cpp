#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

extern BtlMainState *btlGetMainState(void);
extern BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, u32 id);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(s32 value);

/* Script command: returns the value of the battle entry with the given listed id (0 if there is none). */
u32 scrBtlGetEntryValueByListedId(void)
{
    u32 id = scrGetArg(0);
    s32 result = 0;
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        result = entry->value;
    }
    scrSetResult(result);
    return 1;
}

}
