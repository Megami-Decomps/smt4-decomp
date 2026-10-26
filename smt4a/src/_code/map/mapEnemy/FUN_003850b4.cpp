/* NON_MATCHING: distance now stays in s16 across the heading call (floatBits helper); remaining diff is the i/enemy register pair (r4/r5 swapped), the first vmov r0,s0 vs s16 and the enemy-vector load order in the distSpatial call. */
#include "shard/W5_W5Match7_SceneSlots.h"

struct EnemyApproachMode {
    u32 unk00[2];
    u32 mode;
    u8 unk0c[0x10];
};
struct EnemyApproachKind {
    u8 unk00[6];
    s16 height;
    u8 unk08[8];
};

extern "C" {
extern s8 DAT_005f18bf;
extern EnemyApproachMode DAT_00580b94[];
extern EnemyApproachKind DAT_00582204[];
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
f32 mathAbsHeadingErrorToPoint(f32 x, f32 y, f32 z, f32 heading, f32 otherX, f32 otherY, f32 otherZ);
s32 FUN_0036d984(const MapVector *position, const MapVector *other, u32 flags);

/* Non-negative IEEE-754 values keep their numeric order when compared as signed words. */
static __inline s32 floatBits(f32 value)
{
    union { f32 value; s32 bits; } representation;
    representation.value = value;
    return representation.bits;
}

/* Start an unobstructed nearby enemy's approach when distance or heading permits. */
u32 FUN_003850b4(void)
{
    SceneSlotList *enemies = g_mapEnemy;
    for (s32 i = 0; i < 40; ++i) {
        SceneSlot *enemy = &enemies->slots[i];
        if (enemy->active && (enemy->state == 6 || enemy->state == 7 || enemy->state == 15)) {
            f32 distance = distSpatial(g_lmapScene->position.x, g_lmapScene->position.y, g_lmapScene->position.z,
                                       enemy->previousPosition.x, enemy->previousPosition.y, enemy->previousPosition.z);
            if (floatBits(distance) <= 0x447a0000) {
                f32 angle = mathAbsHeadingErrorToPoint(g_lmapScene->position.x, g_lmapScene->position.y,
                                           g_lmapScene->position.z, g_lmapScene->heading,
                                           enemy->previousPosition.x, enemy->previousPosition.y, enemy->previousPosition.z);
                if ((floatBits(distance) >= 0x43960000 || floatBits(angle) >= 0x42f00000) &&
                    FUN_0036d984(&g_lmapScene->position, &enemy->previousPosition, 0) == -1) {
                    enemy->state = 30;
                    enemy->approach.mode = DAT_00580b94[DAT_005f18bf].mode;
                    enemy->approach.height = (f32)DAT_00582204[enemy->kind].height;
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
