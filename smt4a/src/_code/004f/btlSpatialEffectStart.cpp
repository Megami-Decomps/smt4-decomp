/* NON_MATCHING: exact register assignment and layout; only the final spatialEffectTaskCreate call merges vmov.f32 s2, s18 and vmov.f32 s3, s19 into vmov.f64 d1, d9 (29 diff lines from the resulting 4-byte branch-target shift). */
#include "event/SpatialEffectTask.h"
#include "common.h"
#include "map/MapVector.h"
#include "gamedata/GameDataAccess.h"

#define EFFECT_LIST_SIZE 50
#define EFFECT_LIST_ENTRY_READY 4

struct Vector2 {
    f32 x;
    f32 y;
};

/* The battle effect manager (observed fields): the active handles, the slot table and per-battle flags. */
struct BtlEffectManager {
    /* 0x0000 */ s32 handle[EFFECT_LIST_SIZE];
    /* 0x00C8 */ u32 slot[EFFECT_LIST_SIZE];
    /* 0x0190 */ u8 unk0190[0x320C];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[0x68D0];
    /* 0x9C70 */ f32 scaleFactor;
};

extern "C" {

/* Returns the first unused slot of the manager's slot list, or NULL when all are taken. */
static __inline u32 *findFreeSlot(BtlEffectManager *manager)
{
    for (s32 i = 0; i < EFFECT_LIST_SIZE; i += 2) {
        if (manager->slot[i] == 0) {
            return &manager->slot[i];
        }
        if (manager->slot[i + 1] == 0) {
            return &manager->slot[i + 1];
        }
    }
    return NULL;
}

/* Records `handle` in the first free entry of the active list (or finds it already there); 0 when full. */
static __inline s32 effectManagerRecordHandle(BtlEffectManager *manager, s32 handle)
{
    for (s32 i = 0; i < EFFECT_LIST_SIZE; i++) {
        if (manager->handle[i] == handle) {
            return handle;
        }
        if (manager->handle[i] == 0) {
            manager->handle[i] = handle;
            return handle;
        }
    }
    return 0;
}

s32 FUN_00320b44(f32 *scale, s32 index, u32 value);
MapVector btlApplyDirectionBucketEffect(BtlEffectManager *manager, s32 mode, u32 param, s32 index);
void btlEffectSetStartByName(u32 value, s32 a, s32 mode, MapVector position);
void FUN_00260030(s32 entry);

/* Starts effect `effect` for the manager: finds a free slot, plays the effect (scaled by its mode) at
 * `start` plus the mode's offset, and records its handle. Returns the handle, or 0 when it could not
 * be started or the handle list is full. */
s32 btlSpatialEffectStart(BtlEffectManager *manager, s32 effect, u32 param, s32 index, Vector2 start, u32 infoValue,
                 s32 mode, u32 targetValue, s32 hasTarget, s32 centered)
{
    if (effect == 0xFF) {
        return 0;
    }
    f32 info = 0.0f;
    s32 hasInfo = 0;
    if (mode != 6 && index >= 0) {
        hasInfo = FUN_00320b44(&info, index, infoValue);
    }
    MapVector position = btlApplyDirectionBucketEffect(manager, mode, param, index);
    position.x += start.x;
    position.y += start.y;
    u32 *freeSlot = findFreeSlot(manager);
    if (hasTarget != 0) {
        btlEffectSetStartByName(targetValue, 0, mode, position);
    }
    if (mode == 2 || mode == 5 || mode == 7 || mode == 8 || mode == 9 || mode == 12 || mode == 15) {
        return effectManagerRecordHandle(
            manager, (s32)spatialEffectTaskCreate(effect, freeSlot, position.x, position.y, position.z, 1.0f, 1, 3));
    }
    f32 scale = 5.6f;
    if (mode == 11) {
        scale = 1.0f;
    } else if (hasInfo != 0) {
        scale = info;
    } else if (centered == 0) {
        scale = manager->scaleFactor * scale;
    }
    if ((manager->flags & EFFECT_LIST_ENTRY_READY) == 0 && entryIsValid(effect) != 0) {
        FUN_00260030(effect);
        manager->flags |= EFFECT_LIST_ENTRY_READY;
    }
    u8 flag = 0;
    if (centered != 0) {
        position.x = 0.0f;
        position.y = 0.0f;
        position.z = 0.0f;
        scale = 1.0f;
        flag = 1;
    }
    return effectManagerRecordHandle(
        manager, (s32)spatialEffectTaskCreate(effect, freeSlot, position.x, position.y, position.z, scale, 0, flag));
}

} /* extern "C" */
