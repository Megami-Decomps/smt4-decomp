#include "common.h"

extern "C" {

int messageSetTargetState(int value);
int saveFlagClearOrSubtractCounter(u32 a, int b);
int saveFlagSetOrAddCounter(u32 a, int b);
int scrGetArg(int index);
int eventQueueAddUnique(int id);
extern int FUN_002cdc00(void);

u32 FUN_002dba38(void)
{
    u32 a = scrGetArg(0);
    int b = scrGetArg(1);

    if (b < 0) {
        saveFlagClearOrSubtractCounter(a, -b);
    } else {
        saveFlagSetOrAddCounter(a, b);
    }
    if (FUN_002cdc00() != 0) {
        eventQueueAddUnique(0x1000174);
        messageSetTargetState(b);
    }
    return 1;
}

} /* extern "C" */
