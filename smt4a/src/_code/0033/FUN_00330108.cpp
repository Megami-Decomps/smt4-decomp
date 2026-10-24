/* NON_MATCHING: the per-quad plane tests and the sphere extension are scheduled differently (retail keeps the target in s19-s21 and the snapshot in s28-s30; 176 vs 185 rows); the sweep logic is the same. */
#include "common.h"
#include <math.h>

extern "C" {

typedef struct SweepVec3 {
    f32 x, y, z;
} SweepVec3;

/* One collision quad (0xA8 bytes; only the fields read here). */
typedef struct SweepQuad {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 shape;
    /* 0x05 */ s8 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ SweepVec3 normal;
    /* 0x18 */ f32 planeD;
    /* 0x1C */ u8 unk1c[0x8C];
} SweepQuad;

/* The map collision lists: two fixed-size sets and the quad list built from the mesh. */
typedef struct MapCollision {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 wallCount;
    /* 0x10 */ s32 quadCount;
    /* 0x14 */ s32 floorCount;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ SweepQuad *walls;
    /* 0x24 */ SweepQuad *quads;
} MapCollision;

extern MapCollision g_mapCollision;
extern SweepQuad DAT_005e2714[];

f32 FUN_002c2a58(s32 kind, s32 shape, SweepQuad *quad, SweepVec3 point, f32 radius);
void collisionTestProjectedSpherePlanes(f32 out[18], s32 kind, s32 shape, SweepQuad *quad, SweepVec3 point, f32 radius);

/* Sweeps a sphere from `from` towards `to` against the three collision lists. The sphere starts
 * pushed back along the path by its radius; the first quad plane the path crosses (and the
 * sphere's contact with it) stops it. Writes the stop position to `out` (or `from` when nothing
 * is hit) and returns the index of the quad hit, or -1. */
s32 FUN_00330108(const SweepVec3 *from, const SweepVec3 *to, SweepVec3 *out)
{
    SweepVec3 current = *from;
    s32 hit = -1;

    for (s32 pass = 0; pass < 3; pass++) {
        SweepQuad *list;
        s32 count;
        f32 radius;

        if (pass == 0) {
            list = DAT_005e2714;
            count = g_mapCollision.floorCount;
            radius = 28.0f;
            if (hit == -1) {
                f32 dx = current.x - to->x;
                f32 dy = current.y - to->y;
                f32 dz = current.z - to->z;
                f32 scale = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);

                current.x += dx * scale * radius;
                current.y += dy * scale * radius;
                current.z += dz * scale * radius;
            }
        } else if (pass == 1) {
            list = g_mapCollision.walls;
            count = g_mapCollision.wallCount;
            radius = 8.0f;
            if (hit == -1) {
                f32 dx = from->x - to->x;
                f32 dy = from->y - to->y;
                f32 dz = from->z - to->z;
                f32 scale = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);

                current.x = from->x + dx * scale * radius;
                current.y = from->y + dy * scale * radius;
                current.z = from->z + dz * scale * radius;
            }
        } else {
            list = g_mapCollision.quads;
            count = g_mapCollision.quadCount;
            radius = 8.0f;
        }
        for (s32 i = 0; i < count; i++, list++) {
            if (list->active == 0) {
                continue;
            }
            SweepVec3 start = current;
            f32 startSide = current.x * list->normal.x + current.y * list->normal.y + current.z * list->normal.z - list->planeD;
            f32 endSide = to->x * list->normal.x + to->y * list->normal.y + to->z * list->normal.z - list->planeD;

            if (!((startSide < 0.0f && 0.0f <= endSide) || (endSide < 0.0f && 0.0f <= startSide))) {
                continue;
            }
            f32 startDistance = fabsf(startSide);
            f32 total = startDistance + fabsf(endSide);
            f32 ratio = startDistance / total;
            SweepVec3 delta;
            SweepVec3 crossing;

            delta.x = to->x - start.x;
            delta.y = to->y - start.y;
            delta.z = to->z - start.z;
            crossing.x = start.x + delta.x * ratio;
            crossing.y = start.y + delta.y * ratio;
            crossing.z = start.z + delta.z * ratio;
            f32 contact;

            if (pass != 0) {
                contact = FUN_002c2a58(list->kind, list->shape, list, crossing, radius);
            } else {
                f32 results[18];

                collisionTestProjectedSpherePlanes(results, list->kind, list->shape, list, crossing, radius);
                contact = results[0];
            }
            if (contact < 0.0f) {
                continue;
            }
            f32 reach = (startDistance + contact) / total;

            if (reach < 1.0f) {
                current.x = start.x + delta.x * reach;
                current.y = start.y + delta.y * reach;
                current.z = start.z + delta.z * reach;
            } else {
                current.x = to->x + delta.x * -6.0f;
                current.y = to->y + delta.y * -6.0f;
                current.z = to->z + delta.z * -6.0f;
            }
            hit = i;
        }
    }
    if (hit == -1) {
        *out = *from;
    } else {
        *out = current;
    }
    return hit;
}

}
