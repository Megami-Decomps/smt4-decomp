#include "common.h"

extern "C" {

void FUN_003106a8(u32 object, s32 mode);

/* Calls FUN_003106a8 with mode 5. */
void FUN_002ea43c(u32 object)
{
    FUN_003106a8(object, 5);
}

} /* extern "C" */
