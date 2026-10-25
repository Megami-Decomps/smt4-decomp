#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/battleGetEntryHalfword.h"
extern "C" {
struct BattleEntryValues { u8 unk00[0x72]; s16 values[1]; };
BattleEntryValues *btlMainFindEntryByListedId(void *battle,u32 id);
/* Read an indexed signed battle-entry value, or zero when the entry is absent. */
s32 battleGetEntryHalfword(u32 id,u32 index) { BattleEntryValues *entry=btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()),id); return entry!=NULL ? entry->values[index] : 0; }
}
