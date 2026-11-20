#include "map/MapSelection.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/MapPlaceLookup.h"

extern "C" {

enum {
    MAP_RESUME_DEFAULT,
    MAP_RESUME_WITH_HEADING,
    MAP_RESUME_WITH_POSITION,
    MAP_RESUME_AREA_ONLY,
};

/* Restore the map selection using the saved resume mode. */
void mapRestoreSavedSelection(void)
{
    MapSaveBlockA *saved = gameFlagsGetBlock();
    const s32 mode = saved->resumeMode;
    if (mode == MAP_RESUME_DEFAULT) {
        mapPlaceSelect(1, 2, 0);
        return;
    } else if (mode == MAP_RESUME_WITH_HEADING) {
        g_mapSelection.id = saved->resumeMapId;
        g_mapSelection.kind = saved->resumeAreaId;
        g_mapSelection.counter = -1;
        g_mapSelection.flags = saved->resumeObjectId;
        g_mapSelection.values[0] = saved->resumePosition.x;
        g_mapSelection.values[1] = saved->resumePosition.y;
        g_mapSelection.values[2] = saved->resumePosition.z;
        g_mapSelection.values[3] = saved->resumeHeading;
        g_mapSelection.values[4] = saved->resumeViewHeading;
        return;
    } else if (mode == MAP_RESUME_WITH_POSITION) {
        g_mapSelection.id = saved->resumeMapId;
        g_mapSelection.kind = saved->resumeAreaId;
        g_mapSelection.counter = -1;
        g_mapSelection.flags = saved->resumeObjectId;
        g_mapSelection.values[0] = saved->resumePosition.x;
        g_mapSelection.values[1] = saved->resumePosition.y;
        g_mapSelection.values[2] = saved->resumePosition.z;
        return;
    } else if (mode == MAP_RESUME_AREA_ONLY) {
        g_mapSelection.id = saved->resumeMapId;
        g_mapSelection.kind = saved->resumeAreaId;
        g_mapSelection.flags = -1;
        return;
    }
}
} /* extern "C" */
