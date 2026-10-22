/* NON_MATCHING: register allocation: retail keeps `id` in r0 and the list in r5 until the create call and pre-loads node->next; the flag test becomes `ands` here. */
#include "common.h"

struct ReflectUnit {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0xE];
    /* 0x62 */ s16 id;
};

struct ReflectNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 key;
    /* 0x0C */ ReflectNode *next;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ ReflectUnit *unit;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ s16 value;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u32 param;
};

struct ReflectList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ReflectNode *head;
};

struct ReflectRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 values[1];
};

extern "C" {

extern ReflectList *g_btlActionReflect;

void *btlGetMainState(void);
ReflectNode *btlQueueReflectAction(ReflectList *list, s16 id, s32 flags, u32 key);
ReflectRecord *FUN_0027da30(void *battle, s16 id);
s32 FUN_0027dab0(void *battle, ReflectUnit *unit);

/* Registers a type-0x25 reflect entry for the unit under `key` unless the unit lacks flag 1 or
 * the entry already exists; returns the new entry or NULL. */
ReflectNode *FUN_003dddd0(s32 id, u32 key, ReflectUnit *unit, u32 param)
{
    ReflectList *list;
    ReflectNode *node;
    ReflectRecord *record;
    s32 index;

    if (unit->flags & 1) {
        list = g_btlActionReflect;
        for (node = list->head; node != NULL; node = node->next) {
            if (node->type == 0x25 && node->key == key && node->unit == unit) {
                return NULL;
            }
        }
        node = btlQueueReflectAction(list, id, 0, key);
        record = FUN_0027da30(btlGetMainState(), unit->id);
        index = FUN_0027dab0(btlGetMainState(), unit);
        if (index < 0) {
            index = 0;
        }
        node->type = 0x25;
        node->unit = unit;
        node->param = param;
        node->value = record->values[index];
        return node;
    }
    return NULL;
}

} /* extern "C" */
