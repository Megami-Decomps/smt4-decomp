/* NON_MATCHING: widened multiplication uses different operand registers, and division references __aeabi_ldivmod rather than retail's ll_sdiv alias. */
#include "shard/W6_W6Match4_PartyWallet.h"

struct Table04PricingRecord {
    u8 unk00[0x3c];
    u32 otherFlags : 12;
    u32 discountPercent : 7;
    u32 upperFlags : 13;
};

extern "C" {
const Table04PricingRecord *dataTable04FindById(u32 id);
u8 *gameGetSlotTable();

u32 btlCalcDiscountedMoneyCost(u32 id)
{
    u32 amount = 0;
    const Table04PricingRecord *record = dataTable04FindById(id);
    if (record != 0 && record->discountPercent != 0) {
        const PartyWallet *wallet = (const PartyWallet *)gameGetSlotTable();
        const s64 percentage = 100 - (s32)record->discountPercent;
        amount = (s64)wallet->money * percentage / 100;
    }
    return amount;
}
}
