/* NON_MATCHING: retail reads the counter through the save block pointer and writes it through a second, separately loaded save pointer offset by 0x8c (two global loads); the compiler folds the duplicated save-global loads and address calculations. */
#include "common.h"
extern "C" {
struct SavedCounter { u8 unk00[0x9870]; u32 value; };
struct SavedCounterGlobals { u32 unk00; SavedCounter *work; };
extern SavedCounterGlobals g_gameDataBlocks;
/* Subtract from the saved counter without unsigned underflow. */
void saveSubtractCounterSaturating(u32 amount) { u32 value=g_gameDataBlocks.work->value; g_gameDataBlocks.work->value=value<amount ? 0 : value-amount; }
}
