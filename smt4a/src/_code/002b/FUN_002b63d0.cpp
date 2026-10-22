/* NON_MATCHING: retail 58 vs built 60 rows; warp-request global addressing and enemy-slot register allocation differ. */
#include "common.h"

extern "C" {
extern s16 DAT_005f1884;
void *FUN_003c316c(void);
void FUN_00377acc(void *, s32, s32);

void FUN_002b63d0(void)
{
    struct EnemyWarpSlotA {
        u8 active;
        u8 unk001[7];
        f32 position[3];
        u8 unk014[0xC];
        f32 snapshot[3];
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
    if (DAT_005f1884 != 0) {
        const WarpPoint *point = static_cast<const WarpPoint *>(FUN_003c316c());
        if (point != NULL) {
            for (s32 index = 0; index < 40; ++index) {
                EnemyWarpSlotA *entry = &state->entries[index];
                if (entry->active && entry->kind != 0 && entry->kind < 11 &&
                    entry->blocked == 0 && entry->state == 2) {
                    entry->position[0] = static_cast<f32>(point->x);
                    entry->position[1] = static_cast<f32>(point->y);
                    entry->position[2] = static_cast<f32>(point->z);
                    entry->heading = static_cast<f32>(point->heading);
                    entry->snapshot[0] = entry->position[0];
                    entry->snapshot[1] = entry->position[1];
                    entry->snapshot[2] = entry->position[2];
                    entry->state = 28;
                    entry->elapsed = 0;
                    FUN_00377acc(entry, DAT_005f1884, 4);
                    return;
                }
            }
        }
    }
}
}
