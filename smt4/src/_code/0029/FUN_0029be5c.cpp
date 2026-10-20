#include "common.h"

extern "C" {

int FUN_00343a04(u32 amount);
int FUN_00343a2c(u32 amount);
int FUN_00343a74(u32 amount);
int FUN_00343ba0(u32 amount);
extern u32 *gameGetCounters(void);

/* Adds `amount` to counter `index` (saturating at 0xFFFFFFFF) and notifies the counter's handler. */
void FUN_0029be5c(int index, u32 amount)
{
    u32 *table = gameGetCounters();
    u32 *counter = &table[index];
    u32 value = *counter;

    if (~value > amount) {
        value = value + amount;
    } else {
        value = 0xffffffff;
    }
    *counter = value;
    switch (index) {
    case 2:
        FUN_00343a74(amount);
        return;
    case 9:
        FUN_00343ba0(amount);
        return;
    case 0x13:
        FUN_00343a04(amount);
        return;
    case 0x26:
        FUN_00343a2c(amount);
        return;
    }
}

} /* extern "C" */
