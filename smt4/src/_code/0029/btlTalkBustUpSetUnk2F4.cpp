#include "battle/Talk/btlTalkBustUp.h"

extern "C" {

extern BtlTalkBustUp *g_btlTalkBustUp;

void btlTalkBustUpSetUnk2F4(u8 value)
{
    if (g_btlTalkBustUp != NULL) {
        g_btlTalkBustUp->unk2F4 = value;
    }
}

} /* extern "C" */
