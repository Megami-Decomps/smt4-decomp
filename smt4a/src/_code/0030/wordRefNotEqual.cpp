#include "common.h"

extern "C" {

u32 wordRefEqual(void);

/* Returns the negation of wordRefEqual's result. */
u32 wordRefNotEqual(void)
{
    u32 result;

    result = wordRefEqual();
    return result ^ 1;
}

} /* extern "C" */
