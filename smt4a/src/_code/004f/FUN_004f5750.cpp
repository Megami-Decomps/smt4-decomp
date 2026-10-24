/* NON_MATCHING: near: same shape, 156 rows against 152; register assignment differs (retail keeps the effect id in sl and the free-slot pointer in r9 and ends both loops at one shared `mov r0,#0`). */
#include "common.h"

#define EFFECT_LIST_SIZE 50
#define EFFECT_LIST_ENTRY_READY 4

struct Vector2 {
    f32 x;
    f32 y;
};

struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
};

/* The battle effect manager (observed fields): the active handles, the slot table and per-battle flags. */
struct BtlEffectManager {
    /* 0x0000 */ s32 handle[EFFECT_LIST_SIZE];
    /* 0x00C8 */ s32 slot[EFFECT_LIST_SIZE];
    /* 0x0190 */ u8 unk0190[0x320C];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[0x68D0];
    /* 0x9C70 */ f32 scaleFactor;
};

extern "C" {

/* Records `handle` in the first free entry of the active list (or finds it already there); 0 when full. */
static __inline s32 effectManagerRecordHandle(BtlEffectManager *manager, s32 handle)
{
    s32 i;

    for (i = 0; i < EFFECT_LIST_SIZE; i++) {
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
Vector3 FUN_004fad68(BtlEffectManager *manager, s32 mode, u32 param, s32 index);
void FUN_0047ed10(u32 value, s32 a, s32 mode, f32 x, f32 y, f32 z);
s32 FUN_0031ba34(s32 effect, s32 *slot, s32 a, s32 b, f32 x, f32 y, f32 z, f32 scale);
s32 entryIsValid(s32 entry);
void FUN_00260030(s32 entry);

/* Starts effect `effect` for the manager: finds a free slot, plays the effect (scaled by its mode) at
 * `position` plus the mode's offset, and records its handle. Returns the handle, or 0 when it could not
 * be started or the handle list is full. */
s32 FUN_004f5750(BtlEffectManager *manager, s32 effect, u32 param, s32 index, Vector2 start, u32 infoValue,
                 s32 mode, u32 targetValue, s32 hasTarget, s32 centered)
{
    f32 info;
    Vector3 position;
    s32 hasInfo = 0;
    Vector3 offset;
    s32 *freeSlot;
    s32 handle;
    s32 i;

    if (effect == 0xFF) {
        return 0;
    }
    info = 0.0f;
    if (mode != 6 && index >= 0) {
        hasInfo = FUN_00320b44(&info, index, infoValue);
    }
    offset = FUN_004fad68(manager, mode, param, index);
    position.x = offset.x + start.x;
    position.y = offset.y + start.y;
    position.z = offset.z;
    freeSlot = NULL;
    for (i = 0; i < EFFECT_LIST_SIZE; i += 2) {
        if (manager->slot[i] == 0) {
            freeSlot = &manager->slot[i];
            break;
        }
        if (manager->slot[i + 1] == 0) {
            freeSlot = &manager->slot[i + 1];
            break;
        }
    }
    if (hasTarget != 0) {
        FUN_0047ed10(targetValue, 0, mode, position.x, position.y, position.z);
    }
    if (mode == 2 || mode == 5 || mode == 7 || mode == 8 || mode == 9 || mode == 12 || mode == 15) {
        handle = FUN_0031ba34(effect, freeSlot, 1, 3, position.x, position.y, position.z, 1.0f);
        return effectManagerRecordHandle(manager, handle);
    } else {
        f32 scale = 5.6f;
        s32 flag = 0;

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
        if (centered != 0) {
            position.x = 0.0f;
            position.y = 0.0f;
            position.z = 0.0f;
            scale = 1.0f;
            flag = 1;
        }
        handle = FUN_0031ba34(effect, freeSlot, 0, flag, position.x, position.y, position.z, scale);
    }
    return effectManagerRecordHandle(manager, handle);
}

} /* extern "C" */
