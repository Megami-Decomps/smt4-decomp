/* NON_MATCHING: instruction scheduling only: retail loads the key into r2, forms `mov r1, sp` before `add r0, r0, #8` and stores the key last; built loads into r1, adds first and sets r1 after the store. */
#include "common.h"

extern "C" {

typedef struct ListNode ListNode;

struct ListNode {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ ListNode *next;
};

typedef struct ListIter {
    /* 0x0 */ ListNode *node;
} ListIter;

typedef struct Variant Variant;

typedef struct Slot {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 variant[1];
} Slot;

s32 FUN_00237a94(Slot **slot, u8 *owner);
s32 FUN_00237d64(u8 *variant, u32 *value);

/* Adds the key to the owner's next free slot and advances the iterator; returns 2 when no slot can be made, else 0. */
u32 FUN_0035d074(ListIter *iter, u32 *outKey, u32 *key, u8 **owner)
{
    u32 value;
    Slot *slot;

    FUN_00237a94(&slot, *owner + 8);
    if (slot == NULL) {
        return 2;
    }
    value = *key;
    FUN_00237d64(slot->variant, &value);
    *outKey = *key;
    iter->node = iter->node->next;
    return 0;
}

} /* extern "C" */
