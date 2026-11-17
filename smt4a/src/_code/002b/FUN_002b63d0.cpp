#include "common.h"
#include "game/GameStateA.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

/* A warp point record of data table 41: its position and heading. */
struct WarpPoint {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ s16 x, y, z;
    /* 0x08 */ s16 heading;
};

void *FUN_003c316c(s32 id);

/* When a warp is pending, moves the first active, unblocked enemy of kind 1-10 in state 2 to the
 * warp point and puts it in the warp state (28). */
void FUN_002b63d0(void)
{
    MapEnemyA *state = g_mapEnemy;
    if (g_gameState.warpId != 0) {
        const WarpPoint *point = static_cast<const WarpPoint *>(FUN_003c316c(g_gameState.warpId));
        if (point != NULL) {
            for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
                MapEnemyEntryA *entry = &state->entries[index];
                if (entry->active && entry->kind != 0 && entry->kind < 11 &&
                    entry->locked == 0 && entry->state == 2) {
                    entry->basePosition.x = static_cast<f32>(point->x);
                    entry->basePosition.y = static_cast<f32>(point->y);
                    entry->basePosition.z = static_cast<f32>(point->z);
                    entry->heading = static_cast<f32>(point->heading);
                    entry->position = entry->basePosition;
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
