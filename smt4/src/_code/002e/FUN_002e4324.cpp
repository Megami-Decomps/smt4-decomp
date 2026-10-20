/* NON_MATCHING: registers differ (the mask constant 1 is shared with the return value; retail keeps them apart). */
#include "common.h"

extern "C" {

typedef struct Player {
    /* 0x0000 */ u8 unk0000[0x49BC];
    /* 0x49BC */ u32 flags;
} Player;

Player *btlGetMainState(void);
u32 scrGetArg(int index);

/* Script command: sets flag bit (script argument 0) in the current player's flags. */
u32 FUN_002e4324(int firstArg)
{
    u32 bit = scrGetArg(firstArg);

    btlGetMainState()->flags |= 1 << (bit & 0xff);
    return 1;
}

} /* extern "C" */
