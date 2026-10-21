#include "common.h"

extern "C" {

int btlTalkBustUpReleaseAllSlots(void);

u32 btlTalkBustUpReleaseAll(void)
{
    btlTalkBustUpReleaseAllSlots();
    return 1;
}

} /* extern "C" */
