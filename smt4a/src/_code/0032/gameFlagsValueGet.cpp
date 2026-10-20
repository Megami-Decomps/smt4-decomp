#include "common.h"

extern "C" {

typedef struct GameFlags {
    /* 0x000 */ u8 unk000[0xE48];
    /* 0xE48 */ s8 values[1]; /* signed byte table, indexed */
} GameFlags;

GameFlags *gameFlagsGetBlock(void);

/* Signed byte `index` of the flag value table in the game flags block. */
s8 gameFlagsValueGet(s32 index)
{
    return gameFlagsGetBlock()->values[index];
}

} /* extern "C" */
