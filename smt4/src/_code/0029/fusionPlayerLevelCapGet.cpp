/* Returns the level plus the bonus of the highest-priority held button (1/2/4/6 for the first group, 9/12/15 for the second), capped at 99 (or 99 outright when button 0x29 is held). */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

extern s32 flagBitIsSet(u32 button);

u32 fusionPlayerLevelCapGet(void)
{
    u32 result = g_gameDataBlocks.saveBlock->body.slots.player.level;

    if (flagBitIsSet(0x25) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 1;
    }
    if (flagBitIsSet(0x26) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 2;
    }
    if (flagBitIsSet(0x27) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 4;
    }
    if (flagBitIsSet(0x28) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 6;
    }
    if (flagBitIsSet(1) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 9;
    }
    if (flagBitIsSet(2) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 12;
    }
    if (flagBitIsSet(3) != 0) {
        result = g_gameDataBlocks.saveBlock->body.slots.player.level + 15;
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
