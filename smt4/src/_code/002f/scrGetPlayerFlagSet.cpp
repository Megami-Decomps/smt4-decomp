#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct Player {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;      /* bit 1: set */
} Player;

int scrSetResult(bool value);

/* Script command: passes whether flag bit 1 of the current player is set to scrSetResult. */
u32 scrGetPlayerFlagSet(void)
{
    Player *player = reinterpret_cast<Player *>(btlGetMainState());

    int set = 0;
    if (player->flags & 2) {
        set = 1;
    }
    scrSetResult(set);
    return 1;
}

} /* extern "C" */
