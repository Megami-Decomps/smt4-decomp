#include "common.h"

extern "C" {

void FUN_003106a8(u32 object, s32 mode);

/* Calls FUN_003106a8 with mode 3. */
void FUN_002e6e50(u32 object)
{
    FUN_003106a8(object, 3);
}

} /* extern "C" */
