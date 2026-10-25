/* NON_MATCHING: compiler combines the record base offsets and allocates the index arithmetic differently. */
#include "gamedata/UnitRecordAccess.h"

namespace {
struct GameData { u8 padding[0x8c]; struct Slot { u8 padding[0x90]; u8 data[0x574]; } slots[1]; };
struct GameBlocks { u32 first; GameData *data; };
}

extern "C" {
extern GameBlocks g_gameDataBlocks;
void *gameGetUnitRecord(u32 index)
{
    return g_gameDataBlocks.data->slots[index].data;
}
}
