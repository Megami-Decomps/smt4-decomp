#include "common.h"

extern "C" {

int FUN_003966b8(u32 *flags);

void FUN_003966a4(u32 *flags)
{
    if ((*flags & 1) == 0) {
        FUN_003966b8(flags);
        return;
    }
}

} /* extern "C" */
