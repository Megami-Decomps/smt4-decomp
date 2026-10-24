#include "common.h"

extern "C" void btlTalkBustUpDestroy(void);

/* Script command: destroys the talk bust-up. */
extern "C" s32 scrBtlTalkBustUpDestroy(void)
{
    btlTalkBustUpDestroy();
    return 1;
}
