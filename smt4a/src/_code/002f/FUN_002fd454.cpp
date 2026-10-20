#include "common.h"

extern "C" {

u32 FUN_002fd444(void);

/* Returns bit 1 of FUN_002fd444's result (0 or 1). */
u32 FUN_002fd454(void)
{
    u32 value;

    value = FUN_002fd444();
    return (value & 3) >> 1;
}

} /* extern "C" */
