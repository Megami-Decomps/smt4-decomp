#include "common.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

typedef struct FlagArea {
    /* 0x00 */ u8 unk00[0xE8C];
    /* 0xE8C */ u32 bits[1];
} FlagArea;

extern FlagArea *gameFlagsGetBlock(void);

/* Whether bit `bit` of the game flag block's array is set. */
u8 FUN_00384d34(int bit)
{
    FlagArea *area = gameFlagsGetBlock();

    s32 word = bit / 32;
    s32 shift = bit % 32;
    u32 bits = area->bits[word];

    return (bits & (1 << shift)) != 0;
}

} /* extern "C" */
