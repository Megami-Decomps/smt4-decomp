#include "battle/btlReflect.h"
#include "common.h"
#include "battle/BtlMainAccess.h"

struct ReflectUnit {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0xE];
    /* 0x62 */ s16 id;
};

struct ReflectRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 values[1];
};

extern "C" {


ReflectRecord *FUN_0027da30(void *battle, s16 id);
s32 FUN_0027dab0(void *battle, ReflectUnit *unit);

/* Registers a type-0x25 reflect entry for the unit under `key` unless the unit lacks flag 1 or
 * the entry already exists; returns the new entry or NULL. */
ReflectAction *btlQueueUnitReflectAction25(s32 id, u32 key, ReflectUnit *unit, u32 param)
{
    ReflectAction *action;
    ReflectAction *next;
    ReflectRecord *record;
    s32 index;

    if (!(unit->flags & 1)) {
        return NULL;
    }
    for (action = g_btlActionReflect->head; action != NULL; action = next) {
        next = action->next;
        if (action->kind == 0x25 && action->options == key && action->target == reinterpret_cast<u32>(unit)) {
            return NULL;
        }
    }
    action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, key);
    record = FUN_0027da30(static_cast<void *>(btlGetMainState()), unit->id);
    index = FUN_0027dab0(static_cast<void *>(btlGetMainState()), unit);
    if (index < 0) {
        index = 0;
    }
    action->kind = 0x25;
    action->target = reinterpret_cast<u32>(unit);
    action->value = param;
    action->first = record->values[index];
    return action;
}

} /* extern "C" */
