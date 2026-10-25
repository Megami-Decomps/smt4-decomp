/* NON_MATCHING: ordered vertical exclusion and nearest-distance guards now agree; output/category ownership and distance-argument VFP staging still differ. */
#include "map/mapObj.h"
#include "map/mapDepart.h"

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
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

/* Finds the nearest matching table-45 point on this map, optionally restricted above or below y+50. */
void FUN_00325ba4(s32 firstCategory, s32 secondCategory, s32 thirdCategory,
                  MapVector *position, f32 *heading, s32 vertical,
                  f32 x, f32 y, f32 z)
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
            f32 threshold = y + 50.0f;
            if (vertical > 0 && point.y < threshold) {
                continue;
            }
            if (vertical < -1 && threshold < point.y) {
                continue;
            }
            s32 distance = (s32)distSpatial(x, y, z, point.x, point.y, point.z);
            if (distance >= nearest) {
                continue;
            }
            position->x = point.x;
            position->y = point.y;
            position->z = point.z;
            *heading = record->heading;
            nearest = distance;
        }
    }
}
}
