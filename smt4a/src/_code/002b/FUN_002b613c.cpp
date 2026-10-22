/* NON_MATCHING: actor kind/identifier tests are ordered differently and transform copies use different load/store grouping. */
/* Updates matching map actors from a record's integer position and movement settings. */
#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {
const void *FUN_003a30e8(const void *record);
void FUN_00377acc(SceneSlot *slot, const void *record, s32 mode);

void FUN_002b613c(const void *record)
{
    struct PositionRecordView {
        u8 unk00[0x18];
        s16 position[4];
        u8 unk20[0x98];
        u8 actorId;
    };
    SceneSlotList *owner = g_mapEnemy;
    const PositionRecordView *source = (const PositionRecordView *)FUN_003a30e8(record);
    for (s32 i = 0; i < 40; ++i) {
        SceneSlot *slot = &owner->slots[i];
        if (slot->active && slot->kind != 0 && (u32)slot->kind < 11) {
            if (source->actorId != 0 && source->actorId != slot->locked) {
                continue;
            }
            if (slot->kind == 1 || slot->kind == 2) {
                slot->position.x = (f32)source->position[0];
                slot->position.y = (f32)source->position[1];
                slot->position.z = (f32)source->position[2];
                slot->value = (f32)source->position[3];
                slot->previousPosition = slot->position;
                FUN_00377acc(slot, record, 2);
                return;
            }
        }
    }
}
}
