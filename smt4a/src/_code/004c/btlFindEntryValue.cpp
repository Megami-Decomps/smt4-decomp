#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
extern "C" {
/* Reads an indexed word of the selected battle entry. */
s32 btlFindEntryValue(s32 id, u32 index) { BtlCombatantEntryA *entry=btlMainFindEntryByListedId(btlGetMainState(),id);return entry != NULL ? entry->properties[index] : 0; }
}
