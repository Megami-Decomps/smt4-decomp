/* NON_MATCHING: same logic; for the sale path's AOC record case (kind 10) retail ends the case with `ldrne r4,[r0,#44]; beq` into a shared `ldr r4,=99999999` block, while armcc here emits `bne` plus its own inline `ldr r4,=99999999`, so the sale switch is 4 bytes longer and every later branch target and jump-table word shifts by 4. */
#include "common.h"

/* An item stack: its id and flags (bit 1: priced by a percentage in bits 2..9). */
struct ItemStack {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 flags;
};

/* The price fields of the two record kinds. */
struct ItemRecord {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ s32 buyPrice;
    /* 0x50 */ s32 sellPrice;
    /* 0x54 */ u8 unk54[0x20];
    /* 0x74 */ s32 equipBuyPrice;
    /* 0x78 */ s32 equipSellPrice;
};
struct AocRecord {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 sellPrice;
};

extern "C" {
ItemRecord *dataTable8FindRecord(u32 id);
ItemRecord *dataTable08Sub2GetRecord(u32 id);
AocRecord *aocRecordLookup84(u32 id);
u32 aocEntryGetKind(u32 id);
s32 gameDataBlocksGetTableFlag(void);
void flagValueAdd(u32 id, s32 count);
void flagValueSub(u32 id, s32 count);
void FUN_004a0ef4(s32 amount);
void FUN_00408184(s32 kind, s32 amount);

#define PRICE_MISSING 99999999

/* Adds (count > 0) or removes (count < 0) copies of an item and, when `charge` is set, settles the
 * price: the buy price (tripled on table flag 4, one million for item 0x7B2) or the sell price, scaled
 * by the stack's percentage. */
void FUN_0049cd18(ItemStack *stack, s32 count, s32 charge)
{
    if (stack->id == 0)
        return;
    s32 total;
    if (count < 0) {
        count = -count;
        flagValueSub(stack->id, count);
        if (!charge)
            return;
        u32 id = stack->id;
        s32 price = 0;
        switch (aocEntryGetKind(id)) {
        case 1:
        case 12: {
            ItemRecord *record = dataTable8FindRecord(id);
            price = record != NULL ? record->sellPrice : PRICE_MISSING;
            break;
        }
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8: {
            ItemRecord *record = dataTable08Sub2GetRecord(id);
            price = record != NULL ? record->equipSellPrice : PRICE_MISSING;
            break;
        }
        case 10: {
            AocRecord *record = aocRecordLookup84(id);
            price = record != NULL ? record->sellPrice : PRICE_MISSING;
            break;
        }
        }
        if (stack->flags & 2)
            price = ((stack->flags & 0x3FF) >> 2) * price / 100;
        total = price * count;
    } else {
        flagValueAdd(stack->id, count);
        if (!charge)
            return;
        u32 id = stack->id;
        s32 price = 0;
        switch (aocEntryGetKind(id)) {
        case 1:
        case 11:
        case 12: {
            ItemRecord *record = dataTable8FindRecord(id);
            price = record != NULL ? record->buyPrice : PRICE_MISSING;
            if (id == 0x7B2)
                price = 1000000;
            break;
        }
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8: {
            ItemRecord *record = dataTable08Sub2GetRecord(id);
            price = record != NULL ? record->equipBuyPrice : PRICE_MISSING;
            break;
        }
        }
        if (stack->flags & 2)
            price = ((stack->flags & 0x3FF) >> 2) * price / 100;
        if (gameDataBlocksGetTableFlag() == 4)
            price *= 3;
        total = -price * count;
    }
    FUN_004a0ef4(total);
    if (total < 0)
        FUN_00408184(30, -total);
    else
        FUN_00408184(31, total);
}

} /* extern "C" */
