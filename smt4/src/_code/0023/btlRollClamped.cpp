#include "common.h"

extern "C" {

s32 gameSlotTableGetHeader(void);
s32 recordPackedValue(u32 id);
s32 FUN_0028fb40(u32 id);

/* Divides gameSlotTableGetHeader() by `divisor`, clamps the quotient to 0-99 and then to the id's available count. */
s32 btlRollClamped(u32 id, s32 divisor)
{
    s32 quotient = gameSlotTableGetHeader() / divisor;
    s32 amount;
    s32 available;

    if (quotient < 0) {
        amount = 0;
    } else if (quotient > 99) {
        amount = 99;
    } else {
        amount = quotient;
    }
    available = recordPackedValue(id) - FUN_0028fb40(id);
    if (amount < 0) {
        amount = 0;
    } else if (available < amount) {
        amount = available;
    }
    return amount;
}

} /* extern "C" */
