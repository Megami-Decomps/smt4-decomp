#include "common.h"

extern "C" {

u32 FUN_00348850(s32 mode);

/* Script command: runs the shared handler in mode 0. */
u32 FUN_00348848(void)
{
    return FUN_00348850(0);
}

} /* extern "C" */
