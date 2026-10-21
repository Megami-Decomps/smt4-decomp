/* NON_MATCHING: float conversions are allocated directly to preserved registers, argument lifetimes differ, and loop-count scheduling moves; candidate -O2. */
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
u32 dataTableGetRecordFortyFive();
Entry *FUN_0025be44(u32 index);
f32 FUN_00287aec(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

void lmapFindNearestMatchingTargetPoint(s32 firstKind, s32 secondKind, s32 thirdKind,
                  Vec3f *output, f32 *yaw, s32 direction, Vec3f origin)
{
    s32 index = 0;
    s32 nearest = 99999;
    if ((s32)dataTableGetRecordFortyFive() > 0) {
        f32 boundary = origin.y + 20.0f;
        do {
            const MapTargetPoint *point = (const MapTargetPoint *)FUN_0025be44(index);
            if (point->map < 0 || point->map != (s16)g_mapObj->map ||
                point->object != (s16)g_mapObj->object ||
                (point->kind != firstKind && point->kind != secondKind && point->kind != thirdKind)) {
                continue;
            }
            Vec3f position = { (f32)point->x, (f32)point->y, (f32)point->z };
            if (direction > 0 && position.y < boundary) {
                continue;
            }
            if (direction < -1 && position.y > boundary) {
                continue;
            }
            s32 distance = (s32)FUN_00287aec(origin.x, origin.y, origin.z,
                                           position.x, position.y, position.z);
            if (distance < nearest) {
                nearest = distance;
                output->x = position.x;
                output->y = position.y;
                output->z = position.z;
                *yaw = (f32)point->yaw;
            }
        } while (++index < (s32)dataTableGetRecordFortyFive());
    }
}
}
