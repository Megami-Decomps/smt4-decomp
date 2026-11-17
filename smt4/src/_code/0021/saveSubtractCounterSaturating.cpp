/* NON_MATCHING: retail reads the counter through the save block pointer and writes it through a second, separately loaded save pointer offset by 0x8c (two global loads); the compiler folds the duplicated save-global loads and address calculations. */
#include "gamedata/GameSaveBlocks.h"
extern "C" {
/* Subtract from the saved counter without unsigned underflow. */
void saveSubtractCounterSaturating(u32 amount)
{
    u32 value = g_gameDataBlocks.saveBlock->body.points;
    g_gameDataBlocks.saveBlock->body.points = value < amount ? 0 : value - amount;
}
}
