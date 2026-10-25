#include "common.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

typedef struct FlagArea {
    /* 0x00 */ u8 unk00[0x14A8];
    /* 0x14A8 */ u32 bits[1];
} FlagArea;

extern FlagArea *gameFlagsGetBlock(void);

/* Whether bit `bit` of the game flag block's array is set. */
u8 FUN_0033aa6c(int bit)
{
    FlagArea *area = gameFlagsGetBlock();

    const s32 wordIndex = bit / 32;
    const s32 bitIndex = bit % 32;
    const u32 word = area->bits[wordIndex];
    return (word & (1u << bitIndex)) != 0;
}

} /* extern "C" */
