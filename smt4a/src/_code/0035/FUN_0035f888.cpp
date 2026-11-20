#include "common.h"

extern "C" {

void messageBannerInitCounter(u32 first, u32 second);

/* Script command: runs messageBannerInitCounter with two zero arguments. */
u32 FUN_0035f888(void)
{
    messageBannerInitCounter(0, 0);
    return 1;
}

} /* extern "C" */
