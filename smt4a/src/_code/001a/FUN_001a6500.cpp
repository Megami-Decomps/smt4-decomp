#include "common.h"

extern "C" {

void FUN_001add24(s32 code);

/* Calls FUN_001add24 with 0x28. */
void FUN_001a6500(void)
{
    FUN_001add24(0x28);
}

} /* extern "C" */
