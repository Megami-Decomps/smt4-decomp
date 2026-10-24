/* NON_MATCHING: only the order of the two vector loads before distSpatial: retail loads the enemy vector, then the scene pointer and vector; the build loads the scene pointer first. */
#include "map/lmapMain.h"

extern "C" {

/* The live part of a map enemy slot; only the fields the proximity check reads are named. */
typedef struct MapEnemyBody {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x1F];
    /* 0x20 */ MapVector position;
    /* 0x2C */ u8 unk2C[0x58];
    /* 0x84 */ s32 mode;
    /* 0x88 */ u8 unk88[0xCC];
} MapEnemyBody;

/* One map enemy slot (0x188 bytes). */
typedef struct MapEnemyEntry {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ MapEnemyBody body;
} MapEnemyEntry;
typedef char MapEnemyEntrySizeCheck[sizeof(MapEnemyEntry) == 0x188 ? 1 : -1];

extern MapEnemyEntry *g_mapEnemy; /* 0x5806d4 */
extern LmapSceneA *g_lmapScene; /* 0x581288 */

f32 distSpatial(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);

/* Returns whether at least two active enemies (not in mode 2) are within 200 units of the map scene. */
u32 FUN_003ae088(void)
{
    MapEnemyEntry *enemies = g_mapEnemy;
    s32 near = 0;
    s32 i;

    for (i = 0; i < 40; i++) {
        MapEnemyBody *enemy = &enemies[i].body;
        if (enemy->active != 0 && enemy->mode != 2) {
            f32 distance = distSpatial(g_lmapScene->transform.position[0], g_lmapScene->transform.position[1],
                                       g_lmapScene->transform.position[2], enemy->position.x, enemy->position.y,
                                       enemy->position.z);
            if (distance <= 200.0f) {
                near++;
            }
        }
    }
    return near >= 2;
}

} /* extern "C" */
