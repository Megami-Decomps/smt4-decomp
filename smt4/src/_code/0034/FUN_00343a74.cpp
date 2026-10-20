/* Matches with --cpu=5TE (requested): this unit was built for the older core. */
#include "common.h"

extern "C" {

typedef struct Counter {
    u8 unk00[0x14];
    u16 value; /* 0x14 */
} Counter;

extern Counter *FUN_002bbb5c(void);

/* Adds `amount` to the counter, saturating at 0xffff. */
void FUN_00343a74(s32 amount)
{
    Counter *counter = FUN_002bbb5c();
    s32 sum = counter->value + amount;

    if (sum >= 0x10000) {
        sum = 0xffff;
    }
    counter->value = sum;
}

} /* extern "C" */
