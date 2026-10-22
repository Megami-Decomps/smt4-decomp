#include "common.h"

namespace {
struct QuestRecordView {
    u8 unk00[0x19C]; // 0x000
    u16 unk19C;      // 0x19C
};
}

extern "C" {
s32 questReadRuntimeFlag(u16 questIndex, u32 mode);
s32 questRequirementsMet(u16 questIndex);
QuestRecordView* dataTable1bOr1cGetRecord(u16 questIndex);
void flagEntryReset(u16 questIndex);
void jyoucyuGetTableEntry(u32 index);
void FUN_00348e10(u32 matchingValue);

// Reset eligible quest entries whose nonzero record field matches the supplied value.
s32 questResetEligibleEntriesMatchingValue(u32 matchingValue)
{
    s32 changed = 0;
    for (u32 questIndex = 0; questIndex < 400; ++questIndex) {
        if (questReadRuntimeFlag(static_cast<u16>(questIndex), 0) != 0)
            continue;
        if (questRequirementsMet(static_cast<u16>(questIndex)) == 0)
            continue;

        QuestRecordView* record =
            dataTable1bOr1cGetRecord(static_cast<u16>(questIndex));
        if (record != 0 && record->unk19C != 0 &&
            record->unk19C == matchingValue) {
            flagEntryReset(static_cast<u16>(questIndex));
            changed = 1;
            jyoucyuGetTableEntry(0);
        }
    }

    if (changed != 0)
        FUN_00348e10(matchingValue);
    return changed;
}
}
