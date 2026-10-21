/* NON_MATCHING: retail uses `add r2, r0, #260` where armcc emits `cmp r0, #0`. */
#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {



void sceneSlotStartMovement(f32 x, f32 y, f32 z, f32 value, f32 targetX, f32 targetY, f32 targetZ, f32 targetValue, f32 duration, f32 progress)
{
    SceneSlot *slot = NULL;
    for (s32 i = 0; i < 40; i++) {
        SceneSlot *candidate = &g_mapEnemy->slots[i];
        if (candidate->active && candidate->kind != 0 && candidate->kind < 11 && candidate->state == 2) {
            slot = candidate;
            break;
        }
    }
    if (slot == NULL) {
        return;
    }
    slot->origin[0] = x;
    slot->origin[1] = y;
    slot->origin[2] = z;
    slot->origin[3] = value;
    slot->destination[0] = targetX;
    slot->destination[1] = targetY;
    slot->destination[2] = targetZ;
    slot->destination[3] = targetValue;
    slot->duration = duration;
    slot->velocity.x = targetX - x;
    slot->velocity.y = targetY - y;
    slot->velocity.z = slot->destination[2] - slot->origin[2];
    f32 inverseDuration = 1.0f / duration;
    slot->velocity.x *= inverseDuration;
    slot->velocity.y *= inverseDuration;
    slot->velocity.z *= inverseDuration;
    slot->progress = progress;
    MapVector origin = {slot->origin[0], slot->origin[1], slot->origin[2]};
    slot->position = origin;
    slot->previousPosition = origin;
    slot->value = slot->origin[3];
    slot->state = 26;
    slot->stateTime = 0;
}

} /* extern "C" */
