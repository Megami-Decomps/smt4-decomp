/* NON_MATCHING: the flag word and the constant 1 swap registers (retail: flags in r1, 1 in r0). */
#include "common.h"

extern "C" {

typedef struct Player {
    /* 0x0000 */ u8 unk0000[0x49BC];
    /* 0x49BC */ u32 flags;
} Player;

int scrSetResult(int value);
Player *btlGetMainState(void);
u32 scrGetArg(int index);

/* Script command: passes to scrSetResult whether flag bit (script argument 0) is set in the current player's flags. */
u32 FUN_002f14f0(int firstArg)
{
    u32 bit = scrGetArg(firstArg);

    scrSetResult((btlGetMainState()->flags & (1 << (bit & 0xff))) != 0);
    return 1;
}

} /* extern "C" */
