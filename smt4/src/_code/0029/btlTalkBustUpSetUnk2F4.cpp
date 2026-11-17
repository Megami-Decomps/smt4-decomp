#include "battle/Talk/btlTalkBustUp.h"

extern "C" {


void btlTalkBustUpSetUnk2F4(u8 value)
{
    if (g_btlTalkBustUp != NULL) {
        g_btlTalkBustUp->textureReady = value;
    }
}

} /* extern "C" */
