#include "common.h"

extern "C" {

void FUN_001add24(s32 code);

/* Calls FUN_001add24 with 0x16. */
void FUN_002cc220(void)
{
    FUN_001add24(0x16);
}

} /* extern "C" */
