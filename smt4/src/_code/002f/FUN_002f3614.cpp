/* NON_MATCHING: register allocation only: retail keeps the shift constant 1 in r1 (materialised after the word load, shifted by r2) and the index temporaries in r1/r2; the build allocates the constant first. */
#include "common.h"

extern "C" {

typedef struct FlagArea {
    /* 0x00 */ u8 unk00[0xC98];
    /* 0xC98 */ u32 bits[1];
} FlagArea;

extern FlagArea *gameGetMapBlock(void);

/* Whether bit `bit` of the map block's flag array is set. */
u8 FUN_002f3614(int bit)
{
    FlagArea *area = gameGetMapBlock();

    return (area->bits[bit / 32] & (1 << (bit % 32))) != 0;
}

} /* extern "C" */
