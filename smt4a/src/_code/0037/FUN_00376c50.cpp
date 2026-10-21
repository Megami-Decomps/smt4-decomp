#include "common.h"

extern "C" {

s32 FUN_003ae088(void);

s32 FUN_00376c50(void)
{
    return FUN_003ae088() != 0;
}

} /* extern "C" */
