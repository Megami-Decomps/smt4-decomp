/* NON_MATCHING: default destination lookup constant lifetimes and common return blocks differ; restored target headers store separately. */
#include "shard/SaveWork.h"
#include "map/MapDepartTarget.h"
#include "map/SceneSpawn.h"
#include "map/mapDepart.h"
#include "shard/dataTableGetRecord23.h"

extern "C" {
extern MapDepartTarget DAT_0049fd14;
SaveWork *gameGetMapBlock(void);
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
    // Both the saved destination and the target's coordinates extend beyond the shared prefixes.
    struct SavedMapView {
        u8 kind, map, area, unk03;
        MapVector position;
        f32 heading;
        f32 parameter;
        u8 unk18[0xDC0];
        s32 destination;
    };
    struct TargetView {
        MapDepartTarget selection;
        MapVector position;
        f32 heading;
        f32 parameter;
    };
    SavedMapView *saved = reinterpret_cast<SavedMapView *>(gameGetMapBlock());
    TargetView *target = reinterpret_cast<TargetView *>(&DAT_0049fd14);
    switch (saved->kind) {
    case 0: {
        target->selection.group = 1;
        target->selection.map = 2;
        target->selection.target = 0;
        target->selection.destination = findSpawnDestination(1, 2, 0);
        break;
    }
    case 1:
        target->selection.group = saved->map;
        target->selection.map = saved->area;
        target->selection.target = ~0u;
        target->selection.destination = saved->destination;
        target->position.x = saved->position.x;
        target->position.y = saved->position.y;
        target->position.z = saved->position.z;
        target->heading = saved->heading;
        target->parameter = saved->parameter;
        break;
    case 2:
        target->selection.group = saved->map;
        target->selection.map = saved->area;
        target->selection.target = ~0u;
        target->selection.destination = saved->destination;
        target->position.x = saved->position.x;
        target->position.y = saved->position.y;
        target->position.z = saved->position.z;
        break;
    case 3:
        target->selection.group = saved->map;
        target->selection.map = saved->area;
        target->selection.destination = -1;
        break;
    }
}
}
