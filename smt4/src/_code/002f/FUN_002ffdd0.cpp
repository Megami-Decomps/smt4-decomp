/* NON_MATCHING: the flag test is built as and+lsr instead of ands+movne. */
#include "common.h"

extern "C" {

typedef struct Player {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;      /* bit 1: set */
} Player;

int scrSetResult(bool value);
Player *btlGetMainState(void);

/* Script command: passes whether flag bit 1 of the current player is set to scrSetResult. */
u32 FUN_002ffdd0(void)
{
    Player *player = btlGetMainState();

    scrSetResult((player->flags & 2) != 0);
    return 1;
}

} /* extern "C" */
