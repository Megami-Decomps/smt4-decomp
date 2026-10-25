/* Returns the level plus the bonus of the highest-priority held button (1/2/4/6 for the first group, 9/12/15 for the second), capped at 99 (or 99 outright when button 0x29 is held). */
#include "common.h"

extern "C" {

typedef struct State {
    /* 0x000 */ u8 unk000[0x106];
    /* 0x106 */ u8 level;
} State;

typedef struct StateHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ State *state;
} StateHolder;

extern StateHolder g_gameDataBlocks;

extern s32 flagBitIsSet(u32 button);

u32 FUN_0029dde0(void)
{
    u32 result = g_gameDataBlocks.state->level;

    if (flagBitIsSet(0x25) != 0) {
        result = g_gameDataBlocks.state->level + 1;
    }
    if (flagBitIsSet(0x26) != 0) {
        result = g_gameDataBlocks.state->level + 2;
    }
    if (flagBitIsSet(0x27) != 0) {
        result = g_gameDataBlocks.state->level + 4;
    }
    if (flagBitIsSet(0x28) != 0) {
        result = g_gameDataBlocks.state->level + 6;
    }
    if (flagBitIsSet(1) != 0) {
        result = g_gameDataBlocks.state->level + 9;
    }
    if (flagBitIsSet(2) != 0) {
        result = g_gameDataBlocks.state->level + 12;
    }
    if (flagBitIsSet(3) != 0) {
        result = g_gameDataBlocks.state->level + 15;
    }
    if (flagBitIsSet(0x29) != 0) {
        result = 99;
    }
    if (result > 99) {
        result = 99;
    }
    return result;
}

}
