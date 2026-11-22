#include "common.h"
#include "gamedata/PartyMoney.h"
#include "gamedata/AocItemRef.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/ConsumableRecordA.h"

/* unit-local: the add-on record (aocRecordLookup84), of which only the sale price is read here. */
struct AocRecord {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 sellPrice;
};

extern "C" {
AocRecord *aocRecordLookup84(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 aocEntryGetKind(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 gameDataBlocksGetTableFlag(void); // declcheck: local (the shared declaration does not compile here or changes this unit)
void flagValueAdd(u32 id, s32 count);
void flagValueSub(u32 id, s32 count);
void gameCounterAddSaturating(s32 kind, s32 amount); // declcheck: local (the shared declaration does not compile here or changes this unit)
}

/* aocItemGetPrice's body: the item's sale price, scaled by its percent when flagged. */
static __inline s32 itemGetSalePrice(const AocItemRef *ref)
{
    u32 id = ref->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        ConsumableRecordA *record = itemTableGetItemRecord(id);
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
        EquipmentRecordA *record = itemTableGetEquipmentRecord(id);
        price = record == NULL ? 99999999 : record->sellPrice;
        break;
    }
    case 10: {
        AocRecord *record = aocRecordLookup84(id);
        price = record == NULL ? 99999999 : record->sellPrice;
        break;
    }
    }
    if (ref->scaled) {
        s32 rate = ref->percent;
        price = rate * price / 100;
    }
    return price;
}

/* shopGetEntryPrice's body: the item's purchase price (one million for item 0x7B2), scaled by its percent when
 * flagged and tripled under table flag 4. */
static __inline s32 itemGetPurchasePrice(const AocItemRef *ref)
{
    u32 id = ref->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        ConsumableRecordA *item = itemTableGetItemRecord(id);
        price = item != NULL ? item->buyPrice : 99999999;
        if (id == 0x7b2) {
            price = 1000000;
        }
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        EquipmentRecordA *equip = itemTableGetEquipmentRecord(id);
        price = equip == NULL ? 99999999 : equip->buyPrice;
        break;
    }
    }
    if (ref->scaled) {
        s32 rate = ref->percent;
        price = rate * price / 100;
    }
    if (gameDataBlocksGetTableFlag() == 4) {
        price *= 3;
    }
    return price;
}

/* Adds (count > 0) or removes (count < 0) copies of an item and, when `charge` is set, pays its purchase price
 * or receives its sale price, counting the money spent (counter 30) or earned (counter 31). */
extern "C" void inventoryApplyTransaction(const AocItemRef *item, s32 count, s32 charge)
{
    if (item->id == 0)
        return;
    s32 total;
    if (count < 0) {
        count = -count;
        flagValueSub(item->id, count);
        if (!charge)
            return;
        total = itemGetSalePrice(item) * count;
    } else {
        flagValueAdd(item->id, count);
        if (!charge)
            return;
        total = -itemGetPurchasePrice(item) * count;
    }
    partyAddMoneyClampedForward(total);
    if (total < 0)
        gameCounterAddSaturating(30, -total);
    else
        gameCounterAddSaturating(31, total);
}
