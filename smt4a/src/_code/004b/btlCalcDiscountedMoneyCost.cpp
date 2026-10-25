/* NON_MATCHING: widened multiplication operand registers and sign-extension schedule differ; division calls the retail ll_sdiv routine. */
#include "shard/W6_W6Match4_PartyWallet.h"
#include "shard/W6_W6Match2_LongDivision.h"

struct Table04PricingRecord {
    u8 unk00[0x3c];
    u32 otherFlags : 12;
    u32 discountPercent : 7;
    u32 upperFlags : 13;
};

extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
const Table04PricingRecord *dataTable04FindById(u32 id);
u8 *gameGetSlotTable();

u32 btlCalcDiscountedMoneyCost(u32 id)
{
    u32 amount = 0;
    const Table04PricingRecord *record = dataTable04FindById(id);
    if (record != 0 && record->discountPercent != 0) {
        const PartyWallet *wallet = (const PartyWallet *)gameGetSlotTable();
        const s64 percentage = 100 - (s32)record->discountPercent;
        amount = ll_sdiv((s64)wallet->money * percentage, 100).quotient;
    }
    return amount;
}
}
