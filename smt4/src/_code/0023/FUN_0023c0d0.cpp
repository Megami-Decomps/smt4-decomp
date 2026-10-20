#include "common.h"

extern "C" {

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x44A8];
    /* 0x44A8 */ u32 flags;
} BtlMainState;

typedef struct CounterBlock {
    /* 0x000 */ u8 unk000[0x9D4];
    /* 0x9D4 */ u16 counters[1];
} CounterBlock;

typedef struct StateRef {
    /* 0x00 */ BtlMainState *state;
} StateRef;

/* Adds `delta` to the u16 counter of slot `index` (10-byte stride from 0x9d4), clamping it at 0;
 * returns 1 when it hit the floor, 0 otherwise and when the state's flag 4 is set (nothing changes). */
u32 FUN_0023c0d0(StateRef *ref, CounterBlock *block, s32 index, s32 delta)
{
    s32 value;

    if (ref->state->flags & 4) {
        return 0;
    }
    value = block->counters[index * 5] + delta;
    if (value < 0) {
        block->counters[index * 5] = 0;
        return 1;
    }
    block->counters[index * 5] = value;
    return 0;
}

} /* extern "C" */
