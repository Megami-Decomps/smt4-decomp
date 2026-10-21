#include "common.h"

extern "C" {

typedef struct Player {
    /* 0x000 */ u8 unk000[0x1B4];
    /* 0x1B4 */ int counter;
} Player;

Player *btlGetMainState(void);
int scrGetArg(int index);

/* Script command: adds script argument 0 to the current player's counter. */
u32 scrAddPlayerCounter(int firstArg)
{
    int amount = scrGetArg(firstArg);
    Player *player = btlGetMainState();
    int *counter = &player->counter;

    *counter += amount;
    return 1;
}

} /* extern "C" */
