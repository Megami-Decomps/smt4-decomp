#include "common.h"
#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


extern s32 scrGetArg(s32 index);
extern BtlEntry *btlMainFindActiveEntry(void);
extern u32 btlScriptResolveGroupArg(void);
extern void FUN_002499fc(u32 group, s32 *first, s32 *count);

/* Script command: sets the result to 1 when a live entry (or the active one) has state 2 in the argument's slot. */
s32 FUN_002f0ee0(void)
{
    s32 slot = scrGetArg(0);
    s32 first;
    s32 count;

    scrGetArg(1);
    FUN_002499fc(btlScriptResolveGroupArg(), &first, &count);
    for (s32 i = first; i < first + count; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && entry->values[slot] >> 10 == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        btlGetMainState();
        BtlEntry *entry = btlMainFindActiveEntry();
        if (entry != NULL && entry->values[slot] >> 10 == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
