/* NON_MATCHING: pushes a sphere out of four lists of collision planes (two passes with radius 25, two with 50 or 60 depending on `shortReach`), recording which planes were touched and which wall plane was hit last, and returns whether the motion was changed; written from the decompilation, the packed 64-bit float pairs are plain locals, the sphere centre starts 15 above the position and the final write-back subtracts the decompiler's shared constant (25); build is 245 rows against 246 retail */
#include "common.h"

#define PASS_COUNT 4
#define PLANE_STRIDE 0xA8
#define PLANE_TYPE_WALL 1
#define SPHERE_LIFT 15.0f
#define SPHERE_RADIUS 25.0f
#define SPHERE_RADIUS_SHORT 50.0f
#define SPHERE_RADIUS_LONG 60.0f
#define MOTION_EPSILON 0.01f
#define PASS_WALLS_A 0
#define PASS_WALLS_B 1
#define PASS_FLOORS_A 2
#define PASS_FLOORS_B 3

/* A collision plane (observed fields, 0xA8 bytes). */
struct CollisionPlane {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 type;
    /* 0x05 */ s8 sub;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ f32 nx;
    /* 0x10 */ f32 ny;
    /* 0x14 */ f32 nz;
    /* 0x18 */ f32 d;
    /* 0x1C */ u8 unk1C[0x8C];
};

extern "C" {
extern s32 DAT_00580208;      /* wall plane count A */
extern s32 DAT_0058020c;      /* wall plane count B */
extern s32 DAT_00580210;      /* floor plane count A */
extern s32 DAT_00580214;      /* floor plane count B */
extern CollisionPlane *DAT_0058021c;
extern CollisionPlane *DAT_00580220;
extern CollisionPlane *DAT_00580224;
extern CollisionPlane *DAT_00580228;
extern u8 DAT_005ecf14[];     /* touched flags, wall list A */
extern u8 DAT_005ed114[];     /* touched flags, wall list B */
extern u8 DAT_005ed294[];     /* touched flags, floor list A */
extern u8 DAT_005ed334[];     /* touched flags, floor list B */
extern s32 DAT_005f1c4c;      /* pass of the last wall hit */
extern s32 DAT_005f1c50;      /* plane index of the last wall hit */

void collisionTestProjectedSpherePlanes(f32 *reach, s32 type, s32 sub, CollisionPlane *plane);
f32 sqrtf(f32 value);

static __inline void clearFlags(u8 *flags, s32 count)
{
    for (s32 i = 0; i < count; i++)
        flags[i] = 0;
}

u32 FUN_0025ef68(f32 *position, f32 *previous, s32 shortReach)
{
    s32 lastWall = -1;
    u32 changed = 0;
    f32 startX = position[0];
    f32 startY = position[1];
    f32 startZ = position[2];
    f32 dx = startX - previous[0];
    f32 dy = startY - previous[1];
    f32 dz = startZ - previous[2];
    DAT_005f1c4c = -1;
    DAT_005f1c50 = -1;

    clearFlags(DAT_005ecf14, DAT_00580208);
    clearFlags(DAT_005ed114, DAT_0058020c);
    clearFlags(DAT_005ed294, DAT_00580210);
    clearFlags(DAT_005ed334, DAT_00580214);

    if (sqrtf(dx * dx + dy * dy + dz * dz) < MOTION_EPSILON)
        return 1;

    f32 x = startX;
    f32 y = startY + SPHERE_LIFT;
    f32 z = startZ;
    f32 radius = SPHERE_RADIUS;
    f32 farRadius = shortReach != 0 ? SPHERE_RADIUS_SHORT : SPHERE_RADIUS_LONG;

    for (s32 pass = 0; pass < PASS_COUNT; pass++) {
        CollisionPlane *planes;
        s32 count;
        switch (pass) {
        case PASS_WALLS_A:
            planes = DAT_0058021c;
            count = DAT_00580208;
            break;
        case PASS_WALLS_B:
            planes = DAT_00580220;
            count = DAT_0058020c;
            break;
        case PASS_FLOORS_A:
            planes = DAT_00580224;
            count = DAT_00580210;
            radius = farRadius;
            break;
        default:
            planes = DAT_00580228;
            count = DAT_00580214;
            radius = farRadius;
            break;
        }

        for (s32 i = 0; i < count; i++, planes++) {
            if (planes->active == 0)
                continue;
            f32 signedDistance = x * planes->nx + y * planes->ny + z * planes->nz - planes->d;
            f32 distance = signedDistance < 0.0f ? -signedDistance : signedDistance;
            f32 reach;
            if (!(distance < radius))
                continue;
            collisionTestProjectedSpherePlanes(&reach, planes->type, planes->sub, planes);
            if (!(0.0f <= reach))
                continue;

            f32 footX = x - planes->nx * signedDistance;
            f32 footY = y - planes->ny * signedDistance;
            f32 footZ = z - planes->nz * signedDistance;
            if (planes->type != PLANE_TYPE_WALL) {
                if (pass == PASS_FLOORS_A)
                    DAT_005ed294[i] = 1;
                else if (pass == PASS_FLOORS_B)
                    DAT_005ed334[i] = 1;
                if (0.0f <= signedDistance) {
                    if (reach < distance)
                        reach = distance;
                    x = footX + planes->nx * reach;
                    y = footY + planes->ny * reach;
                    z = footZ + planes->nz * reach;
                }
            } else {
                DAT_005f1c4c = pass;
                DAT_005f1c50 = i;
                if (pass == PASS_WALLS_A)
                    DAT_005ecf14[i] = 1;
                else if (pass == PASS_WALLS_B)
                    DAT_005ed114[i] = 1;
                if (lastWall >= 0 && reach < distance)
                    reach = distance;
                changed = 1;
                x = footX + planes->nx * reach;
                y = footY + planes->ny * reach;
                z = footZ + planes->nz * reach;
                if (reach == radius)
                    lastWall = i;
            }
        }
    }

    position[0] = x;
    position[1] = y - SPHERE_RADIUS;
    position[2] = z;
    previous[0] = startX;
    previous[1] = startY;
    previous[2] = startZ;
    return changed;
}

} /* extern "C" */
