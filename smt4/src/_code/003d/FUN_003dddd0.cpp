/* NON_MATCHING: pre-advanced reflect traversal matches; incoming id and queue owner lifetimes and the unit flag test differ. */
#include "battle/btlReflect.h"
#include "common.h"

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


void *btlGetMainState(void);
ReflectRecord *FUN_0027da30(void *battle, s16 id);
s32 FUN_0027dab0(void *battle, ReflectUnit *unit);

/* Registers a type-0x25 reflect entry for the unit under `key` unless the unit lacks flag 1 or
 * the entry already exists; returns the new entry or NULL. */
ReflectAction *FUN_003dddd0(s32 id, u32 key, ReflectUnit *unit, u32 param)
{
    if (!(unit->flags & 1))
        return NULL;
    ReflectContext *list = g_btlActionReflect;
    ReflectAction *node = list->head;
    while (node != NULL) {
        u32 kind = node->kind;
        ReflectAction *next = node->next;
        if (kind == 0x25 && node->options == key && node->target == (u32)unit)
            return NULL;
        node = next;
    }
    node = btlQueueReflectAction(list, (s16)id, 0, key);
    ReflectRecord *record = FUN_0027da30(btlGetMainState(), unit->id);
    s32 index = FUN_0027dab0(btlGetMainState(), unit);
    if (index < 0)
        index = 0;
    node->kind = 0x25;
    node->target = (u32)unit;
    node->value = param;
    node->first = record->values[index];
    return node;
}

} /* extern "C" */
