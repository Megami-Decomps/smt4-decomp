#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {

typedef struct MapEnemyMarker {
    u8 unk00[0x20];
    f32 position[3]; /* 0x20 */
    u8 unk2C[0x24];
    u8 visible;      /* 0x50 */
    u8 unk51[7];
    u32 model;       /* 0x58 */
    u8 unk5C[0x28];
    s32 state;       /* 0x84 */
} MapEnemyMarker;

void FUN_00357b18(u32 model, u32 a1, u32 a2, s32 x, s32 y, s32 z, s32 active);

/* Places a visible map enemy's marker at its position; states 2 and 3 show it inactive. */
void FUN_00353c20(MapEnemyMarker *enemy)
{
    SceneSlotList *list = g_mapEnemy;

    if (!enemy->visible) {
        return;
    }
    if (enemy->state == 3 || enemy->state == 2) {
        FUN_00357b18(enemy->model, list->unk0C, list->unk10, (s32)enemy->position[0], (s32)enemy->position[1],
                     (s32)enemy->position[2], 0);
    } else {
        FUN_00357b18(enemy->model, list->unk0C, list->unk10, (s32)enemy->position[0], (s32)enemy->position[1],
                     (s32)enemy->position[2], 1);
    }
}

} /* extern "C" */
