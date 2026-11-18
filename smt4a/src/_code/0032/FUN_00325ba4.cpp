/* NON_MATCHING: the origin now travels as a MapVector (distSpatial by value); remaining: the origin and point VFP registers, and retail reads record->map signed (ldrsh, then the >= 0 test) where this u16 view drops the test (an s16 map field currently scores worse, 54 against 48). */
#include "map/mapObj.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match1_PositionedStream.h"

struct MapPositionRecord {
    u16 map;
    s16 object;
    s16 category;
    s16 x, y, z;
    s16 heading;
    u8 unk0E[0x12];
};
extern "C" {
extern MapObjectState *g_mapObj;
s32 dataTableGetRecordFortyFive(void);
MapPositionRecord *mapObjGetCombinedEntry(u32 index);

/* Finds the nearest matching table-45 point on this map, optionally restricted above or below y+50. */
void FUN_00325ba4(s32 firstCategory, s32 secondCategory, s32 thirdCategory,
                  MapVector *position, f32 *heading, s32 vertical,
                  MapVector origin)
{
    s32 nearest = 99999;
    for (s32 index = 0; index < dataTableGetRecordFortyFive(); ++index) {
        MapPositionRecord *record = mapObjGetCombinedEntry(index);
        if (record->map >= 0 && record->map == (s16)g_mapObj->request.map &&
            record->object == (s16)g_mapObj->request.object &&
            (record->category == firstCategory || record->category == secondCategory ||
             record->category == thirdCategory)) {
            MapVector point = {
                (f32)record->x, (f32)record->y, (f32)record->z
            };
            f32 threshold = origin.y + 50.0f;
            if (vertical > 0 && point.y < threshold) {
                continue;
            }
            if (vertical < -1 && threshold < point.y) {
                continue;
            }
            s32 distance = (s32)distSpatial(origin, point);
            if (distance >= nearest) {
                continue;
            }
            *position = point;
            *heading = record->heading;
            nearest = distance;
        }
    }
}
}
