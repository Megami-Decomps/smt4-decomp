#include "shard/S1Mover.h"
#include "shard/W5_W5Match1_RecordKeys.h"

struct Entry;
struct MapTargetPoint {
    s16 map;
    s16 object;
    s16 kind;
    s16 x;
    s16 y;
    s16 z;
    s16 yaw;
    u8 unk0e[0x12];
};
extern "C" {
extern MapObjectRequest *g_mapObj;
s32 dataTableGetRecordFortyFive(void);
Entry *mapObjGetCombinedEntry(u32 index);
f32 mathDistanceBetweenPoints(Vec3f from, Vec3f to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail passes both points as by-value vectors, as Apocalypse's twin calls distSpatial)

/* Finds the nearest matching table-45 point on this map, optionally restricted above or below y+20. */
void lmapFindNearestMatchingTargetPoint(s32 firstKind, s32 secondKind, s32 thirdKind,
                  Vec3f *output, f32 *yaw, s32 direction, Vec3f origin)
{
    s32 nearest = 99999;
    for (s32 index = 0; index < (s32)dataTableGetRecordFortyFive(); index++) {
        const MapTargetPoint *point = (const MapTargetPoint *)mapObjGetCombinedEntry(index);
        if (point->map >= 0 && point->map == (s16)g_mapObj->map &&
            point->object == (s16)g_mapObj->object &&
            (point->kind == firstKind || point->kind == secondKind || point->kind == thirdKind)) {
            Vec3f position = { (f32)point->x, (f32)point->y, (f32)point->z };
            if (direction > 0 && position.y < origin.y + 20.0f) {
                continue;
            }
            if (direction < -1 && origin.y + 20.0f < position.y) {
                continue;
            }
            s32 distance = (s32)mathDistanceBetweenPoints(origin, position);
            if (distance >= nearest) {
                continue;
            }
            *output = position;
            *yaw = (f32)point->yaw;
            nearest = distance;
        }
    }
}
} /* extern "C" */
