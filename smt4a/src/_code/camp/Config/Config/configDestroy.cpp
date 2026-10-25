/* NON_MATCHING: restored node0 release argument and signed ownership flags; only zero argument/constant lifetime and high-base setup order differ. */
/* Closes the Config screen: releases the resources it acquired, frees its heap blocks and the work area. */
#include "common.h"
#include "camp/Config/Config.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int asdTMTexTableReleaseNode(int type, u32 node);
int scrScriptProcessDestroy(u32 resource);
int ifTouchRegionRemove(void);
int dataTableFree(int id);
int obj04Finish(void);

extern ConfigWorkA *g_config;

void configDestroy(void)
{
    ConfigWorkA *config = g_config;
    int i;

    if (g_config != NULL) {
        if (config->hasType24B != 0) {
            asdTMTexTableReleaseNode(0x24, 0);
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
