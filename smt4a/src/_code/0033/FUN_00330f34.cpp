#include "common.h"

extern "C" s32 FUN_004d0584(void);

/* Script command: true when FUN_004d0584 reports anything. */
extern "C" s32 FUN_00330f34(void)
{
    return FUN_004d0584() != 0;
}
