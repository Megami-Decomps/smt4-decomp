#include "common.h"

extern "C" {

void FUN_003106a8(u32 object, s32 mode);

/* Calls FUN_003106a8 with mode 4. */
void FUN_00306e70(u32 object)
{
    FUN_003106a8(object, 4);
}

} /* extern "C" */
