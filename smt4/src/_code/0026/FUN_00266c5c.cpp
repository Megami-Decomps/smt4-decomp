/* NON_MATCHING: retail spills the result pointer (push {r0-r2,...}), keeps the whole sweep in s16-s31 with the plane pointer in r4, and lays the three pass set-ups out differently (about 290 diff lines). */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <stddef.h>

struct SweepVec3 {
    f32 x, y, z;
};

/* One wall plane: the first pass looks at the kind 3 planes of g_collisionPlaneTable only. */
struct WallPlane {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 axis;
    /* 0x05 */ s8 planeCount;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 kind;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ SweepVec3 normal;
    /* 0x18 */ f32 distance;
    /* 0x1C */ u8 unk1C[0x8C];
};
typedef char WallPlaneSizeCheck[sizeof(WallPlane) == 0xA8 ? 1 : -1];

extern "C" {
double sqrt(double);
f32 FUN_0024bb4c(s32 axis, s32 planeCount, const WallPlane *plane, f32 x, f32 y, f32 z, f32 radius);
extern WallPlane g_collisionPlaneTable[];

static f32 sweepAbs(f32 value)
{
    return value < 0.0f ? -value : value;
}

/* Sweep the segment `from` -> `to` through the collision planes (three passes, each with a growing sphere radius).
 * Returns the index of the last plane that was hit (or -1) and writes the stopping point to `result`. */
s32 FUN_00266c5c(const SweepVec3 *from, const SweepVec3 *to, SweepVec3 *result)
{
    s32 hit = -1;
    f32 tx = to->x;
    f32 ty = to->y;
    f32 tz = to->z;
    f32 cx = from->x;
    f32 cy = from->y;
    f32 cz = from->z;
    for (s32 pass = 0; pass < 3; pass++) {
        const WallPlane *planes;
        s32 count;
        f32 radius = 8.0f;
        if (pass == 0) {
            planes = g_collisionPlaneTable;
            count = g_mapCollision.secondCount;
            radius = 28.0f;
            if (hit == -1) {
                f32 dx = cx - tx;
                f32 dy = cy - ty;
                f32 dz = cz - tz;
                f32 scale = 1.0f / (f32)sqrt(dx * dx + dy * dy + dz * dz);
                cx += dx * scale * radius;
                cy += dy * scale * radius;
                cz += dz * scale * radius;
            }
        } else if (pass == 1) {
            planes = (const WallPlane *)g_mapCollision.second;
            count = g_mapCollision.segmentCounts[0];
            if (hit == -1) {
                f32 dx = from->x - tx;
                f32 dy = from->y - ty;
                f32 dz = from->z - tz;
                f32 scale = 1.0f / (f32)sqrt(dx * dx + dy * dy + dz * dz);
                cx = from->x + dx * scale * radius;
                cy = from->y + dy * scale * radius;
                cz = from->z + dz * scale * radius;
            }
        } else {
            planes = (const WallPlane *)g_mapCollision.unk24;
            count = g_mapCollision.segmentCounts[1];
        }
        for (s32 i = 0; i < count; i++) {
            const WallPlane *plane = &planes[i];
            if (!plane->active || (pass == 0 && plane->kind != 3)) {
                continue;
            }
            f32 before = cx * plane->normal.x + cy * plane->normal.y + cz * plane->normal.z - plane->distance;
            f32 after = tx * plane->normal.x + ty * plane->normal.y + tz * plane->normal.z - plane->distance;
            if (!((before < 0.0f && after >= 0.0f) || (after < 0.0f && before >= 0.0f))) {
                continue;
            }
            f32 beforeDistance = sweepAbs(before);
            f32 total = beforeDistance + sweepAbs(after);
            f32 startX = cx;
            f32 startY = cy;
            f32 startZ = cz;
            f32 dx = tx - startX;
            f32 dy = ty - startY;
            f32 dz = tz - startZ;
            f32 along = beforeDistance / total;
            f32 inside = FUN_0024bb4c(plane->axis, plane->planeCount, plane, startX + dx * along, startY + dy * along,
                                      startZ + dz * along, radius);
            if (inside < 0.0f) {
                continue;
            }
            f32 ratio = (beforeDistance + inside) / total;
            hit = i;
            if (ratio < 1.0f) {
                cx = startX + dx * ratio;
                cy = startY + dy * ratio;
                cz = startZ + dz * ratio;
            } else {
                cx = tx + dx * -24.0f;
                cy = ty + dy * -24.0f;
                cz = tz + dz * -24.0f;
            }
        }
    }
    if (hit == -1) {
        *result = *from;
    } else {
        result->x = cx;
        result->y = cy;
        result->z = cz;
    }
    return hit;
}
}
