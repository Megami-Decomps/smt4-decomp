/* NON_MATCHING: retail keeps the constant slot index 2 in a callee-saved register across the FUN_002c5be8 call (mov r0, #2; mov r4, r0; nop) and stores through [slots, r4, lsl #2]; armcc folds it to [slots, #8] */
/* Applies every element of `elements` to the target and the owner's state, then records `result` and the follow-up
 * value in the owner's result slots. */
#include "common.h"

extern "C" {
struct ResultSlots {
    /* 0x0 */ u32 *slots;
};

/* The owner's state block, 0xAC bytes after its start the result slot pointer lives. */
struct OwnerState {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u32 *resultSlots;
};

struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *state;
};

struct Target {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
};

/* A vector of element pointers. */
struct ElementList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 **begin;
    /* 0x08 */ u32 **end;
};

void FUN_0036b3a0(u32 *element, u32 handle);
void FUN_003681fc(OwnerState *state, u32 *element);
u32 FUN_002c5be8(void);

/* Stores `value` in result slot `slot`. */
static inline void setResultSlot(OwnerState *state, s32 slot, u32 value)
{
    state->resultSlots[slot] = value;
}

void FUN_003946b4(Owner *owner, Target *target, ElementList *elements, u32 result)
{
    OwnerState *state = (OwnerState *)(owner->state + 0x40);
    u32 handle = target->handle;
    u32 **end = elements->end;

    for (u32 **element = elements->begin; element != end; element++) {
        FUN_0036b3a0(*element, handle);
        FUN_003681fc(state, *element);
    }
    setResultSlot(state, 0, result);
    setResultSlot(state, 2, FUN_002c5be8());
}
}
