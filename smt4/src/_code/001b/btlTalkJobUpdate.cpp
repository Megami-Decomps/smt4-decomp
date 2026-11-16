#include "battle/btlTalk.h"
#include "shard/JobWork.h"

extern "C" {

extern BtlTalk *g_btlTalk;
extern void btlTalkRunEventStep(BtlTalk *talk);

/* Updates the active battle-talk work area when it exists. */
void btlTalkJobUpdate(u32 job)
{
    jobGetWork(job);
    if (g_btlTalk != NULL) {
        btlTalkRunEventStep(g_btlTalk);
    }
}

} /* extern "C" */
