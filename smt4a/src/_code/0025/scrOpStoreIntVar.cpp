#include "common.h"

extern "C" {

u32 FUN_003d2004(void);

typedef struct Step {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 slot;
} Step;

typedef struct Sequence {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 index;
    /* 0x1C */ u8 unk1C[0xA0];
    /* 0xBC */ Step *steps;
    /* 0xC0 */ u8 unkC0[0x28];
    /* 0xE8 */ u32 *slots;
} Sequence;

/* Stores FUN_003d2004's result in the slot of the current step, advances to the next step and returns 1. */
u32 scrOpStoreIntVar(Sequence *sequence)
{
    u32 value;

    value = FUN_003d2004();
    sequence->slots[sequence->steps[sequence->index].slot] = value;
    sequence->index = sequence->index + 1;
    return 1;
}

} /* extern "C" */
