#include "common.h"

extern "C" {

int btlTalkBustUpReleaseAllSlots(void);

u32 FUN_0030b60c(void)
{
    btlTalkBustUpReleaseAllSlots();
    return 1;
}

} /* extern "C" */
