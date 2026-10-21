#include "common.h"

extern "C" {

void *jobGetWork(void *job);
extern void *g_btlTalk;
void FUN_004c97cc(void *object);
void btlTalkUpdateIfPresent(void *job)
{
    jobGetWork(job);
    if (g_btlTalk != NULL) {
        FUN_004c97cc(g_btlTalk);
    }
}

} /* extern "C" */
