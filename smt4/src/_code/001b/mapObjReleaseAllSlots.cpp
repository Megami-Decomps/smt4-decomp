#include "map/mapObj.h"

extern "C" {

extern MapObjectState *g_mapObj; /* 0x447e70 */

void asdMdlManagerDestroy(void *model);

/* Destroys the models of all map object slots and marks every slot inactive. */
void mapObjReleaseAllSlots(void)
{
    for (s32 i = 0; i < 24; i++) {
        if (g_mapObj->slots[i].model != NULL) {
            asdMdlManagerDestroy(g_mapObj->slots[i].model);
            g_mapObj->slots[i].model = NULL;
        }
    }
    for (s32 i = 0; i < 24; i++) {
        g_mapObj->slots[i].active = 0;
    }
}

} /* extern "C" */
