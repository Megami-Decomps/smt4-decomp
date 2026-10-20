#include "shard/Shard0039.h"

extern "C" {

extern void btlTalkBustUpCreate(void);

/* Script command: runs btlTalkBustUpCreate. */
u32 FUN_0039dce0(void)
{
    btlTalkBustUpCreate();
    return 1;
}

} /* extern "C" */
