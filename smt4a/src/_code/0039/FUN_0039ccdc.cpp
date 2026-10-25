#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

/* Game data with a running total at 0x1f0. */
typedef struct {
    u8 unk00[0x1f0];
    s32 total;          /* 0x1f0 */
} GameData;

s32 scrGetArg(u32 index);

/* Adds scrGetArg's value to the game data total; always reports success. */
u32 FUN_0039ccdc(void)
{
    s32 amount = scrGetArg(0);
    GameData *data = reinterpret_cast<GameData *>(btlGetMainState());

    s32 *total = &data->total;

    *total = *total + amount;
    return 1;
}

} /* extern "C" */
