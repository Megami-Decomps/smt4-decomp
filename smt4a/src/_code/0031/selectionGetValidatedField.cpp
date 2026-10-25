#include "gamedata/SelectionValueRecord.h"
#include "shard/Shard0034.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {
PlayerData *gameGetSlotRecord(s32 slot);

// Select a valid stored value, resolving slot-backed values through the party record.
s32 selectionGetValidatedField(u32 selector)
{
    SelectionValuePayload *values = &reinterpret_cast<SelectionValueRecord *>(FUN_0026140c())->values;
    switch (selector) {
    case 0:
        if (values->slot >= 0) {
            return gameGetSlotRecord(values->slot)->unk62;
        }
        return -1;
    case 14:
        if (values->alternateSlot >= 0) {
            return gameGetSlotRecord(values->alternateSlot)->unk62;
        }
        return -1;
    case 1:
        if (values->firstId != 0) {
            return values->firstId;
        }
        return -1;
    case 2:
        if (values->positiveMode > 0) {
            return values->positiveMode;
        }
        return -1;
    case 3:
        if (values->positiveValue > 0) {
            return values->positiveValue;
        }
        return -1;
    case 4:
        if (values->secondId != 0) {
            return values->secondId;
        }
        return -1;
    case 5:
        if (values->mode >= 0) {
            return values->mode;
        }
        return -1;
    case 6:
        if (values->value >= 0) {
            return values->value;
        }
        return -1;
    default:
        return -1;
    }
}
}
