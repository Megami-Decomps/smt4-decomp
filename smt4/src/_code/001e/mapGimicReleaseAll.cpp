#include "map/MapGimicGlobal.h"

extern "C" {

void asdMdlManagerDestroy(void);

/* Destroys the models of all map gimmicks (last to first) and clears their active flags. */
void mapGimicReleaseAll(void)
{
    s32 i;

    for (i = MAP_GIMIC_COUNT - 1; i >= 0; i--) {
        if (g_mapGimic->entries[i].model != NULL) {
            asdMdlManagerDestroy();
            g_mapGimic->entries[i].model = NULL;
        }
    }
    for (i = 0; i < MAP_GIMIC_COUNT; i++) {
        g_mapGimic->entries[i].active = 0;
    }
}

} /* extern "C" */
