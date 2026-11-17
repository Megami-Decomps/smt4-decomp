#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct ScriptPlayer {
    /* 0x000 */ u8 unk000[0x1B4];
    /* 0x1B4 */ int counter;
} ScriptPlayer;

int scrGetArg(int index);

/* Script command: adds script argument 0 to the current player's counter. */
u32 scrAddPlayerCounter(void)
{
    int amount = scrGetArg(0);
    ScriptPlayer *player = reinterpret_cast<ScriptPlayer *>(btlGetMainState());
    int *counter = &player->counter;

    *counter += amount;
    return 1;
}

} /* extern "C" */
