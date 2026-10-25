#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {
BtlEntry *btlMainFindActiveEntry(BtlMainState *);
u32 scrGetArg(s32);
u32 btlScriptResolveGroupArg(u32);
void FUN_002499fc(u32, s32 *, s32 *);
void scrSetResult(s32);

// Find an available combatant of the requested ID with a selected statistic equal to the value.
u32 FUN_002ff624(void)
{
    u32 id = scrGetArg(0);
    u32 group = btlScriptResolveGroupArg(scrGetArg(1));
    s32 kind = scrGetArg(2);
    s32 column = 0;
    if (kind == 0)
        column = 7;
    else if (kind == 1)
        column = 10;
    else if (kind == 2)
        column = 11;
    s32 value = scrGetArg(3);
    s32 first, count;
    FUN_002499fc(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 && entry->id == id && entry->stat[column] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && entry->stat[column] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
