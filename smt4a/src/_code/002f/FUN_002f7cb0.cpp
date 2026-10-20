#include "common.h"

extern "C" {

void FUN_003106a8(u32 object, s32 mode);

/* Calls FUN_003106a8 with mode 2. */
void FUN_002f7cb0(u32 object)
{
    FUN_003106a8(object, 2);
}

} /* extern "C" */
