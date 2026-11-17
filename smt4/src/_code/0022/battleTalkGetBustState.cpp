#include "battle/Talk/btlTalkBustUp.h"
extern "C" {
/* Read bust-up state, returning zero when no work exists. */
s32 battleTalkGetBustState(void) { return g_btlTalkBustUp != NULL ? g_btlTalkBustUp->active : 0; }
}
