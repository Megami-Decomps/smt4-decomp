#include "common.h"

extern "C" {

s32 FUN_004d05b4(void);
s32 FUN_001774d8(u32 id);
s32 FUN_001ba3d4(u32 id);

/* Divides FUN_004d05b4() by `divisor`, clamps the quotient to 0-99 and then to the id's available count. */
s32 btlRollClamped(u32 id, s32 divisor)
{
    s32 quotient = FUN_004d05b4() / divisor;
    s32 amount;
    s32 available;

    if (quotient < 0) {
        amount = 0;
    } else if (quotient > 99) {
        amount = 99;
    } else {
        amount = quotient;
    }
    available = FUN_001774d8(id) - FUN_001ba3d4(id);
    if (amount < 0) {
        amount = 0;
    } else if (available < amount) {
        amount = available;
    }
    return amount;
}

} /* extern "C" */
