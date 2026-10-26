/* NON_MATCHING: warp id now read from its owning block (DAT_005f17fc + 0x88) and the snapshot copy is a Vec3 assignment, rows equal retail; remaining: retail loads the id sign-extended and the enemy-state pointer before the test. */
#include "common.h"

extern "C" {
struct WarpGlobals {
    u8 unk00[0x88];
    s16 warpId; // 0x88
};
extern WarpGlobals DAT_005f17fc;
struct WarpVec3 {
    f32 x, y, z;
};
void *FUN_003c316c(void);
void FUN_00377acc(void *, s32, s32);

void FUN_002b63d0(void)
{
    struct EnemyWarpSlotA {
        u8 active;
        u8 unk001[7];
        WarpVec3 position;
        u8 unk014[0xC];
        WarpVec3 snapshot;
        f32 heading;
        u8 unk030[0x4D];
        u8 blocked;
        u8 unk07E[6];
        u32 state;
        u32 elapsed;
        u8 unk08C[0xF0];
        s32 kind;
        u8 unk180[8];
    };
    // Apocalypse's 0x188-byte slots exceed the shared IV enemy-slot layout.
    struct EnemyWarpStateView {
        u8 unk000[0x34];
        EnemyWarpSlotA entries[40];
    };
    struct WarpPoint {
        u16 unk00;
        s16 x, y, z;
        s16 heading;
    };
    extern EnemyWarpStateView *g_mapEnemy;
    EnemyWarpStateView *state = g_mapEnemy;
    if (DAT_005f17fc.warpId != 0) {
        const WarpPoint *point = static_cast<const WarpPoint *>(FUN_003c316c());
        if (point != NULL) {
            for (s32 index = 0; index < 40; ++index) {
                EnemyWarpSlotA *entry = &state->entries[index];
                if (entry->active && entry->kind != 0 && entry->kind < 11 &&
                    entry->blocked == 0 && entry->state == 2) {
                    entry->position.x = static_cast<f32>(point->x);
                    entry->position.y = static_cast<f32>(point->y);
                    entry->position.z = static_cast<f32>(point->z);
                    entry->heading = static_cast<f32>(point->heading);
                    entry->snapshot = entry->position;
                    entry->state = 28;
                    entry->elapsed = 0;
                    FUN_00377acc(entry, DAT_005f17fc.warpId, 4);
                    return;
                }
            }
        }
    }
}
}
