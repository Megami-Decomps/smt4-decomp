/* Matches with --cpu=5TE (requested): this unit was built for the older core. */
#include "common.h"
#include "code/Code0034_Smt4.h"

extern "C" {

typedef struct Counter {
    u8 unk00[0x14];
    u16 value; /* 0x14 */
} Counter;

extern Counter *gameGetQuestCenterBlock(void);

/* Adds `amount` to the counter, saturating at 0xffff. */
void FUN_00343a74(s32 amount)
{
    Counter *counter = gameGetQuestCenterBlock();
    s32 sum = counter->value + amount;

    if (sum >= 0x10000) {
        sum = 0xffff;
    }
    counter->value = sum;
}

} /* extern "C" */
