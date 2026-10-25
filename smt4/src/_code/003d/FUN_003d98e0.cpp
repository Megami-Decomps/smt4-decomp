/* NON_MATCHING: VFP callee-saved numbering only: retail keeps the incoming x/y pair in d8 (s16/s17) and z in s18, built uses s17/s18 and s16 */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct Vec2 {
    f32 x, y;
} Vec2;

typedef struct EffectOwner {
    /* 0x0000 */ u32 handles[50];
    /* 0x00C8 */ u32 slots[50];
    /* 0x0190 */ u8 unk190[0x2E98];
    /* 0x3028 */ u32 flags;
} EffectOwner;

s32 FUN_001c2b48(u32 effect);
s32 FUN_00224ab0(f32 *value, s32 index, u32 arg);
u32 FUN_00244e1c(u32 effect, u32 *slot, s32 flag, s32 mode, Vec3 position, f32 scale);
void FUN_003947cc(u32 handle, s32 zero, s32 kind, Vec3 position);
Vec3 FUN_003dd680(EffectOwner *owner, s32 kind, u32 arg, s32 index);

/* Returns the first unused slot of the owner's slot list, or NULL when all are taken. */
static __inline u32 *findFreeSlot(EffectOwner *owner)
{
    for (s32 i = 0; i < 50; i += 2) {
        if (owner->slots[i] == 0) {
            return &owner->slots[i];
        }
        if (owner->slots[i + 1] == 0) {
            return &owner->slots[i + 1];
        }
    }
    return NULL;
}

/* Records the handle in the owner's handle list (unless already present); returns it, or 0 when the list is full. */
static __inline u32 registerHandle(EffectOwner *owner, u32 handle)
{
    for (s32 i = 0; i < 50; i++) {
        if (owner->handles[i] == handle) {
            return handle;
        }
        if (owner->handles[i] == 0) {
            owner->handles[i] = handle;
            return handle;
        }
    }
    return 0;
}

/* Starts the effect `effect` of the given kind at the (offset) origin in a free slot, and registers its handle in the owner's list; returns the handle. */
u32 FUN_003d98e0(EffectOwner *owner, u32 effect, u32 arg, u32 index, u32 indexArg, s32 kind, u32 target, Vec2 origin)
{
    if (effect == 0xff) {
        return 0;
    }
    f32 value = 0.0f;
    s32 found = 0;
    if (kind != 6 && index >= 0) {
        found = FUN_00224ab0(&value, index, indexArg);
    }
    Vec3 position = FUN_003dd680(owner, kind, arg, index);
    position.x += origin.x;
    position.y += origin.y;
    u32 *slot = findFreeSlot(owner);
    FUN_003947cc(target, 0, kind, position);
    if (kind == 2 || kind == 5 || kind == 7 || kind == 8 || kind == 9 || kind == 12) {
        return registerHandle(owner, FUN_00244e1c(effect, slot, 1, 3, position, 1.0f));
    }
    f32 scale = 5.6f;
    if (kind == 11) {
        scale = 1.0f;
    } else if (found != 0) {
        scale = value;
    }
    if ((owner->flags & 4) == 0 && FUN_00221b70(effect) != 0) {
        FUN_001c2b48(effect);
        owner->flags |= 4;
    }
    return registerHandle(owner, FUN_00244e1c(effect, slot, 0, 0, position, scale));
}

} /* extern "C" */
