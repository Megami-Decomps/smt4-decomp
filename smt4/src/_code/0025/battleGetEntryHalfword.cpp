#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "battle/btlHelp.h"
extern "C" {
/* Read an indexed signed battle-entry value, or zero when the entry is absent. */
s32 battleGetEntryHalfword(u32 id,u32 index) { BtlEntry *entry=btlMainFindEntryByListedId(btlGetMainState(),id); return entry!=NULL ? entry->stat[index] : 0; }
}
