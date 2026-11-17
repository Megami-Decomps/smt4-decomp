#include "gamedata/NavigationSavePosition.h"
extern "C" {
struct VectorSaveData { u8 unk00000[0x24B84]; MapJumpRequest position; };
VectorSaveData *gameDataBlocksGetSaveData(void);
/* Store the complete tagged navigation snapshot. */
void saveSetNavigationPosition(const MapJumpRequest *position) { gameDataBlocksGetSaveData()->position = *position; }
}
