#include "battle/Talk/btlTalkBustUp.h"

extern "C" {


/* True while the portrait exists. */
bool btlTalkBustUpExists(void)
{
    return g_btlTalkBustUp != NULL;
}

} /* extern "C" */
