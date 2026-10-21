#include "common.h"
struct SixFloats { f32 values[6]; };
struct SaveData { u8 unk00000[163480]; SixFloats values; };
extern "C" {
SaveData *gameDataBlocksGetSaveData();
/* Stores six camera values in save data. */
void FUN_004731b8(const SixFloats *values) { gameDataBlocksGetSaveData()->values=*values; }
}
