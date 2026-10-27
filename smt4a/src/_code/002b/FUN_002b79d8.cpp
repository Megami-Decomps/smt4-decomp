/* NON_MATCHING: the count-state and array-base registers are swapped (r7/r8) and the loop test compares count,index instead of index,count; the flag sub-block address now matches. */
#include "shard/W9_W9Match7_FlagGatedEntries.h"

// The entry's flag block starts 0x100 bytes in (retail addresses requiredFlag/excludedFlag from entry + 0x100).
struct FlagGate {
    u8 unk00[0x60];
    s16 requiredFlag; // 0x60
    s16 excludedFlag; // 0x62
};

extern "C" {
extern FlagGatedEntryState DAT_00580c90;
extern FlagGatedEntry DAT_005f32a0[];
int gameFlagIsSet(s32 flag);

/* Disable live entries whose required flag is absent or exclusion flag is set. */
void FUN_002b79d8(void)
{
    for (s32 index = 0; index < DAT_00580c90.count; ++index) {
        FlagGatedEntry *entry = &DAT_005f32a0[index];
        const FlagGate *gate = reinterpret_cast<const FlagGate *>(reinterpret_cast<u8 *>(entry) + 0x100);
        if (!entry->disabled && entry->object &&
            ((gate->requiredFlag && !gameFlagIsSet(gate->requiredFlag)) ||
             (gate->excludedFlag && gameFlagIsSet(gate->excludedFlag)))) {
            entry->disabled = 1;
        }
    }
}
}
