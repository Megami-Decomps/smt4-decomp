#include "common.h"
#include "gamedata/AocItemRef.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"
#include "camp/Config/Config.h"

extern "C" {

u32 aocEntryGetKind(u32 id);

/* Return the slot's item price, scaled by its discount and tripled in mode 2. */
s32 shopSlotGetPrice(const AocItemRef *slot)
{
    s32 price = 0;
    u16 id = slot->id;

    switch (aocEntryGetKind(id)) {
    case 1: {
        ConsumableRecord *record = itemTableGetItemRecord(id);
        price = record == NULL ? 99999999 : record->buyPrice;
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        EquipmentRecord *record = itemTableGetEquipmentRecord(id);
        price = record == NULL ? 99999999 : record->buyPrice;
        break;
    }
    }
    if (slot->scaled) {
        price = slot->percent * price / 100;
    }
    if (FUN_002973ec() == 2) {
        price *= 3;
    }
    return price;
}

} /* extern "C" */
