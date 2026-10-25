/* NON_MATCHING: palette copy (retail copies 8+8 bytes), range compare operand order (vcmpe range,dist; bgt), vertex-argument loads and register allocation differ */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "shard/W5_W5Match7_SceneState.h"
#include <math.h>

extern "C" {
extern u8 DAT_005ecf14[]; /* touched flags, wall list A */
extern u8 DAT_005ed114[]; /* touched flags, wall list B */
extern u8 DAT_005ed294[]; /* touched flags, floor list A */
extern u8 DAT_005ed334[]; /* touched flags, floor list B */
void FUN_00280a08(u32 colorA, u32 colorB, u32 colorC, u32 colorD,
                  CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d);
void FUN_00203970(u32 color, CollisionVector from, CollisionVector to);
}

/* A shape is within range when its center is closer than 1000 units to the position in the ground plane. */
static __inline bool collisionShapeInRange(const CollisionQuad *shape, CollisionVector position, f32 range)
{
    f32 dx = shape->center.x - position.x;
    f32 dz = shape->center.z - position.z;
    return range > sqrtf(dx * dx + dz * dz);
}

/* Collision debug overlay: draws the wall and floor shapes the debug mode selects (all of them,
   those within range of the position, or the ones the last test touched). */
extern "C" void FUN_002c0fc4(CollisionVector position)
{
    f32 range = 1000.0f;
    u32 colors[4] = { 0x400080, 0x600080, 0x800080, 0xa00080 };

    for (u32 i = 0; i < (u32)g_mapCollision.geometry.triangleCount; i++) {
        CollisionQuad *shape = &g_mapCollision.triangles[i];
        s32 mode = g_gameState.collisionDebugMode;
        if (mode == 1 || (mode == 2 && collisionShapeInRange(shape, position, range)) || DAT_005ecf14[i] == 1) {
            u32 color = colors[i & 3];
            FUN_00280a08(color, color, color, color,
                         shape->vertices[0], shape->vertices[1], shape->vertices[2], shape->vertices[0]);
        }
    }
    for (u32 i = 0; i < (u32)g_mapCollision.quadCount; i++) {
        CollisionQuad *shape = &g_mapCollision.quads[i];
        s32 mode = g_gameState.collisionDebugMode;
        if (mode == 1 || (mode == 2 && collisionShapeInRange(shape, position, range)) || DAT_005ed114[i] == 1) {
            u32 color = colors[i & 3];
            FUN_00280a08(color, color, color, color,
                         shape->vertices[0], shape->vertices[1], shape->vertices[2], shape->vertices[3]);
        }
    }
    for (u32 i = 0; i < (u32)g_mapCollision.segmentCounts[0]; i++) {
        CollisionQuad *shape = &g_mapCollision.second[i];
        s32 mode = g_gameState.collisionDebugMode;
        if (mode == 1 || (mode == 2 && collisionShapeInRange(shape, position, range)) || DAT_005ed294[i] == 1) {
            FUN_00203970(0xff00ff, shape->vertices[0], shape->vertices[1]);
            FUN_00203970(0xff00ff, shape->vertices[1], shape->vertices[2]);
            FUN_00203970(0xff00ff, shape->vertices[2], shape->vertices[0]);
        }
    }
    for (u32 i = 0; i < (u32)g_mapCollision.segmentCounts[1]; i++) {
        CollisionQuad *shape = &g_mapCollision.unk24[i];
        s32 mode = g_gameState.collisionDebugMode;
        u32 color;
        if (mode == 1 || (mode == 2 && collisionShapeInRange(shape, position, range))) {
            color = 0xffff00ff;
        } else if (DAT_005ed334[i] == 1) {
            color = 0xff00ff;
        } else {
            continue;
        }
        FUN_00203970(color, shape->vertices[0], shape->vertices[1]);
        FUN_00203970(color, shape->vertices[1], shape->vertices[2]);
        FUN_00203970(color, shape->vertices[2], shape->vertices[3]);
        FUN_00203970(color, shape->vertices[3], shape->vertices[0]);
    }
}
