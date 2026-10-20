#include "shard/Shard0039.h"

extern "C" {

extern void btlTalkBustUpReleaseAllSlots(void);

/* Script command: runs btlTalkBustUpReleaseAllSlots. */
u32 FUN_0039dcd0(void)
{
    btlTalkBustUpReleaseAllSlots();
    return 1;
}

} /* extern "C" */
