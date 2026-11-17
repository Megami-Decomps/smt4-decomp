#include "common.h"
#include "game/GameStateA.h"

extern "C" {

struct WarpVec3 {
    f32 x, y, z;
};

/* An Apocalypse map enemy slot (0x188 bytes, larger than IV's shared enemy-slot layout). */
struct EnemyWarpSlotA {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[7];
    /* 0x008 */ WarpVec3 position;
    /* 0x014 */ u8 unk014[0xC];
    /* 0x020 */ WarpVec3 snapshot;
    /* 0x02C */ f32 heading;
    /* 0x030 */ u8 unk030[0x4D];
    /* 0x07D */ u8 blocked;
    /* 0x07E */ u8 unk07E[6];
    /* 0x084 */ u32 state;
    /* 0x088 */ u32 elapsed;
    /* 0x08C */ u8 unk08C[0xF0];
    /* 0x17C */ s32 kind;
    /* 0x180 */ u8 unk180[8];
};

struct EnemyWarpStateView {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ EnemyWarpSlotA entries[40];
};

/* A warp point record of data table 41: its position and heading. */
struct WarpPoint {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ s16 x, y, z;
    /* 0x08 */ s16 heading;
};

extern EnemyWarpStateView *g_mapEnemy;
void *FUN_003c316c(s32 id);
void FUN_00377acc(void *enemy, s32 warpId, s32 mode);

/* When a warp is pending, moves the first active, unblocked enemy of kind 1-10 in state 2 to the
 * warp point and puts it in the warp state (28). */
void FUN_002b63d0(void)
{
    EnemyWarpStateView *state = g_mapEnemy;
    if (g_gameState.warpId != 0) {
        const WarpPoint *point = static_cast<const WarpPoint *>(FUN_003c316c(g_gameState.warpId));
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
                    FUN_00377acc(entry, g_gameState.warpId, 4);
                    return;
                }
            }
        }
    }
}

} /* extern "C" */
