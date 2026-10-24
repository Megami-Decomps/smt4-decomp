#include "common.h"

extern "C" {

void btlTalkBustUpDestroy(void);

/* Script command: removes the talk bust-up. */
u32 FUN_003802c4(void)
{
    btlTalkBustUpDestroy();
    return 1;
}

} /* extern "C" */
