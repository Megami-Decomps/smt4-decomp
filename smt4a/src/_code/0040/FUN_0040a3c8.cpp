/* Matches with --cpu=5TE (requested): this unit was built for the older core. */
#include "common.h"
#include "code/Code0040_Smt4a.h"

extern "C" {

typedef struct Counter {
    u8 unk00[0x14];
    u16 value; /* 0x14 */
} Counter;

extern Counter *gameDataBlocksGetStats(void);

/* Adds `amount` to the counter, saturating at 0xffff. */
void FUN_0040a3c8(s32 amount)
{
    Counter *counter = gameDataBlocksGetStats();
    s32 sum = counter->value + amount;

    if (sum >= 0x10000) {
        sum = 0xffff;
    }
    counter->value = sum;
}

} /* extern "C" */
