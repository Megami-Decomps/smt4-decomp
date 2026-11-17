#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" s32 aocEntryGetKind(u32 id);
extern "C" s32 recordGetPercentageScaledBase(const EquipmentRecord *record);

/* Select the content record's value according to its downloadable-content kind. */
extern "C" s32 contentGetKindValue(u32 id)
{
    if (id == 0)
        return 0;
    s32 value = 0;
    switch (aocEntryGetKind(id)) {
    case 4:
    case 5:
    case 6:
        value = itemTableGetEquipmentRecord(id)->hpBonus;
        break;
    case 7:
        value = itemTableGetEquipmentRecord(id)->mpBonus;
        break;
    default:
        EquipmentRecord *record = itemTableGetEquipmentRecord(id);
        if (record != NULL)
            value = recordGetPercentageScaledBase(record);
        break;
    }
    return value;
}
