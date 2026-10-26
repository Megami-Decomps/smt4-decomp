#include "common.h"

extern "C" {

/* Returns the constant category 2 (a vtable getter; armlink inlines it at its direct callers). */
u32 objectGetCategoryTwo(void)
{
    return 2;
}

} /* extern "C" */
