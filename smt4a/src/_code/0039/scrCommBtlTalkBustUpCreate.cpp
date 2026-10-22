#include "shard/Shard0039.h"

extern "C" {

extern void btlTalkBustUpCreate(void);

/* Script command: runs btlTalkBustUpCreate. */
u32 scrCommBtlTalkBustUpCreate(void)
{
    btlTalkBustUpCreate();
    return 1;
}

} /* extern "C" */
