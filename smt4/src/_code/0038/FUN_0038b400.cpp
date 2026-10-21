#include "common.h"

extern "C" {
void FUN_0036115c();
s32 FUN_003611c4();
void FUN_003611d4();
/* Polls the pending operation after refreshing its state. */
void FUN_0038b400()
{
    FUN_0036115c();
    if (FUN_003611c4() == 0)
        FUN_003611d4();
}
}
