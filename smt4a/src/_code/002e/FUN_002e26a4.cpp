#include "common.h"

extern "C" {

void FUN_001add24(s32 code);

/* Calls FUN_001add24 with 0x15. */
void FUN_002e26a4(void)
{
    FUN_001add24(0x15);
}

} /* extern "C" */
