/* NON_MATCHING: retail lays the two field compares out as separate arms sharing one success block (beq back into it); this build duplicates the success path and branches differently */
#include "common.h"

extern "C" {

typedef struct BtlMainState {
    /* 0x000 */ u8 unk000[0xEC];
    /* 0x0EC */ s32 first;
    /* 0x0F0 */ s32 second;
} BtlMainState;

extern BtlMainState *btlGetMainState(void);
extern s32 scrGetArg(u32 index);
extern void scrSetResult(s32 value);

/* Script command: pushes whether the battle state's field 0xec (argument 0 non-zero) or 0xf0 equals argument 1; returns 1. */
u32 FUN_003b0b58(void)
{
    s32 which = scrGetArg(0);
    s32 value = scrGetArg(1);
    BtlMainState *state = btlGetMainState();

    if (which != 0) {
        if (state->first == value) {
            scrSetResult(1);
            return 1;
        }
    } else if (state->second == value) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
