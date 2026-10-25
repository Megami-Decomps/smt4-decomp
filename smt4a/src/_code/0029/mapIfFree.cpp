#include "common.h"

extern "C" {

extern void *g_mapIf;
void asdMemFree(void *block);
void mapIfFree(u32 handle)
{
    if (g_mapIf != NULL) {
        asdMemFree(g_mapIf);
        g_mapIf = NULL;
    }
}

} /* extern "C" */
