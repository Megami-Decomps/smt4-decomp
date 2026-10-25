#include "common.h"

struct ContentUpgradeValueRecord {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ s16 primary;
    /* 0x38 */ s16 alternate;
};
struct ContentUpgradeBonuses {
    /* 0x00 */ s16 values[8];
};

extern "C" s32 aocEntryGetKind(u32 id);
extern "C" ContentUpgradeValueRecord *dataTable08Sub2GetRecord(u32 id);
extern "C" s32 recordGetPercentageScaledBase(const ContentUpgradeValueRecord *record);
extern "C" void equipmentGetCappedUpgradeBonuses(u32 id, ContentUpgradeBonuses *bonuses);

/* Include capped equipment upgrades in the primary downloadable-content value. */
extern "C" s32 contentGetUpgradedKindValue(u32 id)
{
    if (id == 0)
        return 0;
    s32 value = 0;
    switch (aocEntryGetKind(id)) {
    case 4:
    case 5:
    case 6: {
        ContentUpgradeValueRecord *record = dataTable08Sub2GetRecord(id);
        ContentUpgradeBonuses bonuses = {0};
        equipmentGetCappedUpgradeBonuses(id, &bonuses);
        value = record->primary + bonuses.values[0];
        break;
    }
    case 7:
        value = dataTable08Sub2GetRecord(id)->alternate;
        break;
    default:
        ContentUpgradeValueRecord *record = dataTable08Sub2GetRecord(id);
        if (record != NULL)
            value = recordGetPercentageScaledBase(record);
        break;
    }
    return value;
}
