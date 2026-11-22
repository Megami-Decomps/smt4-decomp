#include "map/mapObj.h"
#include "map/MapObjectRecords.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {
extern MapObjectState *g_mapObj;
s32 dataTableGetRecordFortyFive(void);

/* Finds the nearest matching table-45 point on this map, optionally restricted above or below y+50. */
void mapObjFindNearestPointByCategory(s32 firstCategory, s32 secondCategory, s32 thirdCategory,
                  MapVector *position, f32 *heading, s32 vertical,
                  MapVector origin)
{
    s32 nearest = 99999;
    for (s32 index = 0; index < dataTableGetRecordFortyFive(); index++) {
        const MapObjRecord *record = mapObjGetCombinedEntry(index);
        if (record->map >= 0 && record->map == (s16)g_mapObj->request.map &&
            record->object == (s16)g_mapObj->request.object &&
            (record->kind == firstCategory || record->kind == secondCategory ||
             record->kind == thirdCategory)) {
            MapVector point = {
                (f32)record->x, (f32)record->y, (f32)record->z
            };
            if (vertical > 0 && point.y < origin.y + 50.0f) {
                continue;
            }
            if (vertical < -1 && origin.y + 50.0f < point.y) {
                continue;
            }
            s32 distance = (s32)distSpatial(origin, point);
            if (distance >= nearest) {
                continue;
            }
            *position = point;
            *heading = record->placement;
            nearest = distance;
        }
    }
}

} /* extern "C" */
