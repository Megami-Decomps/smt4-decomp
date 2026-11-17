#include "battle/Talk/btlTalkBustUp.h"

extern "C" {
/* Reads or forwards the current state. */
s32 btlTalkBustUpGetValue(void)
{
    return g_btlTalkBustUp != NULL ? g_btlTalkBustUp->textureReady : 0;
}
}
