/* NON_MATCHING: The count/table registers are reversed, with a later condition-field address calculation and reversed loop comparison operands. */
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
extern ConditionalMapEntryCount DAT_00447a28;
extern ConditionalMapEntry DAT_004a1264[];
u32 gameFlagIsSet(s32 flag);

/* Disables populated entries whose required flag is absent or whose forbidden flag is set. */
void FUN_002644a8(void)
{
    for (s32 i = 0; i < DAT_00447a28.count; ++i) {
        ConditionalMapEntry *entry = &DAT_004a1264[i];
        if (entry->disabled == 0 && entry->unk12C != 0 &&
            ((entry->requiredFlag != 0 && !gameFlagIsSet(entry->requiredFlag)) ||
             (entry->forbiddenFlag != 0 && gameFlagIsSet(entry->forbiddenFlag)))) {
            entry->disabled = 1;
        }
    }
}
}
