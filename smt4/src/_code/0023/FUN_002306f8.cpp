/* NON_MATCHING: inlined price-return paths use fewer saved registers and reload constants on demand; common money-settlement block placement differs. */
#include "gamedata/Table8Record.h"

struct InventoryTransactionItem {
    u16 id;
    union {
        u16 priceFlags;
        struct {
            u16 flags : 2;
            u16 percent : 8;
            u16 remaining : 6;
        } pricing;
    };
};
typedef char InventoryTransactionItemSizeCheck[sizeof(InventoryTransactionItem) == 4 ? 1 : -1];
// Prices lie beyond the shared table-8 record prefix.
struct ConsumableTransactionPrices {
    Table8Record prefix;
    u8 unk6C[0xC];
    s32 purchase;
    s32 sale;
};
struct EquipmentTransactionPrices {
    Table8Record prefix;
    u8 unk6C[0x30];
    s32 purchase;
    s32 sale;
};
struct ContentTransactionPrice {
    u8 prefix[0x2C];
    s32 sale;
};
typedef char InventoryTransactionPriceOffsets[
    offsetof(ConsumableTransactionPrices, purchase) == 0x78 &&
    offsetof(ConsumableTransactionPrices, sale) == 0x7C &&
    offsetof(EquipmentTransactionPrices, purchase) == 0x9C &&
    offsetof(EquipmentTransactionPrices, sale) == 0xA0 ? 1 : -1];

extern "C" {
u32 aocEntryGetKind(u32 id);
ConsumableTransactionPrices *dataTable08Sub1GetRecord(u32 id);
EquipmentTransactionPrices *dataTable08Sub2GetRecord(u32 id);
ContentTransactionPrice *aocRecordLookup84(u32 id);
void FUN_00250d84(u32 id, s32 quantity);
void FUN_00295a18(u32 id, u32 quantity);
void FUN_00295c04(s32 amount);
s32 FUN_002973ec(void);
void gameCounterAddSaturating(s32 counter, s32 amount);
}

static __inline s32 inventoryGetTransactionPrice(u16 id, bool selling)
{
    switch (aocEntryGetKind(id)) {
    case 1: {
        const ConsumableTransactionPrices *record = dataTable08Sub1GetRecord(id);
        return record != NULL ? (selling ? record->sale : record->purchase) : 99999999;
    }
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: {
        const EquipmentTransactionPrices *record = dataTable08Sub2GetRecord(id);
        return record != NULL ? (selling ? record->sale : record->purchase) : 99999999;
    }
    case 10:
        if (selling) {
            const ContentTransactionPrice *record = aocRecordLookup84(id);
            return record != NULL ? record->sale : 99999999;
        }
        break;
    }
    return 0;
}

extern "C" void FUN_002306f8(const InventoryTransactionItem *item, s32 quantity, s32 settleMoney)
{
    if (item->id == 0)
        return;
    if (quantity < 0) {
        FUN_00250d84(item->id, -quantity);
        if (!settleMoney)
            return;
        s32 price = inventoryGetTransactionPrice(item->id, true);
        if (item->priceFlags & 2)
            price = (s32)((u32)item->pricing.percent * price) / 100;
        s32 amount = (s32)((u32)price * -quantity);
        FUN_00295c04(amount);
        if (amount >= 0)
            gameCounterAddSaturating(31, amount);
        else
            gameCounterAddSaturating(30, -amount);
    } else {
        FUN_00295a18(item->id, quantity);
        if (!settleMoney)
            return;
        s32 price = inventoryGetTransactionPrice(item->id, false);
        if (item->priceFlags & 2)
            price = (s32)((u32)item->pricing.percent * price) / 100;
        if (FUN_002973ec() == 2)
            price = (s32)((u32)price * 3);
        s32 amount = (s32)((0u - (u32)price) * quantity);
        FUN_00295c04(amount);
        if (amount >= 0)
            gameCounterAddSaturating(31, amount);
        else
            gameCounterAddSaturating(30, -amount);
    }
}
