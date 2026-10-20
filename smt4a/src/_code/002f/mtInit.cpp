/* NON_MATCHING: the two literal-pool words are emitted in the opposite order (0x271 first here, 0x9908b0df first in retail), plus the usual 2-byte pad disassembly difference. */
#include "common.h"

extern "C" {

#define MT_N 624

typedef struct MersenneTwister {
    /* 0x000 */ u32 state[MT_N];
    /* 0x9C0 */ u32 index;       /* MT_N + 1 = not yet seeded */
    /* 0x9C4 */ u32 unk9C4;
    /* 0x9C8 */ u32 matrixA;     /* 0x9908b0df */
} MersenneTwister;

int FUN_002f670c(MersenneTwister *mt, u32 seed);

/* Initialises a Mersenne Twister with seed 1 and returns it. */
MersenneTwister *mtInit(MersenneTwister *mt)
{
    mt->index = MT_N + 1;
    mt->unk9C4 = 0;
    mt->matrixA = 0x9908b0df;
    FUN_002f670c(mt, 1);
    return mt;
}

} /* extern "C" */
