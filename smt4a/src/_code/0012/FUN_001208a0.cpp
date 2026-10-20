#include "common.h"

extern "C" {

void FUN_003106a8(u32 object, s32 mode);

/* Calls FUN_003106a8 with mode 0. */
void FUN_001208a0(u32 object)
{
    FUN_003106a8(object, 0);
}

} /* extern "C" */
