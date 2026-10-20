#include "battle/Talk/btlTalkBustUp.h"

extern "C" {

extern BtlTalkBustUp *g_btlTalkBustUp;

bool btlTalkBustUpIsUnk2F8(s32 value)
{
    return g_btlTalkBustUp != NULL && g_btlTalkBustUp->unk2F8 == value;
}

} /* extern "C" */
