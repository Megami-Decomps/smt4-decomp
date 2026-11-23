/* NON_MATCHING: 6 lines: with the table indexed at each use the count and table registers match; retail forms the
 * flag fields' base (entry + 0x100) before the first test, and compares index,count where the build compares
 * count,index (the Apocalypse twin FUN_002b79d8 has the same loop test). */
#include "common.h"

namespace {
struct ConditionalMapEntry {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u32 unk12C;
    /* 0x130 */ u8 unk130[0x30];
    /* 0x160 */ s16 requiredFlag;
    /* 0x162 */ s16 forbiddenFlag;
    /* 0x164 */ u8 disabled;
    /* 0x165 */ u8 unk165[0x13];
};
struct ConditionalMapEntryCount {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 count;
};
}
extern "C" {
extern ConditionalMapEntryCount g_entryTableInfo;
extern ConditionalMapEntry g_namedEntryTable[];
u32 gameFlagIsSet(s32 flag);

/* Disables populated entries whose required flag is absent or whose forbidden flag is set. */
void FUN_002644a8(void)
{
    for (s32 i = 0; i < g_entryTableInfo.count; ++i) {
        if (g_namedEntryTable[i].disabled == 0 && g_namedEntryTable[i].unk12C != 0 &&
            ((g_namedEntryTable[i].requiredFlag != 0 && !gameFlagIsSet(g_namedEntryTable[i].requiredFlag)) ||
             (g_namedEntryTable[i].forbiddenFlag != 0 && gameFlagIsSet(g_namedEntryTable[i].forbiddenFlag)))) {
            g_namedEntryTable[i].disabled = 1;
        }
    }
}
}
