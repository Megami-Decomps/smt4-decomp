#include "map/mapDepart.h"

extern "C" {

extern MapDepartWorkA *g_mapDepartWork;

/* Destroys the departure's three objects. */
void mapDepartDestroyObjects(void)
{
    if (g_mapDepartWork->objectA != NULL) {
        g_mapDepartWork->objectA->vtable[1](g_mapDepartWork->objectA);
        g_mapDepartWork->objectA = NULL;
    }
    if (g_mapDepartWork->objectB != NULL) {
        g_mapDepartWork->objectB->vtable[1](g_mapDepartWork->objectB);
        g_mapDepartWork->objectB = NULL;
    }
    if (g_mapDepartWork->objectC != NULL) {
        g_mapDepartWork->objectC->vtable[1](g_mapDepartWork->objectC);
        g_mapDepartWork->objectC = NULL;
    }
}

} /* extern "C" */
