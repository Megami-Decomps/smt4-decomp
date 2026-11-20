/* Starts the first idle (state 2) unlocked map actor on a record's integer position, switching it to state 24. */
#include "map/MapEnemyGlobal.h"

extern "C" {
const void *FUN_003a30e8(u32 index);

void mapEnemyMoveIdleActorToRecord(s32 id)
{
    struct PositionRecordView {
        u8 unk00[0x18];
        s16 position[4];
        u8 unk20[0x98];
    };
    MapEnemyA *owner = g_mapEnemy;
    const PositionRecordView *source = (const PositionRecordView *)FUN_003a30e8(id);
    for (s32 i = 0; i < MAP_ENEMY_COUNT_A; ++i) {
        MapEnemyEntryA *slot = &owner->entries[i];
        if (slot->active && slot->kind != 0 && slot->kind < 11 && slot->locked == 0 && slot->state == 2) {
            slot->basePosition.x = (f32)source->position[0];
            slot->basePosition.y = (f32)source->position[1];
            slot->basePosition.z = (f32)source->position[2];
            slot->heading = (f32)source->position[3];
            slot->position = slot->basePosition;
            slot->state = 24;
            slot->elapsed = 0;
            mapEnemyRebindModel(slot, id, 2);
            return;
        }
    }
}
}
