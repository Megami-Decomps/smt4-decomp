/* NON_MATCHING: retail reaches the flag at +0x4C0 through a separate base register (r5 + 0x400) and keeps the zero in r1/r6; register allocation differs */
/* Closes the Config screen: releases the resources it acquired, frees its heap blocks and the work area. */
#include "common.h"
#include "camp/Config/Config.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int asdTMTexTableReleaseNode(int type);
int scrScriptProcessDestroy(u32 resource);
int ifTouchRegionRemove(void);
int dataTableFree(int id);
int asdTMTexTableFreeEntry(int type);
int obj04Finish(void);

extern ConfigWorkA *g_config;

void configDestroy(void)
{
    ConfigWorkA *config = g_config;
    int i;

    if (g_config != NULL) {
        if (config->hasType24B != 0) {
            asdTMTexTableReleaseNode(0x24);
            config->hasType24B = 0;
        }
        if (config->hasType24A != 0) {
            asdTMTexTableFreeEntry(0x24);
            config->hasType24A = 0;
        }
        dataTableFree(0x36);
        for (i = 0; i < config->count; i++) {
            ifTouchRegionRemove();
        }
        obj04Finish();
        if (config->resource != 0) {
            scrScriptProcessDestroy(config->resource);
            config->resource = 0;
        }
        if (config->heapA != NULL) {
            asdMemFree(config->heapA);
            config->heapA = NULL;
        }
        if (config->heapB != NULL) {
            asdMemFree(config->heapB);
            config->heapB = NULL;
        }
        if (config != NULL) {
            asdMemFree(config);
            g_config = NULL;
        }
    }
}

} /* extern "C" */
