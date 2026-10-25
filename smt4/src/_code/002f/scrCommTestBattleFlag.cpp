#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct Player {
    /* 0x0000 */ u8 unk0000[0x49BC];
    /* 0x49BC */ u32 flags;
} Player;

int scrSetResult(int value);
u32 scrGetArg(int index);

/* Script command: passes to scrSetResult whether flag bit (script argument 0) is set in the current player's flags. */
u32 scrCommTestBattleFlag(void)
{
    u32 bit = scrGetArg(0);

    scrSetResult((reinterpret_cast<Player *>(btlGetMainState())->flags & (1 << (bit & 0xff))) != 0);
    return 1;
}

} /* extern "C" */
