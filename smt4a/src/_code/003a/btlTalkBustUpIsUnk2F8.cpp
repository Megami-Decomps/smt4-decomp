#include "battle/Talk/btlTalkBustUp.h"

extern "C" {


bool btlTalkBustUpIsUnk2F8(s32 value)
{
    return g_btlTalkBustUp != NULL && g_btlTalkBustUp->textureNode == value;
}

} /* extern "C" */
