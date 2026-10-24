#include "gamedata/AocItemRef.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 aocEntryGetKind(u32 id);
u32 resolveWeightedItemChoice(u32 id, u32 flagGroup, u32 flagBit, u32 recordChoice);
s32 aocItemGetPrice(const AocItemRef *ref);
void scrSetResult(s32 value);

/* Script command: returns the price of the item named by the argument (weighted-item entries are resolved to a concrete item first). */
u32 scrCommGetItemPrice(void)
{
    AocItemRef item;
    u32 id;

    item.id = 0;
    item.unk02Bit0 = 0;
    item.scaled = 0;
    item.percent = 0;
    id = scrGetArg(0);
    if (aocEntryGetKind(id) == 9) {
        id = resolveWeightedItemChoice(id, 0xffff, 0xffff, 0);
    }
    item.id = id;
    scrSetResult(aocItemGetPrice(&item));
    return 1;
}

} /* extern "C" */
