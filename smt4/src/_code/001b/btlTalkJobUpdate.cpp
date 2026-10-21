#include "battle/btlTalk.h"

extern "C" {

extern BtlTalk *g_btlTalk;
extern void *jobGetWork(u32 job);
extern void FUN_003c0880(BtlTalk *talk);

/* Updates the active battle-talk work area when it exists. */
void btlTalkJobUpdate(u32 job)
{
    jobGetWork(job);
    if (g_btlTalk != NULL) {
        FUN_003c0880(g_btlTalk);
    }
}

} /* extern "C" */
