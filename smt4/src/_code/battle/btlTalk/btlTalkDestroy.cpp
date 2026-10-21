#include "battle/btlTalk.h"

extern "C" {

void btlUiPanelFadeInWhenReady(u32 arg);
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
BtlTalkOwner *jobGetWork(u32 job);

extern BtlTalk *g_btlTalk;
extern u32 g_btlUiBlock;

/* Destroy callback of the talk screen: frees its blocks and stops the owner job. */
void btlTalkDestroy(u32 job)
{
    BtlTalkOwner *owner = jobGetWork(job);
    BtlTalk *talk = g_btlTalk;

    if (g_btlTalk != NULL) {
        btlUiPanelFadeInWhenReady(g_btlUiBlock);
        if (talk->dataA != NULL) {
            asdMemFree(talk->dataA);
            talk->dataA = NULL;
        }
        if (talk->process != NULL) {
            scrScriptProcessDestroy(talk->process);
            talk->process = NULL;
        }
        if (talk->dataB != NULL) {
            asdMemFree(talk->dataB);
            talk->dataB = NULL;
        }
        if (talk->dataC != NULL) {
            asdMemFree(talk->dataC);
            talk->dataC = NULL;
        }
        asdMemFree(g_btlTalk);
        g_btlTalk = NULL;
    }
    jobStop(owner->job, 0);
}

} /* extern "C" */
