/* NON_MATCHING: register allocation only: retail keeps the shift constant 1 in r1 (materialised after the word load, shifted by r2) and the index temporaries in r1/r2; the build allocates the constant first. */
#include "common.h"

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

    return (area->bits[bit / 32] & (1 << (bit % 32))) != 0;
}

} /* extern "C" */
