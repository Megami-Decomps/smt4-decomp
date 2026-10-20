#include "title/titleConfig.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
s32 jobIsValid(u32 job);
void scrScriptProcessDestroy(void *process);
void FUN_001641c4(void);

extern TitleConfigA *g_titleConfig;

/* Destroy callback of the config menu: releases its entries and blocks, stops the job and frees
 * the menu. */
void titleConfigDestroy(void)
{
    TitleConfigA *config = g_titleConfig;
    s32 i;

    config->closing = 1;
    for (i = 0; i < config->countA; i++) {
        FUN_001641c4();
    }
    for (i = 0; i < config->countB; i++) {
        FUN_001641c4();
    }
    if (config->process != NULL) {
        scrScriptProcessDestroy(config->process);
        config->process = NULL;
    }
    if (config->dataA != NULL) {
        asdMemFree(config->dataA);
        config->dataA = NULL;
    }
    if (config->dataB != NULL) {
        asdMemFree(config->dataB);
        config->dataB = NULL;
    }
    if (jobIsValid(config->job) != 0) {
        jobStop(config->job, 0);
    }
    if (g_titleConfig != NULL) {
        asdMemFree(g_titleConfig);
        g_titleConfig = NULL;
    }
}

} /* extern "C" */
