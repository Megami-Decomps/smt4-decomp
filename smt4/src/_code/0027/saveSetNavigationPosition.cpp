#include "common.h"
extern "C" {
struct SavedVectorPair { f32 values[6]; };
struct VectorSaveData { u8 unk00000[0x24B84]; SavedVectorPair position; };
VectorSaveData *gameDataBlocksGetSaveData(void);
/* Store both vectors in the save-data position block. */
void saveSetNavigationPosition(const SavedVectorPair *position) { gameDataBlocksGetSaveData()->position = *position; }
}
