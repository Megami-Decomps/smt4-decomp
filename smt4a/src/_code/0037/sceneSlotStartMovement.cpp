/* NON_MATCHING: the slot search now returns from inside the loop (no re-check of the slot, like retail); remaining: retail stores the nine parameter floats with one `vstmia {s0-s8}` and reloads destination[2]/origin[2] from memory; the build splits the stores */
#include "map/MapEnemyGlobal.h"

extern "C" {



void sceneSlotStartMovement(f32 x, f32 y, f32 z, f32 value, f32 targetX, f32 targetY, f32 targetZ, f32 targetValue, f32 duration, f32 progress)
{
    for (s32 i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        MapEnemyEntryA *slot = &g_mapEnemy->entries[i];
        if (slot->active && slot->kind != 0 && slot->kind < 11 && slot->state == 2) {
            slot->start.x = x;
            slot->start.y = y;
            slot->start.z = z;
            slot->startHeading = value;
            slot->end.x = targetX;
            slot->end.y = targetY;
            slot->end.z = targetZ;
            slot->endHeading = targetValue;
            slot->duration = duration;
            slot->velocity.x = targetX - x;
            slot->velocity.y = targetY - y;
            slot->velocity.z = slot->end.z - slot->start.z;
            f32 inverseDuration = 1.0f / duration;
            slot->velocity.x *= inverseDuration;
            slot->velocity.y *= inverseDuration;
            slot->velocity.z *= inverseDuration;
            slot->wait = progress;
            MapVector origin = {slot->start.x, slot->start.y, slot->start.z};
            slot->basePosition = origin;
            slot->position = origin;
            slot->heading = slot->startHeading;
            slot->state = 26;
            slot->elapsed = 0;
            return;
        }
    }
}

} /* extern "C" */
