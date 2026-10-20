/* Closes the Config screen: releases what it set up, frees its heap blocks and the work area. */
#include "common.h"
#include "camp/Config/Config.h"

extern "C" {

int FUN_00296e90(void);
int FUN_002a46d8(int id);
int scrScriptProcessDestroy(u32 resource);
int FUN_002ae898(int type, int index);
int FUN_002b8cc8(void);
int asdMemFree(void *ptr);               /* heap free */

extern ConfigWork *g_config;

void configDestroy(void)
{
    ConfigWork *config = g_config;
    int i;

    FUN_002ae898(0x2f, 0);
    FUN_002a46d8(0x36);
    for (i = 0; i < config->countA; i++) {
        FUN_002b8cc8();
    }
    for (i = 0; i < config->countB; i++) {
        FUN_002b8cc8();
    }
    FUN_00296e90();
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

} /* extern "C" */
