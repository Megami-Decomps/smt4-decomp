/* NON_MATCHING: 4 lines: with the table indexed at each use only the loop test differs (retail compares index,count;
 * the build count,index); the flag sub-block address matches. */
#include "shard/W9_W9Match7_FlagGatedEntries.h"

// The entry's flag block starts 0x100 bytes in (retail addresses requiredFlag/excludedFlag from entry + 0x100).
struct FlagGate {
    u8 unk00[0x60];
    s16 requiredFlag; // 0x60
    s16 excludedFlag; // 0x62
};

extern "C" {
extern FlagGatedEntryState DAT_00580c90;
extern FlagGatedEntry g_recordTable[];
int gameFlagIsSet(s32 flag);

/* Disable live entries whose required flag is absent or exclusion flag is set. */
void FUN_002b79d8(void)
{
    for (s32 index = 0; index < DAT_00580c90.count; ++index) {
        const FlagGate *gate = reinterpret_cast<const FlagGate *>(reinterpret_cast<u8 *>(&g_recordTable[index]) + 0x100);
        if (!g_recordTable[index].disabled && g_recordTable[index].object &&
            ((gate->requiredFlag && !gameFlagIsSet(gate->requiredFlag)) ||
             (gate->excludedFlag && gameFlagIsSet(gate->excludedFlag)))) {
            g_recordTable[index].disabled = 1;
        }
    }
}
}
