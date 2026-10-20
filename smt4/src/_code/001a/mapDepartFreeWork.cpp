#include "map/mapDepart.h"

extern "C" {

void asdMdlManagerDestroy(u32 handle);
void asdMemFree(void *block);

extern MapDepartWork *g_mapDepartWork;

/* Releases the departure's handles and frees its two heap blocks. */
void mapDepartFreeWork(void)
{
    if (g_mapDepartWork->handleA != 0) {
        asdMdlManagerDestroy(g_mapDepartWork->handleA);
        g_mapDepartWork->handleA = 0;
    }
    if (g_mapDepartWork->handleB != 0) {
        asdMdlManagerDestroy(g_mapDepartWork->handleB);
        g_mapDepartWork->handleB = 0;
    }
    if (g_mapDepartWork->dataA != NULL) {
        asdMemFree(g_mapDepartWork->dataA);
        g_mapDepartWork->dataA = NULL;
        g_mapDepartWork->sizeA = 0;
    }
    if (g_mapDepartWork->dataB != NULL) {
        asdMemFree(g_mapDepartWork->dataB);
        g_mapDepartWork->dataB = NULL;
        g_mapDepartWork->sizeB = 0;
    }
}

} /* extern "C" */
