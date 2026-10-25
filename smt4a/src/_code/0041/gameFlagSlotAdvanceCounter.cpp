#include "common.h"
#include "shard/W6_W6Match2_GeometryResources.h"
struct FlagEntry {u8 flags;u8 counter;u8 unk02[2];};
struct FlagBlock {u8 unk000[672];FlagEntry entries[1];};
extern "C" {
FlagBlock *gameFlagBlockGet();
/* Advances the indexed flag counter and marks the entry updated. */
void gameFlagSlotAdvanceCounter(u32 index){FlagEntry *entry=&gameFlagBlockGet()->entries[index];if(entry->counter==0)entry->counter=2;else ++entry->counter;entry->flags|=64;}
}
