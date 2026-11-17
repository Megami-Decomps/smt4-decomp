#include "battle/Talk/btlTalkBustUp.h"

extern "C" {

/* Returns the id of the running talk bust-up's demon (16-bit), 0 when none is active. */
u32 btlTalkBustUpGetId(void)
{
    if (g_btlTalkBustUp != NULL) {
        if (g_btlTalkBustUp->textureNode < 0) {
            return 0;
        }
        return (u16)g_btlTalkBustUp->devilId;
    }
    return 0;
}

} /* extern "C" */
