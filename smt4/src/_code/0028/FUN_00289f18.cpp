/* NON_MATCHING: the constants 1 and 0 are held in r7/r8 (retail: r8/r7). */
#include "common.h"

extern "C" {

#define SLOT_COUNT 5

typedef struct Meters {
    /* 0x0000 */ u8 unk0000[0x37BC];
    /* 0x37BC */ u8 active[SLOT_COUNT];
    /* 0x37C1 */ u8 unk37C1[3];
    /* 0x37C4 */ u8 unk37C4[4];
    /* 0x37C8 */ s32 addA[SLOT_COUNT];
    /* 0x37DC */ s32 addB[SLOT_COUNT];
    /* 0x37F0 */ s32 elapsed[SLOT_COUNT];
    /* 0x3804 */ u8 mode[SLOT_COUNT];
    /* 0x3809 */ s8 kind[SLOT_COUNT];
} Meters;

/* Starts slot `slot` with mode/kind and adds `amount` to its kind-0 or kind-1 accumulator. */
void FUN_00289f18(Meters *meters, int amount, int slot, u8 mode, int kind)
{
    meters->active[slot] = 1;
    meters->kind[slot] = kind;
    meters->mode[slot] = mode;
    meters->elapsed[slot] = 0;
    if (kind == 0) {
        meters->addA[slot] += amount;
    } else if (kind == 1) {
        meters->addB[slot] += amount;
    }
}

} /* extern "C" */
