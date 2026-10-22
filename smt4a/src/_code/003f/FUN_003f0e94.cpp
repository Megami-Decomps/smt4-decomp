/* NON_MATCHING: The compiler unrolls the lookup but uses different address bases and fewer saved registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" s32 FUN_003f0e94(const BtlMainStateA* state, s32 key)
{
    const BtlCombatantEntryA* entries = state->entries;
    for (s32 index = 0; index < 109; ++index) {
        if (entries[index].lookupView.lookupKey == key) {
            return entries[index].indexView.selectionIndex;
        }
    }
    return -1;
}
