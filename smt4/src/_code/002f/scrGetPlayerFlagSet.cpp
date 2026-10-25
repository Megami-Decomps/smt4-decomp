#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {


int scrSetResult(bool value);

/* Script command: passes whether flag bit 1 of the current player is set to scrSetResult. */
u32 scrGetPlayerFlagSet(void)
{
    BtlMainState *player = btlGetMainState();

    int set = 0;
    if (player->battleFlags & 2) {
        set = 1;
    }
    scrSetResult(set);
    return 1;
}

} /* extern "C" */
