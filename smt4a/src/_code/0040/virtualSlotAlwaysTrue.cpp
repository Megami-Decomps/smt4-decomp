#include "common.h"

extern "C" {

/* Virtual slot that always answers 1. */
u32 virtualSlotAlwaysTrue(void)
{
    return 1;
}

} /* extern "C" */
