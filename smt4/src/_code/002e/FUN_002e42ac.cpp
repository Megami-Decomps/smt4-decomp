#include "common.h"

extern "C" {

void messageBannerInitSelection(u32 first, u32 second);

/* Script command: runs messageBannerInitSelection with two zero arguments. */
u32 FUN_002e42ac(void)
{
    messageBannerInitSelection(0, 0);
    return 1;
}

} /* extern "C" */
