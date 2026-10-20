#include "common.h"

extern "C" {

void FUN_001a2a6c(s32 code);

/* Calls FUN_001a2a6c with 0x406. */
void FUN_0018c870(void)
{
    FUN_001a2a6c(0x406);
}

} /* extern "C" */
