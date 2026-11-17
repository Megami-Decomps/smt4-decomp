#include "map/MapGimicGlobal.h"

extern "C" {

extern int FUN_002878fc(s16 gimicId);
extern int gameFlagIsSet(int flag);

/* Resets the map gimic block and re-triggers every active entry whose flag condition holds. */
void mapGimicReset(void)
{
    MapGimic *gimic = g_mapGimic;
    int i;

    gimic->busy = 1;
    gimic->mode = 0;
    gimic->step = 0;
    gimic->index = 0;
    gimic->loaded = 0;
    for (i = 0; i < MAP_GIMIC_COUNT; i++) {
        MapGimicEntry *entry = &g_mapGimic->entries[i];

        if (entry->active != 0) {
            s32 flagOn = entry->requiredFlag;
            s32 flagOff = entry->forbiddenFlag;

            if ((flagOn != 0 && gameFlagIsSet(flagOn) == 0) || (flagOff != 0 && gameFlagIsSet(flagOff) != 0)) {
                FUN_002878fc(entry->gimicId);
            }
        }
    }
}

} /* extern "C" */
