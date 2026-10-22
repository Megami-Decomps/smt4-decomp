#include "common.h"

extern "C" void FUN_001183d8(void);

/* Run the callback and report successful completion. */
extern "C" s32 FUN_0010b844(void *)
{
    FUN_001183d8();
    return 0;
}
