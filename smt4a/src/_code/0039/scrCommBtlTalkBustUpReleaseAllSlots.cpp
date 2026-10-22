#include "shard/Shard0039.h"

extern "C" {

extern void btlTalkBustUpReleaseAllSlots(void);

/* Script command: runs btlTalkBustUpReleaseAllSlots. */
u32 scrCommBtlTalkBustUpReleaseAllSlots(void)
{
    btlTalkBustUpReleaseAllSlots();
    return 1;
}

} /* extern "C" */
