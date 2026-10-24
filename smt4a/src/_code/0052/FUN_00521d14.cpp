/* NON_MATCHING: loop pointer handling only: retail advances a separate cursor (add r5, r5, #16) before the body and keeps the object/vtable loads in r1/r2; the build folds the advance into a pre-indexed load. */
#include "common.h"

/* An object a slot refers to; slot 1 of its vtable is called to release it. */
class SlotObject {
public:
    virtual void slot0();
    virtual void release();
};

/* One 0x10-byte slot of a linked pool: its object, an in-use flag and the neighbouring slots of its chain. */
struct PoolSlot {
    /* 0x0 */ SlotObject *object;
    /* 0x4 */ s32 active;
    /* 0x8 */ PoolSlot *next;
    /* 0xC */ PoolSlot *previous;
};

struct SlotPool {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ PoolSlot *slots;
};

extern "C" {

/* Frees the slots [first, last) of the pool: unlinks chained ones, releases the object of unchained active ones, and clears the active flag. */
void FUN_00521d14(SlotPool *pool, s32 first, s32 last)
{
    PoolSlot *cursor = pool->slots + first;
    PoolSlot *end = pool->slots + last;

    while (cursor < end) {
        PoolSlot *slot = cursor;
        cursor = slot + 1;
        PoolSlot *next = slot->next;
        if (next == NULL || next == slot) {
            if (slot->active != 0) {
                slot->object->release();
            }
        } else {
            next->previous = slot->previous;
            slot->previous->next = slot->next;
            slot->next = NULL;
            slot->previous = NULL;
        }
        slot->active = 0;
    }
}

} /* extern "C" */
