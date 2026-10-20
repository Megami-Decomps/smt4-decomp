#include "battle/Talk/btlTalkBustUp.h"

extern "C" {

extern BtlTalkBustUp *g_btlTalkBustUp;

/* True while the portrait exists. */
bool btlTalkBustUpExists(void)
{
    return g_btlTalkBustUp != NULL;
}

} /* extern "C" */
