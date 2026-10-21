#include "common.h"

extern "C" {

int FUN_00482fe8(u32 *flags);

void FUN_00482fd4(u32 *flags)
{
    if ((*flags & 1) == 0) {
        FUN_00482fe8(flags);
        return;
    }
}

} /* extern "C" */
