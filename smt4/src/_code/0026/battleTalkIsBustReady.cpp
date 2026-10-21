/* NON_MATCHING: compiler inlines the nested signed-byte query and omits the retail saved-register frame. */
#include "shard/W5_W5Match2_BustUpReady.h"
extern "C" {
extern BustUpReadyWork *g_btlTalkBustUp;
/* An absent bust-up or a nonzero nested state reports ready. */
s32 battleTalkIsBustReady(void) { return g_btlTalkBustUp==NULL || g_btlTalkBustUp->state!=0; }
}
