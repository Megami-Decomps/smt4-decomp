#include "common.h"

extern "C" {

u32 wordRefEqual(void);

/* Returns the negation of wordRefEqual's result. */
u32 FUN_0030c7f4(void)
{
    u32 result;

    result = wordRefEqual();
    return result ^ 1;
}

} /* extern "C" */
