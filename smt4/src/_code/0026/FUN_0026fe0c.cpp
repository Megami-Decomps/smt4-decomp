/* NON_MATCHING: default destination lookup constant lifetimes and common return blocks differ; restored target headers store separately. */
#include "gamedata/MapSaveBlock.h"
#include "map/MapDepartTarget.h"
#include "map/SceneSpawn.h"
#include "map/mapDepart.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "game/GameState.h"

extern "C" {
s32 dataTable23Type1CountWithAoc(void);
static __inline s32 findSpawnDestination(s32 map, s32 area, u32 entrance)
{
    for (s32 i = 0; i < dataTable23Type1CountWithAoc(); ++i) {
        const SceneSpawnRecord *record = reinterpret_cast<const SceneSpawnRecord *>(dataTableGetRecord23(i));
        if (record->key.map == map && record->key.area == area && record->key.unk02 == entrance)
            return record->key.variant == 0xFF ? -1 : record->key.variant;
    }
    return -1;
}

void FUN_0026fe0c(void)
{
        struct TargetView {
        MapDepartTarget selection;
        MapVector position;
        f32 heading;
        f32 parameter;
    };
    MapSaveBlock *saved = gameGetMapBlock();
    TargetView *target = reinterpret_cast<TargetView *>(&g_gameState.jumpRequest);
    switch (saved->resumeMode) {
    case 0: {
        target->selection.group = 1;
        target->selection.map = 2;
        target->selection.target = 0;
        target->selection.destination = findSpawnDestination(1, 2, 0);
        break;
    }
    case 1:
        target->selection.group = saved->resumeMapId;
        target->selection.map = saved->resumeAreaId;
        target->selection.target = ~0u;
        target->selection.destination = saved->resumeObjectId;
        target->position.x = saved->resumePosition.x;
        target->position.y = saved->resumePosition.y;
        target->position.z = saved->resumePosition.z;
        target->heading = saved->resumeHeading;
        target->parameter = saved->resumeViewHeading;
        break;
    case 2:
        target->selection.group = saved->resumeMapId;
        target->selection.map = saved->resumeAreaId;
        target->selection.target = ~0u;
        target->selection.destination = saved->resumeObjectId;
        target->position.x = saved->resumePosition.x;
        target->position.y = saved->resumePosition.y;
        target->position.z = saved->resumePosition.z;
        break;
    case 3:
        target->selection.group = saved->resumeMapId;
        target->selection.map = saved->resumeAreaId;
        target->selection.destination = -1;
        break;
    }
}
}
