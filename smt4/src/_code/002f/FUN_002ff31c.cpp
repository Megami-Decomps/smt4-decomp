#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainState;
struct BtlEntry;


extern "C" {
s32 scrGetArg(u32 index);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
void scrSetResult(s32 value);
u32 FUN_002ff31c(void)
{
    s32 maximum = scrGetArg(0);
    s32 required = 0;
    if (btlMainFindActiveEntry(btlGetMainState()) != NULL)
        required = 1;
    scrSetResult(required <= maximum);
    return 1;
}
}
