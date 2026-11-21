#include "gamedata/MapSaveBlock.h"
#include "map/MapDepartLookup.h"

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
    MapSaveBlock *saved = gameGetMapBlock();
    const s32 mode = saved->resumeMode;
    if (mode == MAP_RESUME_DEFAULT) {
        mapDepartSelect(1, 2, 0);
        return;
    } else if (mode == MAP_RESUME_WITH_HEADING) {
        g_mapSelection.selection.group = saved->resumeMapId;
        g_mapSelection.selection.map = saved->resumeAreaId;
        g_mapSelection.selection.target = -1;
        g_mapSelection.selection.destination = saved->resumeObjectId;
        g_mapSelection.position.x = saved->resumePosition.x;
        g_mapSelection.position.y = saved->resumePosition.y;
        g_mapSelection.position.z = saved->resumePosition.z;
        g_mapSelection.heading = saved->resumeHeading;
        g_mapSelection.parameter = saved->resumeViewHeading;
        return;
    } else if (mode == MAP_RESUME_WITH_POSITION) {
        g_mapSelection.selection.group = saved->resumeMapId;
        g_mapSelection.selection.map = saved->resumeAreaId;
        g_mapSelection.selection.target = -1;
        g_mapSelection.selection.destination = saved->resumeObjectId;
        g_mapSelection.position.x = saved->resumePosition.x;
        g_mapSelection.position.y = saved->resumePosition.y;
        g_mapSelection.position.z = saved->resumePosition.z;
        return;
    } else if (mode == MAP_RESUME_AREA_ONLY) {
        g_mapSelection.selection.group = saved->resumeMapId;
        g_mapSelection.selection.map = saved->resumeAreaId;
        g_mapSelection.selection.destination = -1;
        return;
    }
}
} /* extern "C" */
