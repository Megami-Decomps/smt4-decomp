#include "map/MapGimicGlobal.h"

extern "C" {

extern void asdMdlManagerMarkDestroy(void *model);

/* Marks every entry's model for destruction, last entry first. */
void mapGimicMarkModelsDestroy(void)
{
    s32 i;

    for (i = MAP_GIMIC_COUNT - 1; i >= 0; i--) {
        if (g_mapGimic->entries[i].model != NULL) {
            asdMdlManagerMarkDestroy(g_mapGimic->entries[i].model);
        }
    }
}

} /* extern "C" */
