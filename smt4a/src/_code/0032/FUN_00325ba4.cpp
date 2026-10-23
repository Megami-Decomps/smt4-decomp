/* NON_MATCHING: Saved output/category registers, float-conversion staging and height-comparison lowering differ. */
#include "map/mapObj.h"
#include "map/mapDepart.h"

struct MapPositionRecord {
    s16 map;
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
            f32 pointX = record->x;
            f32 pointY = record->y;
            f32 pointZ = record->z;
            f32 threshold = y + 50.0f;
            if ((vertical <= 0 || pointY >= threshold) &&
                (vertical >= -1 || threshold >= pointY)) {
                s32 distance = (s32)distSpatial(x, y, z, pointX, pointY, pointZ);
                if (distance < nearest) {
                    position->x = pointX;
                    position->y = pointY;
                    position->z = pointZ;
                    *heading = record->heading;
                    nearest = distance;
                }
            }
        }
    }
}
}
