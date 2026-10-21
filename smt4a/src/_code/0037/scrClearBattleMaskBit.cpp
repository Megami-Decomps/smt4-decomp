#include "common.h"

extern "C" {

/* Game data with a bit mask at 0x4cc8. */
typedef struct {
    u8 unk00[0x4cc8];
    u32 mask;           /* 0x4cc8 */
} GameData;

GameData *btlGetMainState(void);
u32 scrGetArg(void);

static __inline void maskClear(u32 *word, u32 bit)
{
    *word = *word & ~(1 << bit);
}

/* Clears the mask bit selected by scrGetArg; always reports success. */
u32 scrClearBattleMaskBit(void)
{
    u32 bit = scrGetArg();
    GameData *data = btlGetMainState();

    maskClear(&data->mask, bit);
    return 1;
}

} /* extern "C" */
