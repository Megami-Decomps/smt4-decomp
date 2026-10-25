#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
struct BattleEntry { u8 unk00[116]; u32 values[1]; };
extern "C" {
BattleEntry *FUN_003f0e20(void *battle,u32 id);
/* Reads an indexed word of the selected battle entry. */
s32 btlFindEntryValue(s32 id, u32 index) { BattleEntry *entry=FUN_003f0e20(static_cast<void *>(btlGetMainState()),id);return entry != NULL ? entry->values[index] : 0; }
}
