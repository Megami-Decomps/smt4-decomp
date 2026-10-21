#include "shard/W5_W5Match2_BattleBusQuery.h"
extern "C" {
extern BattleBusQuery *g_btlTalkBustUp;
/* Read bust-up state, returning zero when no work exists. */
s32 battleTalkGetBustState(void) { return g_btlTalkBustUp != NULL ? g_btlTalkBustUp->state : 0; }
}
