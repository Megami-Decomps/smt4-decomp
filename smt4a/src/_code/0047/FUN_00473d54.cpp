#include "common.h"

extern "C" {
void FUN_0043bff8();
s32 FUN_0043c2b4();
void FUN_0043c2c4();
/* Polls the pending operation after refreshing its state. */
void FUN_00473d54()
{
    FUN_0043bff8();
    if (FUN_0043c2b4() == 0)
        FUN_0043c2c4();
}
}
