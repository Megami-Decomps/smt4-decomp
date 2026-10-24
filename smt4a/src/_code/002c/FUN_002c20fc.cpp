#include "common.h"

extern "C" {

u32 FUN_00348850(s32 mode);

/* Script command: runs the shared handler in mode 1. */
u32 FUN_002c20fc(void)
{
    return FUN_00348850(1);
}

} /* extern "C" */
