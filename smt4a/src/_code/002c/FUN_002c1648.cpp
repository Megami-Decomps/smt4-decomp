#include "common.h"

extern "C" {

void FUN_001add24(s32 code);

/* Calls FUN_001add24 with 0x36. */
void FUN_002c1648(void)
{
    FUN_001add24(0x36);
}

} /* extern "C" */
