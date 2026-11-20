#include "common.h"

extern "C" {

void *jobGetWork(void *job);
extern void *g_btlTalk;
void btlTalkWindowStep(void *object);
void btlTalkUpdateIfPresent(void *job)
{
    jobGetWork(job);
    if (g_btlTalk != NULL) {
        btlTalkWindowStep(g_btlTalk);
    }
}

} /* extern "C" */
