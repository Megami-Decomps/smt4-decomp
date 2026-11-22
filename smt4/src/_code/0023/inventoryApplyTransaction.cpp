#include "gamedata/PartyMoney.h"
#include "camp/Config/Config.h"
#include "gamedata/AocItemRef.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"

/* unit-local: the add-on record (aocRecordLookup84), of which only the sale price is read here. */
struct ContentTransactionPrice {
    u8 prefix[0x2C];
    s32 sale;
};

extern "C" {
u32 aocEntryGetKind(u32 id);
ContentTransactionPrice *aocRecordLookup84(u32 id);
void saveFlagClearOrSubtractCounter(u32 id, s32 quantity);
void saveFlagSetOrAddCounter(u32 id, u32 quantity);
void gameCounterAddSaturating(s32 counter, s32 amount);
}

/* aocItemGetPrice's body: the item's sale price, scaled by its percent when flagged. */
static __inline s32 itemGetSalePrice(const AocItemRef *ref)
{
    u32 id = ref->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1: {
        ConsumableRecord *record = itemTableGetItemRecord(id);
        price = record == NULL ? 99999999 : record->sellPrice;
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
        price = record == NULL ? 99999999 : record->sellPrice;
        break;
    }
    case 10: {
        ContentTransactionPrice *record = aocRecordLookup84(id);
        price = record == NULL ? 99999999 : record->sale;
        break;
    }
    }
    if (ref->scaled) {
        price = ref->percent * price / 100;
    }
    return price;
}

/* shopSlotGetPrice's body: the item's purchase price, scaled by its percent when flagged and tripled in mode 2. */
static __inline s32 itemGetPurchasePrice(const AocItemRef *ref)
{
    s32 price = 0;
    u16 id = ref->id;

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
    if (ref->scaled) {
        price = ref->percent * price / 100;
    }
    if (FUN_002973ec() == 2) {
        price *= 3;
    }
    return price;
}

/* Adds (quantity > 0) or removes (quantity < 0) the item and, when settleMoney is set, pays its purchase price
 * or receives its sale price, counting the money spent (counter 30) or earned (counter 31). */
extern "C" void inventoryApplyTransaction(const AocItemRef *item, s32 quantity, s32 settleMoney)
{
    if (item->id == 0)
        return;
    s32 amount;
    if (quantity < 0) {
        quantity = -quantity;
        saveFlagClearOrSubtractCounter(item->id, quantity);
        if (!settleMoney)
            return;
        amount = itemGetSalePrice(item) * quantity;
    } else {
        saveFlagSetOrAddCounter(item->id, quantity);
        if (!settleMoney)
            return;
        amount = -itemGetPurchasePrice(item) * quantity;
    }
    partyMoneyAddForward(amount);
    if (amount < 0)
        gameCounterAddSaturating(30, -amount);
    else
        gameCounterAddSaturating(31, amount);
}
