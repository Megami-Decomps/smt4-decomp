#include "common.h"

extern "C" {

/* Game data with a running total at 0x1f0. */
typedef struct {
    u8 unk00[0x1f0];
    s32 total;          /* 0x1f0 */
} GameData;

GameData *btlGetMainState(void);
s32 scrGetArg(void);

/* Adds scrGetArg's value to the game data total; always reports success. */
u32 FUN_0039cce0(void)
{
    s32 amount = scrGetArg();
    GameData *data = btlGetMainState();

    s32 *total = &data->total;

    *total = *total + amount;
    return 1;
}

} /* extern "C" */
