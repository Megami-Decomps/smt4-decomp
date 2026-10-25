#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

/* Game data with a bit mask at 0x4cc8. */
typedef struct {
    u8 unk00[0x4cc8];
    u32 mask;           /* 0x4cc8 */
} GameData;

u32 scrGetArg(u32 index);

static __inline void maskClear(u32 *word, u32 bit)
{
    *word = *word & ~(1 << bit);
}

/* Clears the mask bit selected by scrGetArg; always reports success. */
u32 scrClearBattleMaskBit(void)
{
    u32 bit = scrGetArg(0);
    GameData *data = reinterpret_cast<GameData *>(btlGetMainState());

    maskClear(&data->mask, bit);
    return 1;
}

} /* extern "C" */
